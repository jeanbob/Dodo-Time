
export CC=gcc
SRC_DIR=src/
BIN_DIR=bin/
export LIBS += $(shell pkg-config --libs libpanelapplet-2.0)
export CFLAGS += $(shell pkg-config --cflags libpanelapplet-2.0)

all: dodotime

dodotime: 
	mkdir bin
	cd $(SRC_DIR) && $(MAKE)

clean:
	@echo "Nettoyage des fichiers en cours"
	rm $(BIN_DIR)*
	rm $(SRC_DIR)*.o
	rmdir bin
	@echo "Nettoyage terminé"

install:
	@echo "Installation en cours"
	cp *.png /usr/share/pixmaps/
	cp *.server /usr/lib/bonobo/servers/
	mv $(BIN_DIR)dodotime /usr/lib/gnome-panel/
	@echo "Installation terminé"

remove:
	@echo "Désinstallation en cours"
	rm /usr/share/pixmaps/dodotime*.png
	rm /usr/lib/bonobo/servers/DodoTime.server
	rm /usr/lib/gnome-panel/dodotime
	@echo "Désinstallation terminé"

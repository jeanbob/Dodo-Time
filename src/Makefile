all: dodotime

dodotime: fonctions_calcul.o dodotime.o
	$(CC) $(CFLAGS) $(LIBS) -o ../bin/$@ $^

fonctions_calcul.o: fonctions_calcul.c
	$(CC) -c $^

dodotime.o: dodotime.c
	$(CC) -c $(CFLAGS) $(LIBS) $^
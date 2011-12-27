#include "dodotime.h"

static gboolean dodotime_applet_fill (PanelApplet *applet, const gchar *iid, gpointer data)
{
     GtkWidget *label, *ico, *hbox;
     if (strcmp (iid, "OAFIID:DodoTime") != 0) return FALSE;
     label = gtk_label_new ("Dodo Time");
     hbox = gtk_hbox_new (FALSE, 5);
     ico = gtk_image_new_from_file ("/usr/share/pixmaps/dodotime24.png");
     gtk_box_pack_start(GTK_BOX (hbox), ico, FALSE, FALSE, 0);
     gtk_box_pack_start(GTK_BOX (hbox), label, FALSE, FALSE, 0);
     gtk_container_add (GTK_CONTAINER (applet), hbox);
     gtk_widget_show_all (GTK_WIDGET (applet));
     return TRUE;
}

PANEL_APPLET_BONOBO_FACTORY ("OAFIID:DodoTime_Factory",
			     PANEL_TYPE_APPLET,
			     "DodoTime Applet",
			     "0",
			     dodotime_applet_fill,
			     NULL);


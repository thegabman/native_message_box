#include "NMB/NMB.h"
#include <iostream>


#if defined(__linux__)
    static void dummy( GtkApplication* p_app, gpointer user_data ){}
#endif


int main( int argc, char** argv )
{
#if defined(__linux__)
    GtkApplication* p_app = gtk_application_new( "org.native_message_box.example", G_APPLICATION_FLAGS_NONE );
    g_signal_connect( p_app, "activate", G_CALLBACK(dummy), NULL );
    g_application_run( G_APPLICATION(p_app), argc, argv );
#endif

    NMB::Result info    = NMB::show( "Info", "I am some really valuable information, but nobody ever reads me. If only I were recognized by somebody. :(", NMB::Icon::ICON_INFO );
    NMB::Result warning = NMB::show( "Warning", "Look at the yellow sign to my left. It is yellow, not even red. So just proceed.", NMB::Icon::ICON_WARNING );
    NMB::Result error   = NMB::show( "Error", "Oh Crap. I can't take this any more. This is a hell of an error. Just Run!", NMB::Icon::ICON_ERROR );

    printf( "Info:    %i\n", info    );
    printf( "Warning: %i\n", warning );
    printf( "Error:   %i\n", error   );

#if defined(__linux__)
    g_object_unref( p_app );
#endif

    return 0;
}

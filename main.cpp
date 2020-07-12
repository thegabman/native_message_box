#include "NativeMessageBox.h"


int main()
{
    NativeMessageBox::open( "Info",    "Lorem ipsum dolor set amet.", NativeMessageBox::Icon::INFO    );
    NativeMessageBox::open( "Warning", "Lorem ipsum dolor set amet.", NativeMessageBox::Icon::WARNING );
    NativeMessageBox::open( "Error",   "Lorem ipsum dolor set amet.", NativeMessageBox::Icon::ERROR   );
    
    return 0;
}

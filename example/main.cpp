#include "NMB/NMB.h"


int main()
{
    NMB::show( "Info", "I am some really valuable information, but nobody ever reads me. If only I were recognized by somebody. :(", NMB::Icon::INFO );
    NMB::show( "Warning", "Look at the yellow sign to my left. It is yellow, not even red. So just proceed.", NMB::Icon::WARNING );
    NMB::show( "Error", "Oh Crap. I can't take this any more. This is a hell of an error. Just Run!", NMB::Icon::ERROR );
    
    return 0;
}

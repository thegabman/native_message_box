# Native Message Box
NMB or (N)ative (M)essage (B)ox is a very tiny, cross platform and header only C++ library to natively handle message dialogs.

## Supported
- Window (using [Winuser.h](https://docs.microsoft.com/en-us/windows/win32/api/winuser/))
- MacOS (using [CoreFoundation](https://developer.apple.com/documentation/corefoundation))
- Linux (using [GTK](https://www.gtk.org/docs/installations/linux/))

## Example Usage

```cpp
#include "NMB/NMB.h"

...

NMB::Result result = NMB::open( "Error", "Error Message", NMB::Icon::ERROR );

if( result == NMB::Result::OK )
{
    // DO SOMETHING
}
else
{
    // DO SOMETHING ELSE
}
``` 

## Screenshots
### Windows

![WinInfo](images/win_info.png)

![WinWarning](images/win_warning.png)

![WinError](images/win_error.png)

### MacOS

![MacInfo](images/mac_info.png)

![MacWarning](images/mac_warning.png)

![MacError](images/mac_error.png)

### Linux 

![LinuxInfo](images/linux_info.png)

![LinuxWarning](images/linux_warning.png)

![LinuxError](images/linux_error.png)

## License

LICENSE File covers all files in this repo.
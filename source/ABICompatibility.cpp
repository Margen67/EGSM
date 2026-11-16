#include <Platform.hpp>

// Visual Studio 2015 and newer (the MSVC 14.x ABI is stable across all of them)
#if defined SYSTEM_WINDOWS && _MSC_VER < 1900

#error The only supported compilation platforms for this project on Windows are Visual Studio 2015 or newer (for ABI compatibility reasons).

#endif

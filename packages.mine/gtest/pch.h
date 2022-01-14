// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#pragma once

// add headers that you want to pre-compile here

#include "framework.h"

#if GTEST_OS_WINDOWS
# include <windows.h>
# include <io.h>
# include <sys/stat.h>
# include <map>  // Used in ThreadLocal.
# ifdef _MSC_VER
#  include <crtdbg.h>
# endif  // _MSC_VER
#else
# include <unistd.h>
#endif  // GTEST_OS_WINDOWS

#if GTEST_OS_MAC
# include <mach/mach_init.h>
# include <mach/task.h>
# include <mach/vm_map.h>
#endif  // GTEST_OS_MAC

#if GTEST_OS_DRAGONFLY || GTEST_OS_FREEBSD || GTEST_OS_GNU_KFREEBSD || \
    GTEST_OS_NETBSD || GTEST_OS_OPENBSD
# include <sys/sysctl.h>
# if GTEST_OS_DRAGONFLY || GTEST_OS_FREEBSD || GTEST_OS_GNU_KFREEBSD
#  include <sys/user.h>
# endif
#endif

#if GTEST_OS_QNX
# include <devctl.h>
# include <fcntl.h>
# include <sys/procfs.h>
#endif  // GTEST_OS_QNX

#if GTEST_OS_AIX
# include <procinfo.h>
# include <sys/types.h>
#endif  // GTEST_OS_AIX

#if GTEST_OS_FUCHSIA
# include <zircon/process.h>
# include <zircon/syscalls.h>
#endif  // GTEST_OS_FUCHSIA

#include <algorithm>
#include <cctype>
#include <cstdio>
#include <ctype.h>
#include <cwchar>
#include <fstream>
#include <iomanip>
#include <limits.h>
#include <limits>
#include <list>
#include <map>
#include <math.h>
#include <memory>
#include <ostream>
#include <sstream>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <time.h>
#include <utility>
#include <vector>
#include <wchar.h>
#include <wctype.h>

#include "gtest/gtest-death-test.h"
#include "gtest/gtest-matchers.h"
#include "gtest/gtest-message.h"
#include "gtest/gtest-printers.h"
#include "gtest/gtest-spi.h"
#include "gtest/gtest-test-part.h"
#include "gtest/gtest-typed-test.h"
#include "gtest/gtest.h"
#include "gtest/internal/custom/gtest.h"
#include "gtest/internal/gtest-filepath.h"
#include "gtest/internal/gtest-internal.h"
#include "gtest/internal/gtest-port.h"
#include "gtest/internal/gtest-string.h"

#include "src/gtest-internal-inl.h"

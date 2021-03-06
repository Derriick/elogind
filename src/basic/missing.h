/* SPDX-License-Identifier: LGPL-2.1+ */
#pragma once

/* Missing glibc definitions to access certain kernel APIs */

/// Additional includes needed by elogind
#include "musl_missing.h"

#ifndef RLIMIT_RTTIME
#define RLIMIT_RTTIME 15
#endif

/* If RLIMIT_RTTIME is not defined, then we cannot use RLIMIT_NLIMITS as is */

//#include "missing_audit.h"
//#include "missing_btrfs_tree.h"
#include "missing_capability.h"
#include "missing_drm.h"
#include "missing_fcntl.h"
#include "missing_fs.h"
//#include "missing_input.h"
#include "missing_magic.h"
//#include "missing_mman.h"
//#include "missing_network.h"
//#include "missing_prctl.h"
#include "missing_random.h"
#include "missing_resource.h"
#include "missing_sched.h"
#include "missing_socket.h"
#include "missing_stdlib.h"
#include "missing_timerfd.h"
#include "missing_type.h"

#include "missing_syscall.h"

#ifndef UTILS
#define UTILS

#include <time.h>
<<<<<<< HEAD
=======
#include <sys/types.h>
>>>>>>> upstream/master

#include "context_manager.h"

<<<<<<< HEAD
=======
void check_file(const char *filename);
void log_pids(pid_t parent, pid_t child[3], task ts);

>>>>>>> upstream/master
double get_time_diff(struct timespec st, struct timespec et);

#endif
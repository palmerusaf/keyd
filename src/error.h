/*
 * keyd - A key remapping daemon.
 *
 * © 2019 Raheman Vaiya (see also: LICENSE).
 */
#ifndef ERROR_H
#define ERROR_H

#include <stdio.h>

#define MAX_MESSAGE_SIZE 4096

#define dbg(fmt, ...) { \
	if (debug_level) \
		fprintf(stderr, "DEBUG: %s:%d: "fmt"\n", __FILE__, __LINE__, ##__VA_ARGS__); \
}

#define err(fmt, ...) snprintf(errstr, sizeof(errstr), fmt, ##__VA_ARGS__);

extern int debug_level;
extern char errstr[2048];

#endif

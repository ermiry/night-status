#ifndef _NIGHT_VERSION_H_
#define _NIGHT_VERSION_H_

#define NIGHT_VERSION			"0.1"
#define NIGHT_VERSION_NAME		"Version 0.1"
#define NIGHT_VERSION_DATE		"23/08/2021"
#define NIGHT_VERSION_TIME		"23:37 CST"
#define NIGHT_VERSION_AUTHOR	"Erick Salas"

// print full night version information
extern void night_version_print_full (void);

// print the version id
extern void night_version_print_version_id (void);

// print the version name
extern void night_version_print_version_name (void);

#endif
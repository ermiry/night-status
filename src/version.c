#include <cerver/utils/log.h>

#include "version.h"

// print full test version information
void night_version_print_full (void) {

	cerver_log_both (
		LOG_TYPE_NONE, LOG_TYPE_NONE,
		"\nNight Status Service Version: %s", NIGHT_VERSION_NAME
	);

	cerver_log_both (
		LOG_TYPE_NONE, LOG_TYPE_NONE,
		"Release Date & time: %s - %s", NIGHT_VERSION_DATE, NIGHT_VERSION_TIME
	);

	cerver_log_both (
		LOG_TYPE_NONE, LOG_TYPE_NONE,
		"Author: %s\n", NIGHT_VERSION_AUTHOR
	);

}

// print the version id
void night_version_print_version_id (void) {

	cerver_log_both (
		LOG_TYPE_NONE, LOG_TYPE_NONE,
		"\nNight Status Service Version ID: %s\n", NIGHT_VERSION
	);

}

// print the version name
void night_version_print_version_name (void) {

	cerver_log_both (
		LOG_TYPE_NONE, LOG_TYPE_NONE,
		"\nNight Status Service Version: %s\n", NIGHT_VERSION_NAME
	);

}

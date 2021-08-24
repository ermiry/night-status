#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <cerver/http/response.h>

#include <cerver/utils/utils.h>

#include "version.h"

#define VERSION_BUFFER_SIZE		64

HttpResponse *night_works = NULL;
HttpResponse *current_version = NULL;

HttpResponse *catch_all = NULL;

unsigned int night_service_init (void) {

	unsigned int retval = 1;

	night_works = http_response_json_key_value (
		HTTP_STATUS_OK, "msg", "Night status works!"
	);

	char version[VERSION_BUFFER_SIZE] = { 0 };
	(void) snprintf (
		version, VERSION_BUFFER_SIZE - 1,
		"%s - %s",
		NIGHT_VERSION_NAME, NIGHT_VERSION_DATE
	);

	current_version = http_response_json_key_value (
		HTTP_STATUS_OK, "version", version
	);

	catch_all = http_response_json_key_value (
		HTTP_STATUS_OK, "msg", "Night status service!"
	);

	if (
		night_works && current_version
		&& catch_all
	) retval = 0;

	return retval;

}

void night_service_end (void) {

	http_response_delete (night_works);
	http_response_delete (current_version);

	http_response_delete (catch_all);

}

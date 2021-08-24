#ifndef _NIGHT_ROUTES_MAIN_H_
#define _NIGHT_ROUTES_MAIN_H_

struct _HttpReceive;
struct _HttpRequest;

// GET /night
extern void night_handler (
	const struct _HttpReceive *http_receive,
	const struct _HttpRequest *request
);

// GET /night/version
extern void night_version_handler (
	const struct _HttpReceive *http_receive,
	const struct _HttpRequest *request
);

// GET *
extern void night_catch_all_handler (
	const struct _HttpReceive *http_receive,
	const struct _HttpRequest *request
);

#endif
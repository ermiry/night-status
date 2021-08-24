#ifndef _NIGHT_MAIN_H_
#define _NIGHT_MAIN_H_

struct _HttpResponse;

extern struct _HttpResponse *night_works;
extern struct _HttpResponse *current_version;

extern struct _HttpResponse *catch_all;

extern unsigned int night_service_init (void);

extern void night_service_end (void);

#endif
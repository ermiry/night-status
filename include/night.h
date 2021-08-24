#ifndef _NIGHT_H_
#define _NIGHT_H_

#include "runtime.h"

struct _HttpResponse;

extern RuntimeType RUNTIME;

extern unsigned int PORT;

extern unsigned int CERVER_RECEIVE_BUFFER_SIZE;
extern unsigned int CERVER_TH_THREADS;
extern unsigned int CERVER_CONNECTION_QUEUE;

// inits night main values
extern unsigned int night_init (void);

// ends night main values
extern unsigned int night_end (void);

#endif
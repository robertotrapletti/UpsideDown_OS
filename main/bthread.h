#ifndef UPSIDEDOWN_BTHREAD_H
#define UPSIDEDOWN_BTHREAD_H

#include <setjmp.h>
#include "tqueue.h"
#include "bthread_private.h"

#include "tqueue.h"
#include "bthread_private.h"

#define bthread_printf(...)\
printf(__VA_ARGS__);\
bthread_yield();

int bthread_create(bthread_t *bthread, const bthread_attr_t *attr, void *(*start_routine) (void *), void *arg);
int bthread_join(bthread_t bthread, void **retval);
void bthread_yield();
void bthread_exit(void *retval);


#endif //SUPSI_SO_18_BTHREAD_H

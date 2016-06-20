/* Header file for message passing subsystem.  See assignment text for
   the intended meaning of these functions. */

#ifndef KUDOS_PROC_MSG
#define KUDOS_PROC_MSG

#include <stddef.h> // size_t

#include "proc/syscall.h" /* For MSG_ constants. */

int msg_mailbox(int mid);

int msg_receive(int mid, void *dest);

int msg_send(int mid, size_t size, void *src);

#endif

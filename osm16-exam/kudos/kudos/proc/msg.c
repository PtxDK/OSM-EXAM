#include "proc/msg.h"

#include "kernel/panic.h" // KERNEL_PANIC
#include "lib/types.h"    // UNUSED

int msg_mailbox(UNUSED int mid) {
  KERNEL_PANIC("msg_mailbox() not implemented yet.\n");
  return 0;
}

int msg_receive(UNUSED int mid, UNUSED void *dest) {
  KERNEL_PANIC("msg_receive() not implemented yet.\n");
  return 0;
}

int msg_send(UNUSED int mid, UNUSED size_t size, UNUSED void *src) {
  KERNEL_PANIC("msg_send() not implemented yet.\n");
  return 0;
}

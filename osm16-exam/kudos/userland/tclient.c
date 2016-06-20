#include "lib.h"

#define MAILBOX 1337
#define NUM_MESSAGES 1000

int main(void) {
  char msg[1024];

  for (int i = 0; i < NUM_MESSAGES; i++) {
    snprintf(msg, sizeof(msg), "Hello number %d from me!", i);
    syscall_msg_send(MAILBOX, strlen(msg), msg);
  }

  syscall_exit(0);
}

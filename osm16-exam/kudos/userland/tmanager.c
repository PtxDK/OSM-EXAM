#include "lib.h"

#define MY_MAILBOX 1337

int main(void) {
  int r;

  if ((r = syscall_msg_mailbox(MY_MAILBOX)) != 0) {
    printf("tmanager: syscall_msg_mailbox() failed with %d\n", r);
    syscall_halt();
  }

  while (1) {
    char buffer[1024];
    if ((syscall_msg_receive(MY_MAILBOX, buffer)) != 0) {
      printf("tmanager: syscall_msg_receive() failed with %d\n", r);
      syscall_halt();
    }
    printf("tmanager line: %s\n", buffer);
  }
}

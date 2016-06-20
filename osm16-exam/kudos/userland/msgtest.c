#include "lib.h"

#define MANAGER "[disk]tmanager.mips32"
#define CLIENT "[disk]tclient.mips32"
#define TOSTART 10

int main(void) {
  int manager;
  int clients[TOSTART];

  if ((manager = syscall_spawn(MANAGER, NULL)) < 0) {
    printf("msgtest: failed to start manager.\n");
    syscall_halt();
  }

  for (int i = 0; i < TOSTART; i++) {
    if ((clients[i] = syscall_spawn(CLIENT, NULL)) < 0) {
      printf("msgtest: failed to start client %d.\n", i);
    }
  }
  for (int i = 0; i < TOSTART; i++) {
    syscall_join(clients[i]);
  }
  printf("All clients joined.\n");
  syscall_halt();
}

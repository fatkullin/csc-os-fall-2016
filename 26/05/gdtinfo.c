#include "types.h"
#include "mmu.h"
#include "user.h"

int
main()
{
  struct segdesc gdt[NSEGS];
  int i;
  user(gdt);
  for (i = 1; i < NSEGS; ++i)
  {
    struct segdesc sd = gdt[i];
    printf(1, "%p ", ((unsigned int*)&sd)[0]);
    printf(1, "%p\n", ((unsigned int*)&sd)[1]);
  }
  return 0;
}



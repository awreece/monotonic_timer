// Copyright 2013 Alex Reece
//
// A brief demo of the monotonic timer code.

#include <stdio.h>

#include "./monotonic_timer.h"

int main() {
  double before = monotonic_seconds();
  printf("Hello, World\n");
  double after = monotonic_seconds();

  printf("Time: %.6f\n", after - before);
  return 0;
}

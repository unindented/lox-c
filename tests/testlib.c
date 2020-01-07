#include <minunit/minunit.h>
#include <stdio.h>

int tests_run = 0;

static char *test_something() {
  mu_assert("something", 1 == 1);
  return 0;
}

static char *all_tests() {
  mu_run_test(test_something);
  return 0;
}

int main(int argc, char **argv) {
  char *result = all_tests();

  printf("1..%d\n", tests_run);

  if (result != 0) {
    printf("not ok - %s\n", result);
  } else {
    printf("ok\n");
  }

  return result != 0;
}

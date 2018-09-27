#include <iostream>
#include <string>

int max(int one, int two);

int main(int argc, char **argv) {
  int one = 14;
  int two = 2323;

  int three = max(one, two);
  std::cout << three;
  return 0;
}

int max (int one, int two) {
  int result;

  if (one > two)
    result = one;
  else
    result = two;
  return result;
}
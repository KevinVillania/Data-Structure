#include <stdio.h>

#define F4 "%d\n%d\n%d\n%d\n"
#define F20 F4 F4 F4 F4 F4
#define F100 F20 F20 F20 F20 F20

#define X4(y) , y, y + 1, y + 2, y + 3
#define X20(y) X4(y) X4(y + 4) X4(y + 8) X4(y + 12) X4(y + 16)
#define X100(y) X20(y) X20(y + 20) X20(y + 40) X20(y + 60) X20(y + 80)

int main() {
  printf(F100 X100(1));
  return 0;
}

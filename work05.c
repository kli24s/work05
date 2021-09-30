#include <stdio.h>

int main() {

  // [1]
  char cha = 'h';
  int in = 30;
  long lon = 31;

  // [2]
  printf("==============================================================[2]\n");
  printf("char:\tHex: %p\tDecimal: %lu\n", &cha, &cha);
  printf("int: \tHex: %p\tDecimal: %lu\n", &in, &in);
  printf("long:\tHex: %p\tDecimal: %lu\n", &lon, &lon);

  // [3]
  char *chap = &cha;
  int *intp = &in;
  long *lonp = &lon;

  // [4]
  printf("==============================================================[4]\n");
  printf("Char Pointer: %p\n Int Pointer: %p\nLong Pointer: %p\n", chap, intp, lonp);

  // [5]
  *chap = 'k';
  *intp = 31;
  *lonp = 32;

  printf("==============================================================[5]\n");
  printf("New Char Pointer: %p\n New Int Pointer: %p\nNew Long Pointer: %p\n", chap, intp, lonp);

  // [6]
  unsigned int ui = 21;
  int *uipi = &ui;
  char *uipc = &ui;

  // [7]
  printf("==============================================================[7]\n");
  printf("uipi: %p uipi points to: %u\n", uipi, *uipi);
  printf("uipc: %p uipc points to: %u\n", uipc, *uipc);

  // [8]
  printf("==============================================================[8]\n");
  printf("ui Hex: %x\nui Decimal: %u\n", ui, ui);

  // [9]
  printf("==============================================================[9]\n");
  int i;
  for (i = 0; i < 4; i++) {
    printf("Hex: %hhx\tDecimal: %hhu\n", *(uipc + i), *(uipc + i));
  }

  // [10]
  printf("==============================================================[10]\n");
  for (i = 0; i < 4; i++) {
    (*(uipc + i))++;
    printf("ui Hex: %x\tui Decimal: %u\n", ui, ui);
  }
  for (i = 0; i < 4; i++) {
    printf("Hex: %hhx\tDecimal: %hhu\n", *(uipc + i), *(uipc + i));
  }

  // [11]
  printf("==============================================================[11]\n");
  for (i = 0; i < 4; i++) {
    (*(uipc + i)) += 16;
    printf("ui Hex: %x\tui Decimal: %u\n", ui, ui);
  }
  for (i = 0; i < 4; i++) {
    printf("Hex: %hhx\tDecimal: %hhu\n", *(uipc + i), *(uipc + i));
  }
}

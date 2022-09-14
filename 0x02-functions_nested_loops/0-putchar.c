#include "main.h"
/**
 * main - print _putchar as a messeage.
 *
 * Return : 0(success)
 */
int main(void)
{
  int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
  int siz , cnt;
  siz = sizeof(str) / sizeof(int);
  for ( cnt = 0; cnt < siz; cnt++)
    {
      _putchar(str[cnt]);
    }
  _putchar('\n');
    return (0);
}

#include <stdio.h>

int main (void)
{
     char Holiday[] = "Light";
     char *Holidayptr;

     Holidayptr[0] = 'n';

     Holidayptr = Holiday;

      Holidayptr[0] = 'n';

     printf("%c\n", Holidayptr[0]);

}

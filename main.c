#include <stdio.h>
#include <stdlib.h>

int square( int a )
{
return (a *a);
}

int main(int argc, char *argv[]) {
   
int a = 2;
square(a);
printf("a=%i\n",a);
   
   return 0;
}

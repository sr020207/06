#include <stdio.h>
#include <stdlib.h>

void func(void) {
int x;
printf("func1 x is at %p\n", &x);
}
   
int main(int argc, char *argv[]) {
	
int x;

printf("main x is at %p\n", &x); //%p : 16진수로표현 
func();

/*
출력 : 
main x is at 000000000062FE1C
func1 x is at 000000000062FDDC
*/
   
   return 0; 
}

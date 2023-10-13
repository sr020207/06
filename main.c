#include <stdio.h>
#include <stdlib.h>

int sumTwo(int a, int b)
{
	return a + b;
}
   
int square(int n)
{
	return n * n;
}

int get_max(int x, int y) {
	
	if (x > y)
    return x;
    
    return y;
}

int main(int argc, char *argv[]) {

int num1 = 30;
int num2 = 5;

printf("sumTwo : %i \n", sumTwo(num1,num2) );

printf("square : %i \n", square(num1) );

printf("max : %i \n", get_max(num1, num2) );

   return 0; 
}

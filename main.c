#include <stdio.h>
#include <stdlib.h>

void print_star()
{
int i;
for( i = 0; i < 10; i++ )
printf("*");
}

int main(int argc, char *argv[]) {
	
	int i;
	
	print_star(); 
	print_star(); 
	print_star(); 
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>


int factorial(int x) //���丮�� �Լ� 
{
	 int i, result;
	result = 1;
	    for (i = 1; i<= x; i++) {
		result *= i;
		}
        
        return result;
}

int combination(int n, int r) {
    if (n < r || n < 0 || r < 0) {
        return 0;
    }
    return factorial(n) / (factorial(r) * factorial(n - r));
}




int main(int argc, char *argv[]) {
	
int n, r;

printf("n ���� �Է��ϼ��� : \n");
scanf("%d", &n);

printf("r ���� �Է��ϼ��� : \n");
scanf("%d", &r);

int result = combination(n, r);

printf("factorial n : %i \n", factorial(n) );

printf("factorial n-r : %i \n", factorial(n-r) );

printf("factorial r : %i \n", factorial(r) );

printf("combination : %i \n", result );


   return 0; 
}

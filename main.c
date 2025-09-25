#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	unsigned int x;
	int b;
	
	printf("input a number: ");
	scanf("%ui", &x);
	
	for (b=0; x != 0; x >>= 1)
	{
		if(x&1) //x의 2진수 끝자리가 1과 같은지를 확인  
		{
			b++; //b를 1증가시킴  
		}
	}
	
	printf("The result is: %i\n", b);
	 
	return 0;
}

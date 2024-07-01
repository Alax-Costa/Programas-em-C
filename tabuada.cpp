#include <stdio.h>

int main() {
    int i, num;

    printf("Escolha o numero da tabuada: ");
    scanf("%d",&num);
    
    printf("\n");
    printf("Tabuada do %d:\n", num);
    printf("\n");
    
	for (i = 1; i <= 10; i++) 
	{
        
		printf("%d x %d = %d\n", i, num, num * i);
		   
    }

    return 0;
}
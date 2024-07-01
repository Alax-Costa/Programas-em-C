#include <stdio.h>
#include <stdlib.h>
float celsius(float fahr)
{
	float c;
	c=((fahr-32.0)*5.0)/9;
	return c;
}
int main() {
    
    float c, f;
    printf("Digite a temperatura em graus fahrenheit: \n");
    scanf("%f",&f);
    c=celsius(f);
    printf("celsius = %.2f \n", c);
    system("PAUSE");
    return 0;
    
}
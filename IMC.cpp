#include <stdio.h>
 
int main() {
    float peso, altura, imc;
 
    printf("Digite seu peso: \n");
    scanf("%f",&peso);
    printf("Digite sua altura: \n");
    scanf("%f",&altura);
 
    imc = peso / (altura * altura);
 
    if (imc < 18.5){
        printf("Esta abaixo do peso");
    }
    else if (imc >= 18.5 && imc < 24.9 ){
        printf("Peso ideal (Parabens)");
    }
    else if (imc >= 25. && imc < 29.9 ){
        printf("Levemente acima do peso");
    }
    else if (imc >= 30.0 && imc < 34.9 ){
        printf("Obesidade Grau 1");
    }
    else if (imc >= 35.0 && imc < 39.9 ){
        printf("Obesidade Grau 2 (Severa)");
    }
    else if (imc > 40){
        printf("Obesidade 3 (morbida)");
    }
    return 0;
}
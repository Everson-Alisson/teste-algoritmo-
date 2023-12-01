#include <stdio.h>
int soma(int a, int b){
    return a+b;
}
int main(){
    int num1, num2, resultado;
    printf("digite um numero\n");
    scanf("%d", &num1);
    
    printf("digite outro numero\n");
    scanf("%d", &num2);

    resultado = soma(num1, num2);
    printf("a soma é: %d\n", resultado);
    return 0;
}

#include <stdio.h>Add commentMore actions

int main()

{
 float peso;
 float altura;
 float imc;
    // Solicitar datos al usuario
    printf("Ingrese su peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese su altura en metros: ");
    scanf("%f", &altura);
    
    if (peso <= 0) {
printf("\nIngrese un valor mayor a cero en peso");
return 1;
}
if (altura <= 0) {
    printf("\nIngrese un valor mayor a cero en altura ");
return 1;
    
}
    imc = peso / (altura * altura);

    // Mostrar el resultado
    printf("\nSu indice de masa corporal (IMC) es: %.2f\n", imc);

    // Mostrar tabla de referencia
    printf("\nTabla de referencia IMC:\n");
    printf("-----------------------------\n");
    printf("IMC menor a 18.5   : Bajo peso\n");
    printf("IMC entre 18.5-24.9: Peso normal\n");
    printf("IMC entre 25-29.9  : Sobrepeso\n");
    printf("IMC 30 o mayor     : Obesidad\n");
    printf("-----------------------------\n");Add commentMore actions
 return 0;
}

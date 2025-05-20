
#include <stdio.h>

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
    printf("\nSu indice de masa corporal (IMC) es: %.2f\n\n", imc);
    
    if(imc>=30)
printf("Usted padece obesidad");
else if (imc<30 && imc>=25)
printf("Usted tiene sobrepeso");
else if (imc<25 && imc>=18.5)
printf("Usted esta en el rango de peso saludable");
else if (imc<18.5)
printf("Usted tiene bajo peso");

 return 0;
}

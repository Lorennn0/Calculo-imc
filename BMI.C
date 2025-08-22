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
    printf("\nSu indice de masa corporal (IMC) es: %.2f\n", imc);
    
    if(imc<=18.5){
        printf ("Usted tiene bajo peso\n");
    }
    else if(imc>18.5 && imc<24.5){
        printf("Usted tiene un peso normal, está saludable\n");
    }
    else if(imc>=24.5 && imc<30){
        printf("Usted tiene sobrepeso\n");
    }
    else if(imc>30){
        printf("Usted sufre de obesidad\n");
    }

 return 0;
}

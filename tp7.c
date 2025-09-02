#include <stdio.h>

 int main(){
 int TAM;
 float max=0;
 int cod_max=0;
 int cod_min=0;
 float min=99999999999999999999;

 printf("Ingrese cantidad de mercaderia: ");
 scanf("%d", &TAM);

 float precios [TAM];

 int codigos [TAM];

 for(int i = 0; i<TAM; i++){
 printf("\nIngrese codigo: ");
 scanf("%d", &codigos[i]);

 while(codigos[i]<1 || codigos[i]>999999999){
 printf("\nIngrese código válido (menor a 9 cifras): ");

  scanf("%d", &codigos[i]);
 }

 printf("\nIngrese el precio del producto: $ ");
 scanf("%f\n", &precios[i]);

 while(precios[i]<0){
 printf("\nIngrese un precio válido (mayor a 0)");
 scanf("%f\n", &precios[i]);
 }
 }

for(int i= 0; i<TAM; i++){


if(max<precios[i]){
max = precios[i];
cod_max = codigos[i];

}
if(min>precios[i]){
min = precios[i];
cod_min = codigos[i];
}

printf("|||Codigo: %d |||Precio : $%.2f||| \n", codigos[i], precios[i]);

}
printf("El mayor de todos los precios es %.2f y su codigo es : %d", max, cod_max);
printf("\nEl menor de todos los precios es %.2f y su codigo es : %d", min, cod_min);
 return 0;
 }

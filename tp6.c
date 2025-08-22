#include <stdio.h>

#define PI 3.1416



    int altura,longitud,radio;

int calcularAreaRectangulo(int altura, int longitud);

int calcularDiagonalRectangulo(int altura, int longitud);

int calcularPerimetroRectangulo(int altura, int longitud);

int calcularAreaCirculo(int radio);

int calcularPerimetroCirculo(int radio);

int imprimirResultados(int opcion, int areacirc, int arearec, int perimetrorec, int perimetrocirc, int diagonal);


int main()
{
    int opcion;
    int arearec;
    int diagonal;
    int perimetrorec;
    int areacirc;
    int perimetrocirc;
    
    printf("Ingrese 1 para realizar mediciones del rectangulo\nIngrese 2 para realizar mediciones de un circulo\n");
    scanf("%d" , &opcion);
    
    
    switch(opcion)
    {
        case 1:  printf("Ingrese la altura y el perimetro: ");
        scanf("%d",&altura);
        scanf("%d",&longitud);
        
        arearec=calcularAreaRectangulo(altura, longitud);
         diagonal=calcularDiagonalRectangulo(altura, longitud);
         perimetrorec=calcularPerimetroRectangulo(altura, longitud);
       
        
         imprimirResultados(opcion, areacirc,  arearec,  perimetrorec,  perimetrocirc,  diagonal);
        break;
        case 2: printf ("Ingrese radio del circulo");
        scanf("%d",&radio);
        
       areacirc = calcularAreaCirculo(radio);

       perimetrocirc = calcularPerimetroCirculo(radio);
       
        imprimirResultados(opcion, areacirc,  arearec,  perimetrorec,  perimetrocirc,  diagonal);
       break;
       
       default: printf("Usted acaba de elegir cualquier cosa");
    }
    return 0;
}

int calcularAreaRectangulo(int altura, int longitud){
    int arearec;
    arearec = altura * longitud;
    
    return arearec;
}

int calcularDiagonalRectangulo(int altura, int longitud){
    int diagonal;
    diagonal = (altura*altura) + (longitud*longitud);
   
    return diagonal;
}

int calcularPerimetroRectangulo(int altura, int longitud){
    int perimetrorec;
    perimetrorec = 2 * (altura + longitud);
    
    return perimetrorec;
}

int calcularAreaCirculo(int radio){
    int areacirc;
    areacirc = PI * (radio * radio);
    
    return areacirc;
}


int calcularPerimetroCirculo(int radio){
    int perimetrocirc;
    perimetrocirc = 2 * radio * PI;
    
    return perimetrocirc;
    
}
int imprimirResultados(int opcion, int areacirc, int arearec, int perimetrorec, int perimetrocirc, int diagonal){
   if(opcion==1){ 
       printf("El area de su rectangulo es:%d \n La diagonal: %d \n El perimetro:%d", arearec,diagonal,perimetrorec);
   }
   if(opcion==2){
       printf("El area de su circulo es %d\n", areacirc);
       printf("El perimetro de su circulo es: %d",perimetrocirc);
     
   }
    return 1;
}

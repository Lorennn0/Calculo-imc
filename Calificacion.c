#include <stdio.h>

int calificacion;

int main()
{
    printf("Ingrese la calificacion del examen: ");
    scanf ("%d", &calificacion);
    
    if(calificacion>=90)
      printf("Calificacion A");
    else if (calificacion<90 && calificacion>=80)
    printf("Calificacion B");
    else if (calificacion<80 && calificacion>=70)
    printf("Calificacion C");
    else if (calificacion<70 && calificacion>=60)
    printf("Calificacion D");
    else if (calificacion<60)
    printf("Calificacion F");
    
    return 0;
}

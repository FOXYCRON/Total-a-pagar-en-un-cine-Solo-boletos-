/* Programa que obtiene el promedio de un almno en cierta materia */
#include<conio.h>
#include<stdio.h>
char nom[30], mat[25];
float cal, prom;
int a;
main ()
{

	prom = 0;
   printf("Promedio de calificaciones de una materia\n\n");
   printf(" Dame el nombre del alumno: "); gets(nom);
   printf(" Dame el nombre del alumno: "); gets(mat);
   for (a=1; a<=3; a=a1)

   {
     printf("\n Dame la calificacion %d: ", a);  scanf("%f", &cal);
     prom = prom + cal

}
	printf("\n El promedio es: %.1f", prom/3);
   getch();
   }
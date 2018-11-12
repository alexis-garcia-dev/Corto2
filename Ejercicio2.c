#include <stdio.h>
#include <math.h>
//Struct//
struct Puntosx{
	
	float x1;
	float x2;
	}puntosx;
	//Struct//
	
struct Puntosy{
	
	float y1;
	float y2;
	}puntosy;
	
int main(){
	//Pedir Puntox1//
	
	printf("\nIngrese el punto x1\t");
	scanf("%f",&puntosx.x1);
	//Pedir Puntox2//
    printf("\nIngrese el punto x2\t");
	scanf("%f",&puntosx.x2);
	//Pedir Puntoy1//
	printf("\nIngrese el punto y1\t");
	scanf("%f",&puntosy.y1);
	//Pedir Puntoy2//
    printf("\nIngrese el punto y2\t");
	scanf("%f",&puntosy.y2);
	int opcion;
	//Menu//
	printf("\nSeleccione una opcion \n1.-Calcular Distancia \n2.-Ecuacion de la recta\n3.-salir\n");
	scanf("%d",&opcion);
	
	do
	{
		if (opcion==1)
		{
		float sx=(puntosx.x2-puntosx.x1)*(puntosx.x2-puntosx.x1);
		float sy=(puntosy.y2-puntosy.y1)*(puntosy.y2-puntosy.y1);
		double sto=sx+sy;
		double resultado=sqrt((sto));
		printf(" La distancia entrepuntos es %f",resultado);
		}
		
		if (opcion==2)
		{
		float p1=(puntosy.y2-puntosy.y1)/(puntosx.x2-puntosx.x1);
		printf("La recta es de la ecuacion es = y-%f",puntosy.y1);
		printf(" = ");
		printf("%f",p1);
		printf("(");
		printf("x -%f",puntosx.x1);
		printf(")");
		}
		
		
	printf("\nSeleccione una opcion \n1.-Calcular Distancia \n2.-Ecuacion de la recta\n3.-salir\n");
	scanf("%d",&opcion);	
	} while(opcion!=3);
	
	
	return 0;
	}

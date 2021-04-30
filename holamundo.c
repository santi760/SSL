#include <stdio.h>
#include <stdlib.h>

// %d = enteros para el print f
// %f = floats
// %s = cadenas
int main(int argc, char *argv[]) {
	
	int edad;
	char nombre[20]; 
	
	printf("%s","Ingrese su nombre: ");
	scanf("%s",nombre);
	
	printf("%s","Ingrese su edad: ");
	scanf("%d",&edad);
	
	printf("Hola %s, tu edad es %d  ",nombre,edad);
	
	system("pause");
	
	return 0;
}
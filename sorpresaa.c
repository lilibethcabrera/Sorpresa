#include <stdio.h>
#include <stdlib.h>
# no vuelve a pedir contrasena si no son iguales ni libera los punteros
# 10/20
void comparacion(char *c, char *b);

int main(int aklp, char *afcr[]) {

    char l;
    char p;
    char * ilt1;
    char * ifc;

    printf("introduzca la contrasena: ");
    ilt1= malloc( 1 * sizeof(char) );
    int k = 0;
    while( (l = getch())!='x'){
        ilt1 = realloc( ilt1, (k+2) * sizeof(char) );
        ilt1[k]=l;
        printf(" ");
        k++;
    }
     ilt1[k]='\0';
     printf("Introduzca nuevamente la contrasena:\n");
    ifc= malloc( 1 * sizeof(char) );
    k = 0;

    while( (p = getch())!='x'){
        ifc = realloc( ifc, (k+2) * sizeof(char) );
        ifc[k]=p;
        printf(" ");
        k++;
    }
    ifc[k]='\0';

        comparacion(ilt1,ifc);
    return 0;
}

void comparacion(char *t, char *t1){

	if(strncmp(t,t1)==0){
		printf("Las contrasenas son iguales\n");
	}
	else
	{
		printf("Las contrasenas son diferentes\n");
	}
}

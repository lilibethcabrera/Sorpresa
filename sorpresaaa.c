#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



struct estudiantes{
  char nombre[15];
  int matricula;
  char apellido[15];
  int telefono[10];
   char carrera[30];
   char materiascursadas[15];
char calificacion[2];
};

typedef struct estudiantes ESTUD;

struct agregarcarrera{
  char carrera[30];
  char codigocarrera[4];
  char matperiodo1[20];
  char matperiodo2[20];
};
typedef struct agregarcarrera AC;


  int main(){
  char opcion;
  int e,i,j,m,c1,c2,mat,caltotal,credtotal;
  float indice;
  ESTUD ESTU[10];
  ESTUD MATERIASCUR[20];
  AC CARRERAS[10];
  ESTUD CALI[10];



inicio:

  printf("Opcion 1: Inscribir Estudiante\n",162);
  printf("Opcion 2: Agregar Carrera\n",162);
  printf("Opcion 3: Agregar materias y calificaciones\n",162);
  printf("Opcion 4: Verificar Calificaciones\n",162);
  printf("Opcion 5: Indices Acumulados\n",162);
  printf("Opcion 7: SALIR\n\n",162);



  do
  {
    printf("Digite la opcion deseada:");
    fflush( stdin );
    scanf("%s", &opcion);
  }

  while ( opcion < '1' || opcion > '7' );

  switch( opcion )
   {
     case '1':
     system("cls");
     printf("Digite la cantidad de estudiantes que desea inscribir:\n");
     scanf("%i",&e);
     for(i=0;i<e;i++){
       printf("Digite el nombre del estudiante #%i: ",i+1);
       scanf("%s",&ESTU[i].nombre);
       printf("Digite el apellido del estudiante #%i" ,i+1);
       scanf("%s",&ESTU[i].apellido);
       printf("Digite la matricula del estudiante #%i: ",i+1);
       scanf("%i",&ESTU[i].matricula);
       printf("Digite el telefono del estudiante #%i: ",i+1);
       scanf("%i",&ESTU[i].telefono);
       printf("Digite la carrera del estudiante #%i: ",i+1);
       scanf("%s",&ESTU[i].carrera);
       printf("Digite la cantidad de materias que el estudiante ha cursado #%i: ",i+1);
       printf("0= El estudiante no ha cursado materias");
       scanf("%i",&m);
if(m==0){
  system("cls");
  goto inicio;
  system("cls");}
            for(j=0;j<m;j++){
                printf("Diga la materia #%i",j+1);
                scanf("%s",&MATERIASCUR[j].materiascursadas);
}
     }


  system("cls");
  goto inicio;
  system("cls");

case '2':
      system("cls");
      printf("Digite la cantidad de materias que desea agregar:\n");
      scanf("%i",&e);
for(i=0;i<e;i++){
  printf("Digite el nombre de la carrera: ");
  scanf("%s",&CARRERAS[i].carrera);
  printf("Digite el codigo de la carrera: ");
  scanf("%s",&CARRERAS[i].codigocarrera);
  printf("Digite cuantas materias tiene el primer ciclo: ");
  scanf("%i",&c1);

  for(j=0;j<c1;j++){
  printf("Digite el nombre de la materia #%i : ",j+1);
  scanf("%s",&CARRERAS[j].matperiodo1);
}

  printf("Digite cuantas materias tiene el segundo ciclo: ");
  scanf("%i",&c2);

  for(j=0;j<c2;j++){
  printf("Digite el nombre de la materia #%i : ",j+1);
  scanf("%s",&CARRERAS[j].matperiodo2);
}
system("cls");
goto inicio;

}

case '3': system("cls");
      for(i=0;i<e;i++){
        printf("%s\t",&ESTU[i].nombre);
        printf("%s\t",&ESTU[i].apellido);
        printf("%i\t",&ESTU[i].matricula);
        printf("%i\t",&ESTU[i].telefono);
        printf("%s\n",&ESTU[i].carrera);

      }
printf("Digite la matricula que desea modificar:\n");
scanf("%i",&mat);

for(i=0;i<e;i++){
  if(mat==ESTU[i].matricula){
    printf("Seleccionaste %s\n\n",&ESTU[i].nombre);
    printf("Digite cuantas materias ha cursado el estudiante:\n");
    scanf("%i",&m);
    if(m==0){
      system("cls");
      goto inicio;
      system("cls");}
                for(j=0;j<m;j++){
                    printf("Digite la materia #%i",j+1);
                    scanf("%s",&MATERIASCUR[j].materiascursadas);
                    printf("Digite la calificacion de esta materia:\n");
                    scanf("%s\n",&CALI[j].calificacion);
    }

  }
}
system("cls");

goto inicio;

case '4':
  system("cls");
  printf("Introduzca la matricula que desea ver las calificaciones: ");
  scanf("%i",&mat);

  for(i=0;i<e;i++){
    if(mat==ESTU[i].matricula){
      printf("Seleccionaste %s\n\n",&ESTU[i].nombre);
  for(j=0;j<m;j++){
    printf("%s\t",&MATERIASCUR[j].materiascursadas);
    printf("%s\n",&CALI[j].calificacion);
  }
}else{printf("Esta matricula no existe\n");}
system("cls");

goto inicio;}

case '5':
system("cls");
for(i=0;j<e;i++){
  printf("Indice acumulado:",ESTU[i].matricula);
  credtotal=0;
  caltotal=0;
for(j=0;j<m;j++){
  if(CALI[i].calificacion=='a' ||CALI[i].calificacion== 'A'){credtotal=credtotal+5; caltotal=caltotal+4;  }
    if(CALI[i].calificacion=='b' ||CALI[i].calificacion== 'B'){credtotal=credtotal+5; caltotal=caltotal+3;  }
      if(CALI[i].calificacion=='c' ||CALI[i].calificacion== 'C'){credtotal=credtotal+5; caltotal=caltotal+2;  }
        if(CALI[i].calificacion=='d' || CALI[i].calificacion=='D'){credtotal=credtotal+5; caltotal=caltotal+1;  }
          if(CALI[i].calificacion=='f' ||CALI[i].calificacion== 'F'){credtotal=credtotal+5; caltotal=caltotal+0;  }
}
indice=caltotal/credtotal;
printf("El indice acumulado de el periodo #%i es : %f",i+1,indice);
}
goto inicio;
system("cls");
   } while ( opcion != '7' );


return 0;
}

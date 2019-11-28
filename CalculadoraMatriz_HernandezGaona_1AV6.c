/*CALCULADORA DE MATRICES
  HERNANDES GAONA VICTOR NATHANAEL
            1AV6                   */
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

void leerMatriz(int*ptr,int size1,int size2);
void printMatriz (int*ptr,int size1,int size2);
void SumaMatrices(int matriz1[3][3], int matriz2[3][3], int*ptr);
void RestaMatrices(int matriz1[3][3], int matriz2[3][3], int*ptr);
void MultiplicaMatrices(int m1[3][3],int m2[3][3],int*ptr);

int main(){
int a[3][3];
int b[3][3];
int c[3][3];
int *ptrC=&c[0][0];
int *ptrA=&a[0][0];
int *ptrB=&b[0][0];
int opt;
char repet;
do{
printf("Calculadora de matrices\n");
printf("\nMenu\n");
printf("Elige una operacion a realizar:\n");
printf("1-Suma\n");
printf("2-Resta\n");
printf("3-Multiplicacion\n");
scanf("%d",&opt);
printf("Introduce los valores de la matriz A:\n");
leerMatriz(ptrA,3,3);
printMatriz(ptrA,3,3);
printf("Introduce los valores de la matriz B:\n");
leerMatriz(ptrB,3,3);
printMatriz(ptrB,3,3);
switch(opt){
case 1:
SumaMatrices(a,b,ptrC);
break;
case 2:
RestaMatrices(a,b,ptrC);
break;
case 3:
MultiplicaMatrices(a,b,ptrC);
break;
default:
printf("OPERACION INCORRECTA \n");
}
printf("La matriz resultante es:\n");
printMatriz(ptrC,3,3);
printf("Desea realizar otra operacion?   Si    No\n");
scanf("%s",&repet);
} while(repet=='s'||repet=='S');
}
void leerMatriz (int*ptr,int size1,int size2){
for(int i=0; i<size1; i++){
for(int j=0; j<size2; j++){
printf("Matriz[%d][%d]:",i,j);
scanf("%d",ptr+j+3*i);
}
}
}
void printMatriz (int*ptr,int size1,int size2){
for(int i=0; i<size1; i++){
for(int j=0; j<size2; j++){
printf("%d",*(ptr+j+3*i));
}
printf("\n");
}
}
void SumaMatrices(int matriz1[3][3], int matriz2[3][3], int*ptr){
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
*(ptr+j+(3*i))= matriz1[i][j]+matriz2[i][j];
}
}
}
void RestaMatrices(int matriz1[3][3], int matriz2[3][3], int*ptr){
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
*(ptr+j+(3*i))= matriz1[i][j]-matriz2[i][j];
}
}
}
void MultiplicaMatrices(int m1[3][3],int m2[3][3],int*ptr){
 *(ptr)=(m1[0][0]*m2[0][0])+(m1[0][1]*m2[1][0])+(m1[0][2]*m2[2][0]);
 *(ptr+1)=(m1[0][0]*m2[0][1])+(m1[0][1]*m2[1][1])+(m1[0][2]*m2[2][1]);
 *(ptr+2)=(m1[0][0]*m2[0][2])+(m1[0][1]*m2[1][2])+(m1[0][2]*m2[2][2]);
 *(ptr+3)=(m1[1][0]*m2[0][0])+(m1[1][1]*m2[1][0])+(m1[1][2]*m2[2][0]);
 *(ptr+4)=(m1[1][0]*m2[0][1])+(m1[1][1]*m2[1][1])+(m1[1][2]*m2[2][1]);
 *(ptr+5)=(m1[1][0]*m2[0][2])+(m1[1][1]*m2[1][2])+(m1[1][2]*m2[2][2]);
 *(ptr+6)=(m1[2][0]*m2[0][0])+(m1[2][1]*m2[1][0])+(m1[2][2]*m2[2][0]);
 *(ptr+7)=(m1[2][0]*m2[0][1])+(m1[2][1]*m2[1][1])+(m1[2][2]*m2[2][1]);
 *(ptr+8)=(m1[2][0]*m2[0][2])+(m1[2][1]*m2[1][2])+(m1[2][2]*m2[2][2]);
}

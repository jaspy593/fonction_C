/*
Algorithme Tableau_2D
variable n,p,i,j;
         T:tableau entier[100][100];
Debut
 ecrire("entre la valeur de n:");
 lire(n);
 ecrire("entre la valeur de p:");
 lire(p);
si(n<1 ou n>100 ou p<1 ou p>100)
  ecrire("entre une valeur entre 1 â 100");
  sinon
  pour(i<-0;i<=n;i<-i+1)
  pour(j<-0;j<=p;j<-j+1)
      ecrire("entre la valeur du T[%d][%d]:",i,j);
      lire(T[i][j]);
  fin pour
  fin pour
     pour(i<-0;i<=n;i<-i+1) 
  pour(j<-0;j<=p;j<-j+1)
      ecrire("%d",T[i][j]);
  fin pour
  ecrireln
  fin pour
fin si
fin
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int n,p,i,j,o=0,min=0,g=0,k=0,T[100][100];
do
{
 printf("entre la valeur de n:");
 scanf("%d",&n);
 printf("entre la valeur de p:");
 scanf("%d",&p);
 o++;
 if(o==3){
  exit(0);
  }

}
while(n<1 || n>100 || p<1 || p>100);
{
 printf("entre une valeur entre 1 â 100 \n");
}
 for( i=0 ;i<=n ;i++)
 {
  for( j=0 ;j<=p ;j++)
  {
   printf("entre la valeur du T[%d][%d]:",i,j);
   scanf ("%d",&T[i][j]);
  }
 }
  for( i=0 ;i<=n ;i++)
 {
  for( j=0 ;j<=p ;j++)
  { 
   printf("\t %d",T[i][j]);
  }
 printf("\n");
 }
 do
{
  min=T[i][j];
  T[i][j]<g;
  g<k;
}
while(k<T[i][j]);
printf("min=%d\n",T[i][j]);
 return (0);
}

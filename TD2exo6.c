//commentaire vaovao
#include <stdio.h>
void recuperation(int *a,int b)
    {
     printf("Entrez la valeur du tableau %d:\n",b);
     {
      printf("entrez la valeur de n:");
      scanf("%d",a);
     }
    }
void recaptab(int *a,int *p,int b)
     {
      int i;
      printf("Entrez la valeur du tableau %d:\n",b);
      for(i=0;i<=*a;i++)
         {
          printf("T[%d]:",i);
          scanf("%d",p+i);
         }
     }
void affichage(int *a,int *p)
     {
      int i;
      for(i=0;i<=*a;i++)
         {
          printf("\t%d",*(p+i));
         }
     }
int main()
{
 int n,m,i,A[100],B[100];
       
      recuperation(&n,1);
      recaptab(&n,A,1);
      recuperation(&m,2);
      recaptab(&m,B,2);
      affichage(&n,A);
      affichage(&m,B);
      return(0);
}

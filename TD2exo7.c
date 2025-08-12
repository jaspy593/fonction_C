#include <stdio.h>
void recuperation(int *a)
     {
      printf("entrez la valeur de n:");
      scanf("%d",a);
     }
void recapu(int *a,int *p,int b)
     {
      int i;
      printf("Entrez les valeurs du vecteur %d:\n",b);
       for(i=0;i<=*a;i++)
         {
          printf("v[%d]:",i);
          scanf("%d",p+i);
         }
     } 
void affichage(int *a,int *p,int b)
     {
      int i;
      printf("Affichage coordonée vecteur %d:\n",b);
       for(i=0;i<=*a;i++)
         {
          printf("\t%d",*(p+i));
         }
       printf("\n");
     }
int somme(int *a,int *p,int *c)
    {
     int i,uv=0;;
       for(i=0;i<=*a;i++)
          {
            uv=uv+(*(p+i) * *(c+i));
          }
     return(uv);
    }
void aff(int *a)
     {
	  printf("\n");
          printf("la produit vectoriel de u et v est %d\n",*a); 
     }
int main()
{
 int n,i,d=0,s=0,U[100],V[100]; 

       recuperation(&n);
       recapu(&n,U,1);
       recapu(&n,V,2);
       affichage(&n,U,1);
       affichage(&n,V,2);
       s=somme(&n,U,V);
       aff(&s); 
      return(0);
}

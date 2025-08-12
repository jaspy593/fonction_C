#include <stdio.h>
void recuperation(int *a)
    {
      printf("entrez la valeur de n:");
      scanf("%d",a);
    }
void recaptab(int *b,int *p)
    {
     int i;
      for(i=0;i<=*b;i++)
        {
          printf("entrez la valeur du T[%d]:",i);
          scanf("%d",p+i);
        }
    }
void affichage(int *c,int *p)
    {
     int i;
     for(i=0;i<=*c;i++)
       {
        printf("\t %d",*(p+i));
       }
      printf("\n");
    }
int somme(int *d,int *p)
    {
     int i,e=0;
     for(i=0;i<=*d;i++)
       {
        e = e + *(p+i);
       }
     return(e);
    }
void aff(int *e)
    {
     printf("la somme du contenu du tableau est %d",*e);
     printf("\n");
    }
int main()
{
 int n,i,s=0,T[50];

   recuperation(&n);
   recaptab(&n,T);
   affichage(&n,T);
   s=somme(&n,T);
   aff(&s);
  
return(0);
}

   

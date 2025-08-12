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
int max(int *c,int *p)
    {
     int i,k,g=0;
     int *max=&g;
     for(i=0;i<=*c;i++)
      {
        if(*max<*(p+i))
         {
          max=p+i;
         }
      }
     return(*max);
    }
int maxm(int *c,int *p)
    {
     int i,k,g=0;
     int *max=&g;
     for(i=0;i<=*c;i++)
      {
        if(*max<*(p+i))
         {
          k=i;
         }
      }
     return(i);
    }
void affichage(int *d,int *p)
    {
     int i;
     for(i=0;i<=*d;i++)
       {
        printf("\t %d",*(p+i));
       }
     printf("\n");
    }
void aff(int *e,int *f)
    {
     printf("la valeur maximum du tableau est %d dans la position %d \n",*e,*f);
    }
 int main()
 {
  int n,i,maxi=0,c=0,T[50];
   
  recuperation(&n);
  recaptab(&n,T);
  c= max(&n,T);
  maxi=maxm(&n,T);
  affichage(&n,T);
  aff(&c,&maxi);

return(0);
}

   

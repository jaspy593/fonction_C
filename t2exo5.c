#include <stdio.h>
#include <stdlib.h>
void recuperation(int *a)
     {
       printf("entrez la valeur de n:");
       scanf("%d",a);
     }
void recaptab(int *a,int *p)
     {
      int i;
      for(i=0;i<=*a;i++)
        {
         printf("entrez la valeur du T[%d]:",i);
         scanf("%d",p+i);
        }
     }
void affichage(int *a,int *p)
    {
     int i;
     printf("Affichage avant l'inversion:\n");
     for(i=0;i<=*a;i++)
	{
         printf("\t%d",*(p+i));
	}
     printf("\n");
    }
void inverse(int *a,int *p)
    {
     int i,temp;
     printf("Affichage avant l'inversion:\n");
         for(i=0;i<=*a/2;i++)
            {
	     temp=*(p+i);
	     *(p+i)=*(p+(*a-i));
	     *(p+(*a-i))=temp;
	    }
       for(i=0;i<=*a;i++)
        {
          printf("\t%d",*(p+i));
	}
    }
     
int main()
{
 int n,i,T[50];
    
    recuperation(&n);
    recaptab(&n,T);
    affichage(&n,T);
    inverse(&n,T);

return(0);
}

   

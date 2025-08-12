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
int suppr(int *a,int *p)
     {
      int z,i,j,k=*a,temp;
      for(j=0;j<=*a;j++)
	 {
          for(i=0;i<=k;i++)
            {
             if(*(p+i)==0)
              {
	       temp=*(p+i);
	       *(p+i)=*(p+(i+1));
	       *(p+(i+1))=temp;
              }
            }
	}
       z=k-1;
       for(i=0;i<=k;i++)
	  {
           if(*(p+i)==0)
	    {
	     z--;
	    }
          }
       return(z);
     }
void affichage(int *a,int *p)
     {
      int i;
      for(i=0;i<=*a;i++)
	 {
          printf("\t%d",*(p+i));
         }
       printf("\n");
      }
int main()
{
 int n,i,o,T[50];
    
    recuperation(&n);
    recaptab(&n,T);
    o=suppr(&n,T);
    affichage(&o,T);

return(0);
}

   

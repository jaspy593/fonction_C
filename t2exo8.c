#include <stdio.h>
#include <stdlib.h>
void recuperation(int *a)
     {
       printf("entre la valeur de n:");
       scanf("%d",a);
     }
void recaptab(int *a,int *p)
     {
      int i;
      for(i=0;i<=*a;i++)
        {
         printf("entre la valeur du A[%d]:",i);
         scanf("%d",p+i);
        }
     }
void affichage(int *a,int *p)
     {
      int i;
      for(i=0;i<=*a;i++)
        {
         printf("\t %d",*(p+i));
        }
      printf("\n");
     }
void min(int *a,int *p)
     {
      int i,c=0,min=*p;
      for(i=0;i<=*a;i++)
        {
         if(min>*(p+i))
          {
           min=*(p+i);
           c=i;
          }
        }
       printf("\t min=%d dans la position %d",min,c);
       printf("\n");
     }
void max(int *a,int *p)
     {
      int i,max=*p,d=0;
      for(i=0;i<=*a;i++)
         {
          if(max<*(p+i))
           {
            max=*(p+i);
            d=i;
           }
         }
       printf("\t max=%d dans la position %d",max,d);
       printf("\n");
     }
int main()
{
 int n,i;
 int A[50];

 recuperation(&n);
 recaptab(&n,A);
 affichage(&n,A);
 min(&n,A);
 max(&n,A);
return(0);
}

   

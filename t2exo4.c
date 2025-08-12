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
 void max(int *a,int *p)
     {
      int TNEG[50],i,v=0;
      for(i=0;i<=*a;i++)
        {
         if(*(p+i)<0)
          {
           TNEG[v]=*(p+i);
	   v++;
          }
        }
      printf("TNEG:");
       for(i=0;i<v;i++)
         {     
          printf("\t%d",TNEG[i]);
	 }
       printf("\n");
     }
void min(int *a,int *p)
    {
     int TPOS[50],i,v=0;
     for(i=0;i<=*a;i++)
	{
	 if(*(p+i)>=0)
           {
	    TPOS[v]=*(p+i);
	    v++;
           }
	}
      printf("TPOS:");
      for(i=0;i<v;i++)
	 {
          printf("\t%d",TPOS[i]);
	 }
       printf("\n");
    }
 int main()
 {
  int n,i;
  int T[50];
    
    recuperation(&n);
    recaptab(&n,T);
    max(&n,T);
    min(&n,T);

return(0);
}

   

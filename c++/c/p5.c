/*
 
        *
      * * 
    * * * 
  * * * *
* * * * *


*/


#include<stdio.>
int main()
   {
           int i,j,k,n;
           printf("Enter no of rows:");
           scanf("%d",&n);
           for(i=1;i<=n;i++){
                   for(j=1;j<=n-i;j++){
                           printf(" ");
                  }
                   for(k=0;k<i;k++){
                           printf("*");
          }
                  printf("\n");
       }
          return 0;
  }


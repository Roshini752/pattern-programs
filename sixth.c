/*          *
            * *
            * * *
            * * * *
            * * * * *
            * * * *
            * * *
            * *
            *     */


           #include<stdio.h>
           int main()
           {
               int i,j,k,n;
               printf("no. of columns");
               scanf("%d",&n);
               for(i=1;i<=n;i++)
               {
                   for(j=1;j<=i;j++)
                   {
                       printf("*");
                       printf(" ");
                       
                   }
                    printf("\n");
                   
                   while(j==6 && j!=0)
                   {
                      
                   for(k=(n-1);k>=1;k--)
                   {
                       for(int l=1;l<=k;l++)
                       {
                       printf("*");
                       printf(" ");
                       }
                       printf("\n");
                   }
                   j--;
                   }

                  
               }
           }
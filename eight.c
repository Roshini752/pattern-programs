/*                    *
                    * *
                  * * *
                * * * *
              * * * * *
                * * * *
                  * * *
                    * *
                      *         */

            
            #include<stdio.h>
            int main()
            {
                int i,j,n,k;
                int col=1;
                printf("enter no. of columns");
                scanf("%d",&n);
                int spc=n-1;
                for(i=1;i<n*2;i++)
                {
                    for( k=1;k<=spc;k++)
                    {
                        printf("  ");
                    }
                    for(j=1;j<=col;j++)
                    {
                        printf("*");
                        printf(" ");
                    }
                    if(i<n)
                    {
                        col++;
                        spc--;
                    }
                    else
                    {
                        col--;
                        spc++;
                    }
                    
                    printf("\n");
                }
            }
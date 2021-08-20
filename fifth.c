/*        1 2 3 4 5
          1 2 3 4
          1 2 3
          1 2 
          1      */

          #include<stdio.h>
          int main()
          {
              int i,j,k,n,a;
              printf("no. of rows");
              scanf("%d",&n); 
              for(i=n;i>=1;i--)
              {
                  a=1;
                  for(j=1;j<=i;j++)
                  {
                      printf("%d ",a);
                      a++;
                  }
                  printf("\n");
                 
              } 
          }
/*          1
           2 3
          4 5 6
         7 8 9 10
        11 12 13 14 15    */


        #include<stdio.h>
        int main()
        {
            int i,j,n,k,a=1;
            printf("no. of rows");
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
                for(k=1;k<=n-i;k++)
                {
                    printf(" ");
                }
                for(j=1;j<=i;j++)
                {
                    printf("%d",a);
                    printf(" ");
                    a++;
                }
                printf("\n");
            }
        }
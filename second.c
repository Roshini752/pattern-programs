/*       1
        1 2
       1 2 3
      1 2 3 4
     1 2 3 4 5   */

    #include<stdio.h>
    int main()
    {
        int i,j,k;
        int n,a;
        printf("no.of rows\t");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            a=1;
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
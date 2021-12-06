#include<stdio.h>


int main()
{
    int n, m, x, px, pm;
    int a[101][101];
    while(scanf("%d",&n) != EOF)
    {
        memset(a, 0, sizeof(a));
        x = (n - 1 )/ 2;
        int d = n - 1;
        for (int i = 1; i <= n * n; i++)
        {
            if (i == 1)
            {

                a[0][x] = i;
                m = 0;
            }
            else
            {
                if (a[m][x] > 0)
                {
                    x = px;
                    m = pm + 1;
                    a[m][x]= i;
                }
                else
                    a[m][x] = i ;
            }
            pm = m--;
            px = x++;
            if (x == n)
                x = 0;
            if (m < 0)
                m = d;
        }

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (j == n - 1)
                    printf("%d",a[i][j]);
                else
                    printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

}



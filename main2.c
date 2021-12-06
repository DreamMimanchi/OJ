



#include<stdio.h>
#include<string.h>

int main()
{
    int n, m, x, px, pm;
    int a[51][51];
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
                if (a[m][x] > 0 || (px == n-1 && pm == 0))
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
    }

}




//int main() {
//    int a[51][51];
//    int n, i, j;
//    int x;
//    while(scanf("%d",&n)!= EOF) {
//        i = 0;
//        x = 1;
//        while (i <= n / 2) {
//            for (j = i; j < n - i; j++) {
//                a[j][n - 1 - i] = x++;
//            }
//            for (j = n - 2 - i; j >= i; j--)
//                a[n - i - 1][j] = x++;
//            for (j = n - 2 - i; j >= i; j--)
//                a[j][i] = x++;
//            for (j = i + 1; j <= n - 2 - i; j++)
//                a[i][j] = x++;
//            i++;
//        }
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                if (j != n - 1)
//                    printf("%d ", a[i][j]);
//                else
//                    printf("%d\n", a[i][j]);
//            }
//        }
//    }
//}










//int h(char a[],int n, int m)
//{
//    for(int i = 0; i < m; i++)
//    {
//        if (a[i] == '1' || a[i] == '4' )
//        {
//            printf(" ");
//            for (int j = 0; j < n; j++)
//            {
//                printf(" ");
//            }
//            printf(" ");
//        }
//        else
//        {
//            printf(" ");
//            for (int j = 0; j < n; j++)
//            {
//                printf("-");
//            }
//            printf(" ");
//        }
//        printf(" ");
//    }
//    printf("\n");
//}
//
//
//int sh(char a[],int n, int m)
//{
//    for(int i = 0; i < m; i++)
//    {
//        if (a[i] == '1' || a[i] == '2' || a[i] == '3' || a[i] == '7')
//        {
//            printf(" ");
//            for (int j = 0; j < n; j++)
//            {
//                printf(" ");
//            }
//            printf("|");
//        }
//        else if(a[i] == '5' || a[i] == '6')
//        {
//            printf("|");
//            for (int j = 0; j < n; j++)
//            {
//                printf(" ");
//            }
//            printf(" ");
//        }
//        else
//        {
//            printf("|");
//            for (int j = 0; j < n; j++)
//            {
//                printf(" ");
//            }
//            printf("|");
//        }
//        printf(" ");
//    }
//    printf("\n");
//}
//
//int rh(char a[], int n, int m)
//{
//    for (int i = 0; i < m; i++)
//    {
//        if (a[i] == '2' || a[i] == '3' || a[i] == '4' || a[i] == '5' || a[i] == '6' || a[i] == '8' || a[i] == '9') {
//            printf(" ");
//            for (int j = 0; j < n; j++)
//            {
//                printf("-");
//            }
//            printf(" ");
//        }
//        else{
//            printf(" ");
//            for (int j = 0; j < n; j++) {
//                printf(" ");
//            }
//            printf(" ");
//        }
//        printf(" ");
//    }
//    printf("\n");
//}
//
//int fh(char a[], int n, int m)
//{
//    for(int i = 0; i < m; i++)
//    {
//        if (a[i] == '1' || a[i] == '3' || a[i] == 4 || a[i] == '5' || a[i] == '7' || a[i] == '9')
//        {
//            printf(" ");
//            for (int j = 0; j < n; j++)
//            {
//                printf(" ");
//            }
//            printf("|");
//        }
//        else if(a[i] == '2')
//        {
//            printf("|");
//            for (int j = 0; j < n; j++)
//            {
//                printf(" ");
//            }
//            printf(" ");
//        }
//        else
//        {
//            printf("|");
//            for (int j = 0; j < n; j++)
//            {
//                printf(" ");
//            }
//            printf("|");
//        }
//        printf(" ");
//    }
//    printf("\n");
//}
//
//int eh(char a[], int n, int m)
//{
//    for (int i = 0; i < m; i++)
//    {
//        if (a[i] == '2' || a[i] == '3' || a[i] == '5' || a[i] == '6' || a[i] == '8' || a[i] == '9' ||a[i] == '0')
//        {
//            printf(" ");
//            for (int j = 0; j < n; j++) {
//                printf("-");
//            }
//            printf(" ");
//        }
//        else{
//            printf(" ");
//            for (int j = 0; j < n; j++) {
//                printf(" ");
//            }
//            printf(" ");
//        }
//        printf(" ");
//    }
//    printf("\n");
//}
//
//
//int main()
//{
//    char a[11];
//    int n;
//    int flog = 0;
//    while (scanf("%d%s", &n, a)==2 && (n!=0|| (strlen(a)!=1 || a[0]!='0')))
//    {
//        if(flog == 0)
//        {
//            printf("\n");
//            flog = 0;
//        }
//        h(a, n, strlen(a));
//        for(int i = 0; i < n; i++)
//        {
//            sh(a, n, strlen(a));
//        }
//        rh(a, n, strlen(a));
//        for(int i = 0; i < n; i++)
//        {
//            fh(a, n, strlen(a));
//        }
//        eh(a, n, strlen(a));
//    }
//}








int main() {
    char a[20001];
    while (gets(a) != NULL) {
        int len = strlen(a);
        for (int i = 0; i < len; i++) {
            if (a[i] == 'A')
                printf("2");
            if (a[i] == 'B')
                printf("22");
            if (a[i] == 'C')
                printf("222");
            if (a[i] == 'D')
                printf("3");
            if (a[i] == 'E')
                printf("33");
            if (a[i] == 'F')
                printf("333");
            if (a[i] == 'G')
                printf("4");
            if (a[i] == 'H')
                printf("44");
            if (a[i] == 'I')
                printf("444");
            if (a[i] == 'J')
                printf("5");
            if (a[i] == 'K')
                printf("55");
            if (a[i] == 'L')
                printf("555");
            if (a[i] == 'M')
                printf("6");
            if (a[i] == 'N')
                printf("66");
            if (a[i] == 'O')
                printf("666");
            if (a[i] == 'P')
                printf("7");
            if (a[i] == 'Q')
                printf("77");
            if (a[i] == 'R')
                printf("777");
            if (a[i] == 'S')
                printf("7777");
            if (a[i] == 'T')
                printf("8");
            if (a[i] == 'U')
                printf("88");
            if (a[i] == 'V')
                printf("888");
            if (a[i] == 'W')
                printf("9");
            if (a[i] == 'X')
                printf("99");
            if (a[i] == 'Y')
                printf("999");
            if (a[i] == 'Z')
                printf("9999");
            if (a[i] == ' ')
                printf("0");
            if(a[i] == 'A' || a[i] == 'B' || a[i] == 'C')
            {
                if(a[i + 1] == 'A' || a[i + 1] == 'B' || a[i + 1] == 'C')
                    printf("1");
            }
            if(a[i] == 'D' || a[i] == 'E' || a[i] == 'F')
            {
                if(a[i + 1] == 'D' || a[i + 1] == 'E' || a[i + 1] == 'F')
                    printf("1");
            }
            if(a[i] == 'H' || a[i] == 'I' || a[i] == 'G')
            {
                if(a[i + 1] == 'H' || a[i + 1] == 'I' || a[i + 1] == 'G')
                    printf("1");
            }
            if(a[i] == 'J' || a[i] == 'K' || a[i] == 'L')
            {
                if(a[i + 1] == 'J' || a[i + 1] == 'K' || a[i + 1] == 'L')
                    printf("1");
            }
            if(a[i] == 'M' || a[i] == 'N' || a[i] == 'O')
            {
                if(a[i + 1] == 'M' || a[i + 1] == 'N' || a[i + 1] == 'O')
                    printf("1");
            }
            if(a[i] == 'P' || a[i] == 'Q' || a[i] == 'R' || a[i + 1] == 'S')
            {
                if(a[i + 1] == 'P' || a[i + 1] == 'Q' || a[i + 1] == 'R' || a[i] == 'S')
                    printf("1");
            }
            if(a[i] == 'T' || a[i] == 'U' || a[i] == 'V')
            {
                if(a[i + 1] == 'T' || a[i + 1] == 'U' || a[i + 1] == 'V')
                    printf("1");
            }
            if(a[i] == 'W' || a[i] == 'X' || a[i] == 'Y' || a[i] == 'Z')
            {
                if(a[i + 1] == 'W' || a[i + 1] == 'X' || a[i + 1] == 'Y' || a[i + 1] == 'Z')
                    printf("1");
            }
        }
        printf("\n");
    }
}









//void rj(char n)
//{
//    char b[5];
//    int i = 4;
//    while(i > 0)
//    {
//        b[i] = '0'+ n % 2;
//        n /= 2;
//        i--;
//    }
//    for(int i = 1; i <= 4; i++)
//        printf("%c",b[i]);
//}
//
//int main()
//{
//    char a[101];
//    while(gets(a) != NULL)
//    {
//        int len = strlen(a);
//        for(int i = 0; i < len; i++)
//        {
//            if(a[i] >= 'A' && a[i] <= 'F')
//                a[i] = a[i] - 'A' + 10;
//            else
//                a[i] -= '0';
//            rj(a[i]);
//        }
//        printf("\n");
//
//    }
//    return 0;
//}











//int main()
//{
//    int n;
//    char* a[101];
//    char* b;
//    char c[11];
//    scanf("%d", &n);
//    getchar();
//    for(int i = 0; i < n ; i++)
//    {
//        gets(c);
//        a[i] =(char*) malloc(11);
//        strcpy(a[i],c);
//    }
//
//    for(int i = 1; i < n; i++)
//    {
//        for(int j = 0; j < n - i; j++)
//        {
//            if(strcmp(a[j],a[j+1]) > 0)
//            {
//                b = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = b;
//            }
//        }
//    }
//    for(int i = 1; i < n; i++)
//    {
//        for(int j = 0; j < n - i; j++)
//        {
//            if (strlen(a[j]) > strlen(a[j + 1])) {
//                b = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = b;
//            }
//        }
//
//    }
//    for(int i = 0; i < n; i++)
//    {
//        printf("%s\n",a[i]);
//        free(a[i]);
//    }
//
//}







//int main()
//{
//    int n;
//    char* a[50000];
//    char* b;
//    char c[1000000];
//    scanf("%d",&n);
//    getchar();
//    for(int i = 0; i < n;i++)
//    {
//        gets(c);
//        a[i] = (char*)malloc(strlen(c) + 1);
//        strcpy(a[i], c);
//    }
//    for(int i = 1; i < n;i++)
//    {
//        for(int j = 0; j < n - i ; j++)
//        {
//
//            if (strcmp(a[j], a[j + 1]) > 0)
//            {
//                b = a[j];
//                a[j] = a[j+1];
//                a[j+1] = b;
//            }
//        }
//    }
//    for(int i = 0; i < n;i++)
//    {
//        printf("%s\n",a[i]);
//        free(a[i]);
//    }
//
//}






//double* allocate(int n)
//{
//    double* p =(double*) malloc(n * sizeof(double));
//    return p;
//}
//
//void input(double* p, int n)
//{
//    int x;
//    for(int i = 0; i < n; i++)
//    {
//        scanf("%lf",&*(p + i));
//        *(p + i) = x;
//    }
//}
//
//void output(double* p, int n)
//{
//    int x, y;
//    scanf("%d%d",&x,&y);
//    int t = (n > y ? y : x);
//    if(x < 0)
//        x = 0;
//    if(x > n || y < 0)
//        printf("no output\n");
//
//    else
//    {
//
//        for(int i = x; i < n; i++)
//        {
//            printf("%lg",*(p + i - 1));
//        }
//    }
//}
//
//void release(double* p)
//{
//    free(p);
//}
//
//int main()
//{
//    int len;
//    double *array;
//    scanf("%d", &len);
//    array = allocate(len);
//    input(array, len);
//    output(array, len);
//    release(array);
//}

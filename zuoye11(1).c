#include <stdio.h>
#include<math.h>
#include <stdlib.h>


struct fraction
{
    int numerator;
    int denominator;
    int symbol;
};



int gcd(struct fraction f)
{
    while(f.denominator != 0)
    {
        int c = f.numerator % f.denominator;
        f.numerator = f.denominator;
        f.denominator = c;
    }
    return f.numerator;
}
int scan_frac(struct fraction *f, struct fraction *g)
{

   int x = scanf("%d/%d*%d/%d",&f->numerator,&f->denominator,&g->numerator,&g->denominator);
        return x;
}


struct fraction multiply_frac(struct fraction f, struct fraction g)
{
    f.numerator *=  g.numerator;
    f.denominator *=  g.denominator;
    if(f.denominator < 0 || f.numerator < 0)
    {
        f.symbol = -1;
        f.denominator = abs(f.denominator);
        f.numerator = abs(f.numerator);
    }
    else
        f.symbol = 1;
    int c = gcd(f);
    f.numerator /= c;
    f.denominator /= c;
    return f;
}






int main()
{
    struct fraction f1, f2, product;
    while(scan_frac(&f1, &f2) != EOF)
    {
        product = multiply_frac(f1, f2);
        if(product.numerator == 0)
        {
            printf("0\n");
            continue;
        }
        if(product.symbol == -1)
            printf("-");
        printf("%d/%d\n", product.numerator, product.denominator);
    }
    return 0;
}




//typedef struct
//{
//    int score[10];
//    double aver;
//    char name[81];
//} Choice;
//
//double pd(int score[10],int N)
//{
//    double sum = 0;
//    for(int i = 0; i < N;i++)
//    {
//        for(int j = 0; j < N - i - 1; j++)
//        {
//            if(score[j] > score[j + 1])
//            {
//                int a = score[j];
//                score[j] = score[j + 1];
//                score[j + 1] = a;
//            }
//        }
//    }
//    for(int k = 1; k < N - 1; k++)
//    {
//        sum += score[k];
//    }
//    return sum / (N - 2);
//}
//
//
//int inputChoice(Choice peo[30],int M,int N)
//{
//
//    for(int i = 0; i < M;i++)
//    {
//        int sum = 0;
//        scanf("%s ",&peo[i].name);
//        for(int j = 0; j < N; j++)
//        {
//            scanf("%d",&(peo[i].score[j]));
//        }
//       peo[i].aver = pd(peo[i].score, N);
//    }
//}
//
//int sort(Choice peo[30],int M,int N)
//{
//    for(int i = 0; i < M;i++)
//    {
//        for(int j = 0; j < M -i - 1; j++)
//        {
//            if(peo[j].aver < peo[j + 1].aver)
//            {
//                 Choice a = peo[j];
//                peo[j] = peo[j + 1];
//                peo[j + 1] = a;
//            }
//        }
//    }
//}
//
//int main()
//{
//    Choice peoples[30];
//    int M,N,i;
//    scanf("%d%d",&M,&N);
//    inputChoice(peoples,M,N);
//    sort(peoples,M,N);
//    for (i=0; i<3; i++)
//        printf("%s %.2lf\n",peoples[i].name,peoples[i].aver);
//    return 0;
//}



//typedef struct
//{
//    double a, b;
//}POINT;
//
//
//void input_point (POINT *pt)
//{
//    scanf("%lf%lf",&pt->a, &pt->b);
//}
//
//double distance(POINT p1, POINT p2)
//{
//    double dis;
//    double x = (p1.a - p2.a) * (p1.a - p2.a) + (p1.b - p2.b) * (p1.b - p2.b);
//    dis = sqrt(x);
//    return dis;
//}
//
//int main()
//{
//    POINT p,q;
//    double dis;
//    input_point(&p);
//    input_point(&q);
//    dis=distance(p,q);
//    printf("%g",dis);
//    return 0;
//}




//typedef struct CPLX
//{
//    int a, b;
//};
//
//void get_cplx(struct CPLX *cx)
//{
//    scanf("%d%d", &cx->a, &cx->b);
//}
//
//void put_cplx(struct CPLX cx)
//{
//    printf("%d %d\n",cx.a, cx.b);
//}
//
//struct CPLX add_cplx(struct CPLX cx1, struct CPLX cx2)
//{
//    cx1.a += cx2.a;
//    cx1.b += cx2.b;
//    return cx1;
//}
//
//struct CPLX sub_cplx(struct CPLX cx1, struct CPLX cx2)
//{
//    cx1.a -= cx2.a;
//    cx1.b -= cx2.b;
//    return cx1;
//}
//
//int main()
//{
//    struct CPLX ab, cd;
//    int cases;
//    scanf("%d", &cases);
//    while(cases--)
//    {
//        get_cplx(&ab);
//        get_cplx(&cd);
//        put_cplx( add_cplx(ab, cd) );
//        put_cplx( sub_cplx(ab, cd) );
//    }
//    return 0;
//}





//struct date
//{
//    int year, month, day;
//};
//
//int get_date_array(struct date d[MAX_SIZE])
//{
//    int i = 0;
//    while(scanf("%d/%d/%d",&d[i].month,&d[i].day,&d[i].year) != EOF)
//        i++;
//    return i;
//}
//
//int sort_date_array(struct date d[MAX_SIZE], int n)
//{
//    struct date temp;
//    for(int i = 0; i < n; i++)
//    {
//        for(int j = 0; j < n - i - 1; j++)
//        {
//
//            if (d[j].day > d[j  + 1].day)
//            {
//                temp = d[j];
//                d[j] = d[j + 1];
//                d[j + 1] = temp;
//            }
//            if (d[j].month > d[j  + 1].month)
//            {
//                temp = d[j];
//                d[j] = d[j + 1];
//                d[j + 1] = temp;
//            }
//            if (d[j].year > d[j  + 1].year)
//            {
//                temp = d[j];
//                d[j] = d[j + 1];
//                d[j + 1] = temp;
//            }
//        }
//    }
//
//
//}
//
//
//
//
//int main()
//{
//    struct date d_arr[MAX_SIZE];
//    int cases = 0, i, j;
//
//    cases = get_date_array(d_arr);
//    sort_date_array(d_arr, cases);
//
//    for(i = 0; i < cases; i++)
//        printf("%02d/%02d/%d\n", d_arr[i].month, d_arr[i].day, d_arr[i].year);
//    return 0;
//}







//typedef struct
//{
//    int year, month, day;
//}DATE;
//
//int getDate(DATE *d)
//{
//    scanf("%d%d%d",&(*d).year,&(*d).month,&(*d).day);
//}
//
//int putDate(DATE d)
//{
//    printf("%04d-%02d-%02d",d.year,d.month,d.day);
//}
//
//
//
//int main()
//{
//    DATE date;
//    getDate(&date);
//    putDate(date);
//    return 0;
//}



//int c[MAX_SIZE][MAX_SIZE];
//int input(int p[MAX_SIZE][MAX_SIZE], int m, int n)
//{
//    for(int i = 0; i < m; i++)
//    {
//        for(int j = 0; j < n; j++)
//        {
//            scanf("%d",&p[i][j]);
//        }
//    }
//}
//int ax(int** arr, int** b,int m, int n)
//{
//    int sum = 0;
//    for (int i = 0; i < m; i++)
//    {
//        for(int j = 0,k = 0; j < n; j++,k++)
//        {
//           c[i][k]  += arr[i][j] * b[j][k];
//        }
//    }
//}
//
//int main() {
//    int arr[MAX_SIZE][MAX_SIZE] = {0};
//    int b[MAX_SIZE][MAX_SIZE] = {0};
//    int n, m;
//    int count = 0;
//    int x, y;
//    while (scanf("%d%d", &m, &n) != EOF) {
//        count++;
//        if (m == 0 && n == 0)
//            break;
//        if (count % 2 != 0)
//        {
//            input(arr, m, n);
//            x = m;
//            y = n;
//        }
//        else
//        {
//            if (x == m && y == n)
//            {
//                input(b, m, n);
//            }
//        }
//
//    }
//}



//int input(int p[MAX_SIZE][MAX_SIZE], int m, int n)
//{
//    for(int i = 0; i < m; i++)
//    {
//        for(int j = 0; j < n; j++)
//        {
//            scanf("%d",&p[i][j]);
//        }
//    }
//}
//
//int main() {
//    int arr[MAX_SIZE][MAX_SIZE] = {0};
//    int b[MAX_SIZE][MAX_SIZE] = {0};
//    int n, m;
//    int count = 0;
//    int x, y;
//    while (scanf("%d%d", &m, &n) != EOF) {
//        count++;
//        if (m == 0 && n == 0)
//            break;
//        if (count % 2 != 0)
//        {
//            input(arr, m, n);
//            x = m;
//            y = n;
//        }
//        else
//        {
//            if (x == m && y == n)
//            {
//                input(b, m, n);
//                for (int i = 0; i < m; i++)
//                {
//                    int j;
//                    for (j = 0; j < n - 1; j++)
//                    {
//                        printf("%d ", arr[i][j] + b[i][j]);
//                    }
//                    printf("%d\n", arr[i][j] + b[i][j]);
//                }
//                printf("\n");
//            }
//            else
//            {
//                input(b, m, n);
//                printf("Not satisfied the definition of matrix addition!\n\n");
//            }
//        }
//
//    }
//}



//int main()
//{
//    int M;
//    int m, n;
//    int arr[MAX_SIZE][MAX_SIZE];
//    scanf("%d",&M);
//    for(int i = 0; i < M; i++)
//    {
//        scanf("%d%d",&m, &n);
//        for(int j = 0; j < m; j++)
//        {
//            for(int k = 0; k < n; k++)
//            {
//                scanf("%d",&arr[j][k]);
//            }
//        }
//        for(int j = 0; j < n; j++)
//        {
//            int k;
//            for(k = 0; k < m - 1; k++)
//            {
//                printf("%d ",arr[k][j]);
//            }
//            printf("%d\n",arr[k][j]);
//        }
//    }
//    return 0;
//}

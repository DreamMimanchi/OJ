#include<stdio.h>
#include<string.h>
#define MAX_SIZE 101

int get_matrix(int ma[MAX_SIZE][MAX_SIZE], int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &ma[i][j]);
        }
    }
}

int put_matrix(int ma[MAX_SIZE][MAX_SIZE], int m, int n)
{
    int i, j;
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n - 1; j++)
        {
            printf("%d ", ma[i][j]);
        }
        printf("%d\n",ma[i][j]);
    }
}

int mul_matrix(int pr[MAX_SIZE][MAX_SIZE], int m1[MAX_SIZE][MAX_SIZE], int m2[MAX_SIZE][MAX_SIZE], int m, int n, int q)
{
    int i, j;
    for(i = 0; i < m; i++) {
        for (i = 0; i < m; i++) {
            for (j = 0; j < q; j++) {
                int sum = 0;
                int k;
                for (k = 0; k < n; k++) {
                    sum += m1[i][k] * m2[k][j];
                }
                pr[i][j] = sum;
            }
        }
    }
}


int main()
{
    int m, n, q;
    int product[MAX_SIZE][MAX_SIZE];
    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];

    scanf("%d%d%d", &m, &n, &q);
    get_matrix(matrix1, m, n);
    get_matrix(matrix2, n, q);
    mul_matrix(product, matrix1, matrix2, m, n, q);
    put_matrix(product, m, q);

    return 0;
}



//int strToInt(char str[], int base)
//{
//    int sum = 0;
//    if(base == 2)
//    {
//            for (int i = 0; str[i] != '\0'; i++)
//            {
//                if (str[i] >= '0' && str[i] <= '1')
//                {
//                    str[i] -= '0';
//                    sum = sum * base + str[i];
//                }
//            }
//            if (str[0] == '-')
//                sum = -sum;
//    }
//    if(base == 8)
//    {
//            for (int i = 0; str[i] != '\0'; i++)
//            {
//                if (str[i] >= '0' && str[i] <= '7')
//                {
//                    str[i] -= '0';
//                    sum = sum * base + str[i];
//                }
//            }
//            if (str[0] == '-')
//                sum = -sum;
//    }
//    if(base == 10)
//    {
//            for (int i = 0; str[i] != '\0'; i++)
//            {
//                if (str[i] >= '0' && str[i] <= '9')
//                {
//                    str[i] -= '0';
//                    sum = sum * base + str[i];
//                }
//
//            }
//            if (str[0] == '-')
//                sum = -sum;
//        }
//    if(base==16) {
//        int n = 1;
//        int l = strlen(str);
//        for (int i = l - 1; i >=0; i--) {
//            if (str[i] >= '0' && str[i] <= '9') {
//                sum = sum + (str[i] - '0') * n;
//                n = n * 16;
//            }
//            if (str[i] == 'a' || str[i] == 'A') {
//                sum = sum + 10 * n;
//                n = n * base;
//            }
//            if (str[i] == 'b' || str[i] == 'B') {
//                sum = sum + 11 * n;
//                n = n * base;
//            }
//            if (str[i] == 'c' || str[i] == 'C') {
//                sum = sum + 12 * n;
//                n = n * base;
//            }
//            if (str[i] == 'd' || str[i] == 'D') {
//                sum = sum + 13 * n;
//                n = n * base;
//            }
//            if (str[i] == 'e' || str[i] == 'E') {
//                sum = sum + 14 * n;
//                n = n * base;
//            }
//            if (str[i] == 'f' || str[i] == 'F') {
//                sum = sum + 15 * n;
//                n = n * base;
//            }
//        }
//        if (str[0] == '-')
//            sum = -sum;
//    }
//    return sum;
//}
//
//
//int main()
//{
//    int base;
//    char s[MAX_STR_LEN];
//    while( (scanf("%d:", &base) != EOF) && (gets(s) != NULL) )
//        printf("%d\n", strToInt(s, base));
//    return 0;
//}



//int strToInt(char str[])
//{
//    int sum = 0;
//    if(str[0] == '-' ||str[0] == '+')
//    {
//        for (int i = 1; str[i] != '\0'; i++)
//        {
//            if (str[i] >= '0' && str[i] <= '9')
//            {
//                str[i] -= '0';
//                //printf("%d     ",str[i]);
//                sum = sum * 10 + str[i];
//            }
//        }
//        if(str[0] == '-')
//            sum =  -sum;
//    }
//    else{
//        for (int i = 0; str[i] != '\0'; i++)
//        {
//            if (str[i] >= '0' && str[i] <= '9')
//            {
//                str[i] -= '0';
//                //printf("%d   ",str[i]);
//                sum = sum * 10 + str[i];
//            }
//        }
//    }
//    return sum;
//}
//
//int main()
//{
//    char s[MAX_STR_LEN];
//    while(gets(s) != NULL)
//        printf("%d\n", strToInt(s));
//    return 0;
//}


//int strToInt(char str[])
//{
//    int x, n = 0;
//    if(str[0] < '0' || str[0] > '9' || str[0] !='+'||str[0] != '-')
//
//    if(str[0] == '+')
//        for (int i = 1; str[i] >= '0' && str[i] <= '9'; i++)
//        {
//            x = str[i] - '0';
//            n = n * 10 + x;
//        }
//    else if(str[0] == '-')
//    {
//        for (int i = 1; str[i] >= '0' && str[i] <= '9'; i++)
//        {
//            x = str[i] - '0';
//            n = n * 10 + x;
//        }
//        n = -n;
//    }
//    else
//        for (int i = 0; str[i] >= '0' && str[i] <= '9'; i++)
//        {
//            x = str[i] - '0';
//            n = n * 10 + x;
//        }
//        return n;
//}
//
//int main()
//{
//    char s[MAX_STR_LEN];
//    while(gets(s) != NULL)
//        printf("%d\n", strToInt(s));
//    return 0;
//}






//int x;
//
//int getkey(int key[])
//{
//    int m;
//    scanf("%d", &m);
//    for(int i = 0; i < m; i++)
//        scanf("%d", &key[i]);
//    return m;
//}
//
//int getarray(int array[])
//{
//    int i = 0, n;
//    while (scanf("%d", &n) && n != 0)
//    {
//        array[i] = n;
//        i++;
//    }
//    x = i;
//
//}
//
//int insert(int array[], int key, int vol)
//{
//    int flag = 0;
//    int i;
//    if(x == 1000)
//        return -2;
//    if(array[0] > key)
//        flag = 0;
//    if(key > array[x - 1])
//        flag = x;
//    for(i = 0; i < x; i++)
//    {
//        if (array[i] == key)
//            return -1;
//        if(array[i] > key)
//            break;
//    }
//    flag = i;
//    for(i = x; i > flag; i--)
//        array[i] = array[i - 1];
//    array[flag] = key;
//    x++;
//    return flag;
//
//}
//
//int result(int flag)
//{
//    if(flag == -2)
//        printf("The array if full!\n");
//    else if(flag == -1)
//        printf("The key is already in this array!\n");
//    else
//        printf("The key is inserted in position %d.\n",flag);
//}
//
//int main()
//{
//    int array[MAX_SIZE], cases, ca, i, key[MAX_SIZE], size;
//    scanf("%d", &cases);
//    for(ca = 1; ca <= cases; ca++)
//    {
//        getarray(array);
//        size = getkey(key);
//        //printf("%d %d %d\n",array[0],array[1],array[2]);
//        printf("Case %d:\n", ca);
//        for(i = 0; i < size; i++)
//            result(insert(array, key[i], MAX_SIZE - 1));
//    }
//    return 0;
//}






//int m = 0;
//int getarray(int array[])
//{
//    int i = 0, n;
//   while(scanf("%d",&n) && n != 0)
//   {
//       array[i++] = n;
//       m = i;
//   }
//}
//
//int insert(int array[], int key, int vol)
//{
//    int flag = 0;
//    if(m == 1000)
//        return -2;
//   for(int i = 0; i < m; i++)
//   {
//       if(array[i] == key)
//           return -1;
//       if(array[i] < key)
//           flag = i + 1;
//   }
//   return flag;
//}
//
//int result(int flag)
//{
//    if(flag == -2)
//        printf("The array if full!");
//    else if(flag == -1)
//        printf("The key is already in this array!");
//    else
//        printf("The key is inserted in position %d.",flag);
//    puts("");
//
//}
//
//int main()
//{
//    int array[MAX_SIZE], cases, i, key;
//    scanf("%d", &cases);
//    for(i = 1; i <= cases; i++)
//    {
//        getarray(array);
//        scanf("%d", &key);
//        result(insert(array, key, MAX_SIZE - 1));
//    }
//    return 0;
//}



//
//int input(int a[])
//{
//    int m;
//    scanf("%d",&m);
//    for(int i = 0; i < m; i++)
//        scanf("%d",&a[i]);//读入每行输入的数字
//    return m;
//}
//
//int add(int a[],int b[],int x)
//{
//    for(int i = 0; i < x; i++)
//    {
//        b[i] = a[i] + b[i];
//        a[i] = b[i] - a[i];
//    }
//}
//
//int output(int a[],int x)
//{
//    for(int i = 0; i < x; i++)
//    {
//        if(i == 0)
//            printf("%d",a[i]);
//        else
//            printf(" %d",a[i]);
//    }
//    puts("");
//}
//
//
//int main()
//{
//    int n;
//    int a[MAX];
//    int b[MAX];
//    int  length ,length1, length2, x;
//    scanf("%d",&n);
//        memset(a,0,sizeof(int) * MAX);
//        length1 = input(a);
//        for(int i = 0; i< n - 1; i++)
//        {
//            memset(b,0,sizeof(int) * MAX);
//            length2 = input(b);
//            x = (length1 > length2 ? length1 : length2);
//            add(a,b,x);
//            output(b,x);
//            length1 = length2;
//        }
//    output(a,length1);
//}







//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAX 1001
//
//
//int main() {
//    int a[MAX] ={0};
//    int n, b, m = 0, j = 0, k;
//    scanf("%d",&n);
//    for(int j = 1; j <= n; j++)
//    {
//
//        for (int i = 0; i < MAX; i++)
//        {
//            scanf("%d", &b);
//            if(b == 0)
//                break;
//            else
//                a[i] += b;
//        }
//        if (j  %  2 == 0)
//        {
//            for (int i = 0;a[i] != 0; i++)
//            {
//                if (i == 0)
//                    printf("%d", a[i]);
//                else
//                    printf(" %d", a[i]);
//            }
//            printf("\n");
//
//            memset(a, 0, MAX);
//        }
//    }
//    if(j %  2 != 0) {
//        for (int i = 0; a[i] != 0; i++)
//        {
//            if (i == 0)
//                printf("%d", a[i]);
//            else
//                printf(" %d", a[i]);
//        }
//        printf("\n");
//    }
//
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define MAX 1001
//
//
//int main() {
//    int a[MAX] ={0};
//    int n, b, m = 0, j = 0;
//    while (scanf("%d", &n) != EOF) {
//        for (int i = 0; i < n; i++) {
//            scanf("%d", &b);
//            a[i] += b;
//        }
//        j++;
//        if (m < n)
//            m = n;
//        if (j  %  2 == 0) {
//            for (int i = 0; i < m; i++) {
//                if (i !=  m - 1)
//                    printf("%d ", a[i]);
//                else
//                    printf("%d\n", a[i]);
//            }
//            memset(a, 0, MAX * 4);
//            m = 0;
//        }
//    }
//    if(j %2 != 0) {
//        for (int i = 0; i < n; i++) {
//            if (i != n - 1)
//                printf("%d ", a[i]);
//            else
//                printf("%d\n", a[i]);
//        }
//    }
//
//}
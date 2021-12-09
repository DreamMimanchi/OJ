#include<stdio.h>
#include<string.h>
#define MAX_SIZE 1001

int getkey(int key[])
{

}

int getarray(int array[])
{

}

int insert(int array[], int key, int vol)
{

}

int result(int flag)
{

}

int main()
{
    int array[MAX_SIZE], cases, ca, i, key[MAX_SIZE], size;
    scanf("%d", &cases);
    for(ca = 1; ca <= cases; ca++)
    {
        getarray(array);
        size = getkey(key);
        printf("Case %d:\n", ca);
        for(i = 0; i < size; i++)
            result(insert(array, key[i], MAX_SIZE - 1));
    }
    return 0;
}





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
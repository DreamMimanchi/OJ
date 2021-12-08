






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
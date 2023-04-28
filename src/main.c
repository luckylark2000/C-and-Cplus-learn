#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("--------指针与变量---------\n");
    int a = 5;
    /*可以看出q和x这两个指针变量相差一个内存地址，
     *一个int类型的指针变量大小是4个字节所以q和x相差4个字节
     */
    int *q = &a + 1; // 这个加1是加的一个int类型的字节长度，对应到内存里面就是4个字节
    int *x = &a;     //

    printf("a是:%d, q是%p, x是%p\n", a, q, x); // q是000000000061FE08, x是000000000061FE04
    // 一般不对指针变量进行两次取地址的操作例如 &&q 因为这样很可能会导致未定义的行为
    // 指针变量的地址是在程序运行时动态分配的，因此每次运行程序时，&q的值都有可能不同
    printf("*q是%p,&q是%p\n", *q, &q);
    printf("q-x是%d\n", q - x); // 1

    /*下面是为了验证地址+1的步长是跟变量类型相关的，可以跟上面的做对比*/
    double b = 4.0;
    double *h = &b;
    double *l = &b + 1;                        // 加的一个double类型的字节长度，对应到内存里面就是8个字节
    printf("b是:%f, h是%p, l是%p\n", b, h, l); // h是000000000061FDF0, l是000000000061FDF8
    printf("--------指针与数组---------\n");
    int arr[5] = {0, 1, 2, 3, 4};
    int *p = arr;
    // int **m = *p;
    printf("p是:%d, arr是%d\n", p, arr);
    printf("*p是:%d, *arr是%d\n", *p, *arr);
    // printf("**m是:%p, *m是%p,, m是%p\n", **m, *m, m);
    printf("p[0]是:%d, arr[0]是%d\n", p[0], arr[0]);
    printf("&p是:%d,&arr是:%d\n", &p, &arr);
    printf("*&p是:%d,*&arr是:%d\n", *&p, *&arr);
    printf("&p[0]是:%d,&arr[0]是:%d\n", &p[0], &arr[0]);
    printf("*&p[0]是:%d,*&arr[0]是:%d\n", *&p[0], *&arr[0]);

    return 0;
}

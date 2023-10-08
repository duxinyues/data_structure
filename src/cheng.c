#include<stdio.h>
void main()
{
    int q=12;
    int *qPtr;                              /*声明指针变量qPtr*/
    qPtr=&q;                                    /*指针变量qPtr指向变量q*/
    /*打印变量q的地址和qPtr的内容*/
    printf("q的地址是：%p\nqPtr中的内容是：%p\n",&q,qPtr);
    /*打印q的值和qPtr指向变量的内容*/
    printf("q的值是：%d\n*qPtr的值是：%d\n",q,*qPtr);
    /*运算符'&'和'*'是互逆的*/
    printf("&*qPtr=%p,*&qPtr=%p\n因此有&*qPtr=*&qPtr\n",&*qPtr,*&qPtr);
}
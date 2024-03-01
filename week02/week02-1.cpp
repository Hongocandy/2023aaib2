#include <stdio.h>
int main()
{
    int a,b;
    printf("請輸入兩個整數:");
    scanf("%d %d",&a,&b);
    printf("你輸入了兩個數字，直式加法:\n");
    printf("%5d\n",a);///印出來五格整數後面\n跳行
    printf("%5d\n",b);///印出來五格整數後面\n跳行
    printf("-------\n");///印出來一堆減號後面\n換行
    printf("%5d\n",a+b);///印出來五格整數後面\n跳行
}

///week09-1.cpp 了解函式的定義
#include<stdio.h>
int myAdd(int a,int b)
{
    return a+b;///近來2個數，出去一個數
}
void myPrint(int a)///函式定義，進來一個
{
    for(int i=1;i<=a;i++) printf("*");
    printf("\n");
}

int main()///main()函式
{
    int ans = myAdd(3,4);///呼叫函式
    printf("Hello ans: %d\n",ans);
    myPrint(ans);///函式呼叫(請他幫我做事)
}

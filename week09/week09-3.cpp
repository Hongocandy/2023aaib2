///week09-3.cpp函式裡的變數vs.外面的變數
#include<stdio.h>
int globalA = 300;///外面的全域變數

void myFuncA()
{
    int localA = 500;///裡面的區域變數
    globalA = 0;///亂改外面的變數
    printf("myFunc():globalA:%d localA:%d\n",globalA,localA);
}
int main()
{
    int localA = 200;///裡面區域的變數
    printf("main():golbalA: %d localA:%d \n",globalA,localA);
    myFuncA();
    printf("main():globalA:%d localA:%d\n",globalA,localA);
}


///week09-2.cpp��Ʋz���ܼ�vs�A�~�����ܼ�
#include<stdio.h>
int myFuncA()
{
    int x = 200;
    printf("myFuncA()�̪�x��%d\n",x);
}
int main()
{
    int x=100;
    printf("main()�̪�x�O:%d\n",x);
    myFuncA();
    printf("main()�̪�x�O:%d",x);
}


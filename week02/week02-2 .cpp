///要認識float,浮點數
#include<stdio.h>
int main()
{///寫了這麼多位，結果在c語言(cpu運作中)裡，只用了少少的位數
    float pi  =3.14159565589793238462643383279;
    ///
    double pi2 =3.14159565589793238462643383279;
    ///
    printf("float %f\n",pi);
    printf("double %f\n",pi2);
    printf("float 10位: %10\n",pi);
    printf("double 10位: %20.18f\n",pi2);
    printf("float 10位: %10f\n",pi);
    printf("double 10位: %20.10f\n",pi2);
    
}
///輸出
///float 3.141593
///double 3.141593
///float 10位: 3.141593
///double 10位:3.141593
///float 10位:3.14152741012573200
///double 10位:3.14152741012573200
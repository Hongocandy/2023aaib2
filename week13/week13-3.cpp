///week13-3.cpp��֪k�A�]�n���j��P�_
#include<stdio.h>
int main()
{
    int n;///�n��Ʀr���C�@�ӭ�}
    scanf("%d",&n);
    int N=0;///���X�Ӽ�
    int a[20] = {};
    while(n>0)///�p�G�Ʀr�٨S����B�٦��ݯd
    {
        a[N++]=n%10;///int now = n%10;///�{�b���U�Ӫ��Ʀr
        ///printf("now:%d\n",now);
        n = n/10;///��ư��k�A��n�ܤp
    }
    int bad=0;
    for(int i=0;i<N;i++)
    {
        if(a[i] !=a[N-i-1]) bad = 1;
    }
    if(bad==1) printf("NO\n");
    else printf("YES\n");
}

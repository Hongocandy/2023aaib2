#include<stdio.h>
int table[20000]={};///����l�A����0
int main()
{
    int BOUND = 20000,ans=0;

    for(int i=2;i<BOUND;i++)
    {
        if(table[i]==0)///�ٯd�ۡC�S���Q����
        {
            ans++;
            for(int k=i*i;k<BOUND;k+=1)
                table[k] = -1;///�����L���S��
        }

    }
    printf("��Ʀ�: %d��\n",ans);
}


#include<stdio.h>
///K&R的排版
int main()
{
    int n,a,b;
    scanf("%d",&n);///有n 筆資料
    for(int i=0; i<n; i++) { ///迴圈跑n 次
        scanf("%d",&a);///數字a:還有a個數字
        int ans =0 ;///迴圈前面int ans=0
        for(int j=0; j<a; j++) { ///讀入a個數字
            scanf("%d",&b);///讀入數字b
            ans+=b;///迴圈裡面ans+=b

        }
        printf("%d\n",ans);///迴圈後面，把答案印出來
    }
}

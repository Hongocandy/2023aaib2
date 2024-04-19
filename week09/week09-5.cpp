#找出島(一堆1)的周長，也就是繞一圈的長度
#想發很簡單:從0變1、從1變0、都是周長+=1

class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        ans=0
        M,N=len(grid),len(grid[0])
        for i in range(M):
            if grid[i][0]==1: ans+=1#最左邊的邊界
            if grid[i][N-1]==1: ans+=1 #最右邊的邊界
        for j in range(N):
            if grid[0][j]==1: ans+=1 #最上面的邊界
            if grid[M-1][j]==1: ans+=1 #最下面的邊界
        for i in range(M):#左手i對每一個格子
            for j in range(N):#右手j
            
                if i+1<M and grid[i][j]+grid[i+1][j]==1: ans+=1
                if j+1<N and grid[i][j]+grid[i][j+1]==1: ans+=1
        return ans
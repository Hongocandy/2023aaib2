#week11-2.py 要用篩子法
#以前的寫法，要30萬*30萬=300億次
#用篩子法，要30萬+殺掉的那些格子，快20萬倍
BOUND = 300000 #30萬以下有幾個質數
table = [True] *BOUND
ans=0
for i in range(2,BOUND):
  if table[i]==True:
    #print(i, end=" ")
    ans+=1 #找到一個質數
    print(i, end=" ")
    for k in range(i+1,BOUND,i):
      table[k] = False
print("質數有:",ans,"個")

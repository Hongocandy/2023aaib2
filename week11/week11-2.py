#week11-2.py �n�οz�l�k
#�H�e���g�k�A�n30�U*30�U=300����
#�οz�l�k�A�n30�U+���������Ǯ�l�A��20�U��
BOUND = 300000 #30�U�H�U���X�ӽ��
table = [True] *BOUND
ans=0
for i in range(2,BOUND):
  if table[i]==True:
    #print(i, end=" ")
    ans+=1 #���@�ӽ��
    print(i, end=" ")
    for k in range(i+1,BOUND,i):
      table[k] = False
print("��Ʀ�:",ans,"��")

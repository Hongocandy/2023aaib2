///week10-1.py �禡�I�s�禡 Recursion ���j N���h
N = int(input("�п�JN:"))
///�H�e�O�� for�j��A���ѥ�[�禡�I�s�禡]�Ӽg
def func(n):
  if n==1:return 1 ///�פ����A��[�ƾ��k�Ǫk]N=1����
  return n * func(n-1)///��O�I�s��O�A�j���D�令�h��[�p���D]
ans = func(N)
print(ans)

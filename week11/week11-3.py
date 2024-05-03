class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        v1=list(map(int,version1.split(".")))#�u����r���ܰ}�C
        v2=list(map(int,version2.split(".")))
        # print(v1) [0,2,2,3,3]
        # print(v2) [0,1,2,3]
        N1,N2 = len(v1),len(v2)#���D�}�C������
        for i in range(max(N1,N2)):
            if i<N1 and i<N2: #��ӳ��٨S�W�L�d��
                 if v1[i]>v2[i]: return 1
                 if v1[i]<v2[i]:return -1
            elif i<N1 and v1[i]>0: #�p�G�u������S�W�L �ӥB���䦳�Ʀr
                return 1
            elif i<N2 and v2[i]>0: #�p�G�k�����`�A�ӥB�k�䦳�Ʀr
                return -1
        return 0

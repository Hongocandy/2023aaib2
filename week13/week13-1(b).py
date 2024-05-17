#�K���@��
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left#���䪺�p��
#         self.right = right #�k�䪺�p��
class Solution:
    def removeLeafNodes(self, root: Optional[TreeNode], target: int) -> Optional[TreeNode]:
        if root==None: return root #�S���F��A�N��������

        left = self.removeLeafNodes(root.left,target) #���ΦP�@�Ө禡�A�B�z���b��
        right = self.removeLeafNodes(root.right,target) #�ΦP�@�Ө�ܡA�B�z�k�b��
        if left ==None and right==None and root.val==target: #�̫��ܸ��l�A�B�ȦP
           return None#�ƻ򳣨S���A�浹���I�s�ڪ��H(�N�O��ۤv�R��)

        root.left = left #��s������R�������G�A���쥪��
        root.right = right #��s���k��R�������G�A����k��
        return root # ��^�s������

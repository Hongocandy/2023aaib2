#解法:先數有幾個1，把一個放右邊，其他都放左邊，中間塞一堆0

class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        N=len(s)
        one=0 #s裡面，有幾個1呢 等遺下會慢慢數出來
        for c in s: #針對字串s裡的每個字母c逐一檢查
            if c=='1':one += 1 #如果是'1'的話one就+1
        return '1'*(one-1)+'0'*(N-one)+'1'

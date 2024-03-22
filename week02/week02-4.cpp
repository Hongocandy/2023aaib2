class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int N = s.length();///c++的字串長度
        int one = 0;///s裡面，有幾個1呢
        for(int i=0;i<N;i++){
            if(s[i]=='1')one +=1;
        }
        string ans;///用來放答案
        for(int i=0;i<one-1;i++) ans +='1';
        for(int i=0;i<N-one;i++) ans +='0';
        ans +='1';///?最後塞個1
        return ans;
    }
};
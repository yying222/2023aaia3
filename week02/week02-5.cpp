// week02-5.cpp LeetCode 242. Valid Anagram
class Solution { //分析兩個字串的字母組成的成分是相同的
public:
    bool isAnagram(string s, string t) {
        int H1[256] = {},H2[256] = {};
        for(char c : s){ //左邊字串
            H1[c]++; //放在左邊H1[c]
        }
        for(char c : t){ //右邊字串
            H2[c]++; //放在右邊H2[c]
        }
        for(int i=0; i<256; i++){
            if(H1[i] != H2[i]) return false;
        }
        return true;
    }
};
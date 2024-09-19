//week02-4.cpp LeetCode 389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[256] = {}; //陣列，裡面統計字母出現次數，初始值都是0(因有大括號)
        for(char c : s){ //針對字母s裡的每個字母c，逐一統計分析
            H[c]++; //多了一個字母c，存在陣列的對應格子裡
        }
        for(char c : t){
            H[c]--; //用到一個字母c，陣列的格子裡的資料就變少了
            if(H[c]<0) return c; //如果變成負的，那就不用找了，找到兇手了!
        }
        return ' '; //最後都沒有找到的話，回傳空白的字母' '中間有個空格喔
    }
};
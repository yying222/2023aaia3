//week13-3.cpp 解Advent of Code 2024 Day 1 題目
//LeetCode 右上角圖示，My Playground
//New Playground，+新的 Playground
//Input 放右下角的 stdin 的標準輸入區
//前面 LeetCode 幫妳寫好 #include <iostream> 和 include <vector>

int main() {
    vector<int> A, B; //2個陣列(伸縮自如)
    int a, b; //2個數
    while( cin >> a >> b ){ //Step01:Input
        A.push_back(a); //Step02:放到陣列
        B.push_back(b);
    }
    for(int i=0; i<A.size(); i++){ //Step03:Output
        cout << A[i] << " ";
    }
}

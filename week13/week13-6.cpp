//week13-6.cpp 學習計畫 Linked List 第2題
//LeetCode 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a;
        while( head != nullptr ){
            a.push_back( head->val );
            head = head->next;
        }
        ListNode* ans = new ListNode(); //標準答案
        ListNode* now = ans;
        int N = a.size();
        for(int i=N-1; i>=0; i--){ //倒過來的迴圈
            now->next = new ListNode( a[i] ); //塞入倒過來的值
            now = now->next; //再處理下一筆
        }
        return ans->next;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

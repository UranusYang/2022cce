///LeetCode 每日挑戰 24. Swap Nodes in Pairs
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;///太少，提早結束

        ListNode* one = head;
        ListNode* two = head -> next;
        while(one!=nullptr && two!=nullptr){
            int temp = one->val;
            one->val = two->val;
            two->val = temp;
            ///以上是交換裡面的 val 值

            if(one->next!=nullptr) one = one -> next ->next;///下下筆
            else break;///其實這裡可以簡化，但為了對稱，就照寫

            if(two->next!=nullptr) two = two -> next -> next;///下下筆
            else break;
        }
        return head;///整串給人家
    }
};

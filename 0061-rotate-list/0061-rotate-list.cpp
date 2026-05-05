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
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        ListNode* temp = head;
        vector<int> arr;
        while(temp!=NULL){
            arr.push_back(temp->val);
            temp = temp->next;
        }
        int n =arr.size();
        k = k%n;
        vector<int> rotated;
        reverse(arr.begin(),arr.begin()+n-k);
        reverse(arr.begin()+n-k,arr.end());
        reverse(arr.begin(),arr.end());
        temp = head;
        for(int i = 0; i<n; ++i){
            temp->val = arr[i];
            temp = temp->next;
            
        }
        return head;
        
    }
};
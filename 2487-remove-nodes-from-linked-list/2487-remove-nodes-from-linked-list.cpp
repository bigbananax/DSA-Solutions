
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        vector<int> arr;

        ListNode* temp = head;
        while (temp != nullptr) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        int n = arr.size();
        vector<int> ans;
        int maxi = INT_MIN;

        for (int i = n - 1; i >= 0; i--) {
            if (arr[i] >= maxi) {
                ans.push_back(arr[i]);
                maxi = arr[i];
            }
        }

        reverse(ans.begin(), ans.end());

        ListNode dummy(0);
        ListNode* curr = &dummy;

        for (int x : ans) {
            curr->next = new ListNode(x);
            curr = curr->next;
        }

        return dummy.next;
    }
};

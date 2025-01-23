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
    int pairSum(ListNode* head) {
        // store sum
        vector<int> ans;
        ListNode* temp = head;

        while (temp) {
            ans.push_back(temp->val);
            temp = temp->next;
        }

        // now acces sum
        int maxSum = 0;
        int n = ans.size();
        for (int i = 0; i < n / 2; i++) {
            maxSum = max(maxSum, ans[i] + ans[n - i - 1]);
        }
        return maxSum;
    }
};
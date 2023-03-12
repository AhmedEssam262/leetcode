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
    int getDecimalValue(ListNode* head) {
        int res = 0;
	    int pow = 1;
        stack<int> s;
        while(head){
            s.push(head->val);
            head=head->next;
        }
        	while (!s.empty())
	{
		res += pow * s.top();
		pow *= 2;
		s.pop();
	}
	return res;
    }
};

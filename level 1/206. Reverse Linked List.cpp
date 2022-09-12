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
    ListNode* reverseList(ListNode* head) {
	stack<ListNode*> st;
	ListNode* temp = head;
	ListNode* res ;

	if (head == NULL)
		return head;

	while (temp != nullptr) {
		st.push(temp);
		temp = temp->next;
	}

	res = st.top();
	while(1)
        {
            ListNode* node = st.top();
            st.pop();
            if (st.empty())
            {
                node->next = NULL;
                break;
            }
            else
            {
                node->next = st.top();
            }
            
        }
	return res;
}
};

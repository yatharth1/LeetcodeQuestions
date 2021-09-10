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
private:
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next;
        
        while(curr)
        {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast -> next && fast -> next -> next)
        {
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        
        slow -> next = reverse(slow -> next);
        slow = slow -> next;
        
        while(slow)
        {
            if(head -> val != slow -> val)
                return false;
            head = head -> next;
            slow = slow -> next;
        }
        
        return true;
        
    }
};
/*
 Author:     Deren Lei, derenlei97@gmail.com
 Date:       10/29/2017
 Problem:    Add Two Numbers
 Difficulty: Medium
 Source:     https://leetcode.com/problems/add-two-numbers/description/

Question:
 You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

 You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 Output: 7 -> 0 -> 8
*/




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode prehead(0), *p = &prehead;
        int extra = 0;
        while(l1 || l2 || extra){
            if(l1) extra += l1->val, l1 = l1->next;
            if(l2) extra += l2->val, l2 = l2->next;
            p->next = new ListNode(extra % 10);
            extra /= 10;
            p = p->next;
        }
        return prehead.next;


    }
};

#include <bits/stdc++.h>
#include <iostream>


using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
                ListNode *l3,*first;
                int carry=0;
                l3=first= new ListNode;
                l3->val=(l1->val+l2->val+carry)%10;
                carry=(l1->val+l2->val+carry)/10;
                while(l2->next and l1->next){
                    l3->next=new ListNode;
                    l3=l3->next;
                    l2=l2->next;
                    l1=l1->next;
                    
                    l3->val=(l1->val+l2->val+carry)%10;
                    carry=(l1->val+l2->val+carry)/10;
                }
                while(l2->next!=nullptr){
                    l3->next=new ListNode;
                    l3=l3->next;
                    l2=l2->next;
                    l3->val=(l2->val+carry)%10;
                    carry=(l2->val+carry)/10; 
                }
                while(l1->next!=nullptr) {
                    l3->next=new ListNode;
                    l3=l3->next;
                    l1=l1->next;
                    l3->val=(l1->val+carry)%10;
                    carry=(l1->val+carry)/10; 
                }
                if(carry){
                    l3->next=new ListNode;
                    l3=l3->next;
                    l1=l1->next;
                    l3->val=carry;
                }
                return first;
    }
};
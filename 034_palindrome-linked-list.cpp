//https://www.codingninjas.com/studio/problems/palindrome-linked-list_8230717?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/
LinkedListNode<int>* getMid(LinkedListNode<int>* &head){
    LinkedListNode<int>* slow=head;
    LinkedListNode<int>* fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

LinkedListNode<int>* reverse(LinkedListNode<int>* &head){
    LinkedListNode<int>* prev=NULL;
    LinkedListNode<int>* curr=head;
    LinkedListNode<int>* forward=NULL;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;
}

bool isPalindrome(LinkedListNode<int> *head) {
    
   if(head==NULL ||head->next==NULL){
       return true;
   }

    // Find Middle:
    LinkedListNode<int>* middle=getMid(head);
    LinkedListNode<int>* temp=middle->next;
    // Reversing next half part :
    middle->next=reverse(temp);
    //Comparing Linked liss :
    LinkedListNode<int>* head1=head;
    LinkedListNode<int>* head2=middle->next;
    while(head2!=NULL){
        if(head1->data != head2->data){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    // middle->next=reverse(middle->next);
    return true;
}

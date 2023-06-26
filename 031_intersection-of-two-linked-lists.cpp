//https://www.codingninjas.com/studio/problems/intersection-of-two-linked-lists_8230688?challengeSlug=striver-sde-challenge

#include<bits/stdc++.h>
/****************************************************************
    Following is the class structure of the Node class:
        class Node{
        public:
            int data;
            Node *next;
            Node(){
                this->data = 0;
                next = NULL;
            }
            Node(int data){
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next){
                this->data = data;
                this->next = next;
            }
        };
*****************************************************************/
Node* findIntersection(Node *firstHead, Node *secondHead){
    Node *f=firstHead;
    Node *s=secondHead;

    unordered_set<Node *>st;
     while(f){
         st.insert(f);
         f=f->next;
     }
     while(s){
         if(st.find(s)!=st.end()){
             return s;
         }
         s=s->next;
     }
    return NULL;
}

//https://www.codingninjas.com/studio/problems/day-25-queue-using-stack_8230722?challengeSlug=striver-sde-challenge

#include<stack>
class Queue {
   stack<int>s1;
   stack<int>s2;
   int size;
   
   public:
   Queue() {
       size = 0;
   }

   void enQueue(int val) {
       s1.push(val);
       size++;
   }

   int deQueue() { 
       int ans;
      if(!s2.empty()){
          ans = s2.top();
          s2.pop();
      }
      else{
          while(!s1.empty()){
               int val = s1.top();
               s1.pop();
               s2.push(val);   
          }
          if(!s2.empty()){
              ans = s2.top();
              s2.pop();
          }
          else{
              return -1;
          }
      }
       size--;
       return ans;
   }

   int peek() {
      if(!s2.empty()){
          return s2.top();
      }
      else{
          if(s1.empty()){
              return -1;
          }
          else{
              while(!s1.empty()){
                  s2.push(s1.top());
                  s1.pop();
              }
              return s2.top();
          }
      }
   }


   bool isEmpty() {
       if(size == 0) {
           return true;
       }
       else{
           return false;
       }
   }
};

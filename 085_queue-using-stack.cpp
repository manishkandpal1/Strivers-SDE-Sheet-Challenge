//https://www.codingninjas.com/studio/problems/day-25-queue-using-stack_8230722?challengeSlug=striver-sde-challenge

#include<stack>

class Queue {
    private:
    stack<int> input;
    stack<int> output;
    public:
    Queue() {
    }

    void enQueue(int val) {
        input.push(val);
    }

    int deQueue() {
        if(isEmpty()){
            return -1;
        }
        else{
            if(output.empty() && (!input.empty())){
                while(!input.empty()){
                    output.push(input.top());
                    input.pop();
                }
                int x  = output.top();
                output.pop();
                return x;
            }

            else{
                int x  = output.top();
                output.pop();
                return x;
            }
        }
    }

    int peek() {
       if(input.empty()){
           return -1;
       }

       else{
           if(!output.empty()){
               return output.top();
           }

           else{
                while(input.empty() == false){
                    output.push(input.top());
                    input.pop();
                }
                return output.top();
           }
       }
    }
 
    bool isEmpty() {
        return input.empty() && output.empty();
    }
};

 


/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

//Function to push an element into stack using two queues.
void QueueStack :: push(int x)
{
    // step 1 insert new element to q2
    q2.push(x);
    
    // step 2 move everything from q1 to q2
    
    while(!q1.empty()){
        int ele = q1.front();
        q1.pop();
        
        q2.push(ele);
    }
    
    // step 3 again move everything from q2 to q1
    
    while(!q2.empty()){
        int ele = q2.front();
        q2.pop();
        
        q1.push(ele);
    }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
    if(q1.empty()){
        return -1;
    }
    
    int ele = q1.front();
    q1.pop();
    
    return ele;
}
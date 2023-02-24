void insert(int a, stack<int> &s){
    
    if(s.empty() || a >= s.top())
    {
        s.push(a);
        return;
    }
    
    int ele = s.top();
    s.pop();
    insert(a, s); // it finds the currect position of ele a in the stack
    
    s.push(ele);
}
void SortedStack :: sort()
{
    if(s.empty())
        return;
   // step 1 pop out all elements from stack one by one
   
   int ele = s.top();
   s.pop();
   sort(); // recursive call
   
   // step 2 insert the element 'ele' in sorted manner
   insert(ele, s);
}
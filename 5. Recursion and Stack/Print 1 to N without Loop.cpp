class Solution{
    public:
    void fun(int i, int &N){
        // base case
        if(i > N)
        {
            return ;
        }
        
        cout << i << " ";
        
        fun(i+1, N);
    }
    void printNos(int N)
    {
       fun(1, N);
    }
};
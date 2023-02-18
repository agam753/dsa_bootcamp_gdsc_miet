class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int cnt = 0;
	    
	    // TC = O(Log n) n = number of elements in the array
	    int first = -1, last = -1;
        
        // step 2 find first occurrence of target
        
        int i = 0, j = n-1;
        
        while(i <= j){
            int mid = (i+j)/2;
            
            if(arr[mid] == x){
                first = mid;
                j = mid-1;
            }
            else if(arr[mid] > x){
                j = mid-1;
            }
            else{
                // arr[mid] < target
                i = mid+1;
            }
        }
        
        // step 3 find last occurrence of target
        i = 0; j = n-1;
        
        while(i <= j){
            int mid = (i+j)/2;
            
            if(arr[mid] == x){
                last = mid;
                i = mid+1;
            }
            else if(arr[mid] > x){
                j = mid-1;
            }
            else{
                // arr[mid] < target
                i = mid+1;
            }
        }
        
        if(first == -1 && last == -1)
            return 0;
        
        cnt = last - first + 1;
	    
	    
	    return cnt;
	}
};
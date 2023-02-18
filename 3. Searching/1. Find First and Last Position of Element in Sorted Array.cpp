class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        
        // TC = O(log N)
        // log N >>>> o(N)
        // step 1
        int first = -1, last = -1;
        
        // step 2 find first occurrence of target
        
        int i = 0, j = arr.size()-1;
        
        while(i <= j){
            int mid = (i+j)/2;
            
            if(arr[mid] == target){
                first = mid;
                j = mid-1;
            }
            else if(arr[mid] > target){
                j = mid-1;
            }
            else{
                // arr[mid] < target
                i = mid+1;
            }
        }
        
        // step 3 find last occurrence of target
        i = 0; j = arr.size()-1;
        
        while(i <= j){
            int mid = (i+j)/2;
            
            if(arr[mid] == target){
                last = mid;
                i = mid+1;
            }
            else if(arr[mid] > target){
                j = mid-1;
            }
            else{
                // arr[mid] < target
                i = mid+1;
            }
        }
        
        
        // step 4 
        
        return {first, last};
    }
};
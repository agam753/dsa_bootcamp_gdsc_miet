//75. Sort Colors
//reference: https://leetcode.com/problems/sort-colors/description/

//approach 1: counting Sort   (TC--> O(2N)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 =0;
        int count1=0;
        int count2 =0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                count0++;         //2
            }
            else if(nums[i]==1){
                count1++;     //2
            }
            else if(nums[i]==2){
                count2++;  //2
            }
        }

        for(int i=0; i<count0; i++){
            nums[i]=0;  //[0,0...]
        }
        for(int i=count0; i<count0+count1; i++){
            nums[i]=1;    //[0,0,1,1...]
        }
        for(int i=count0+count1; i<count0+count1+count2; i++){
            nums[i]=2;    //[0,0,1,1,2,2]
        }
    }
};

//approach 2: Dutch National Flag Algorithm (TC--> O(N))
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int mid=0;
        int high= nums.size()-1;

        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};


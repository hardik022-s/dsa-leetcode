class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size=nums.size();
        vector<int> arr;
        int j=0;
        if(k>size){
            j=k;
        
        while(j>size){
            j=k-size;
            k=j;
        }
        j=size-j;
        }
        else j= size-k;
        for(int i=j; i<size; i++){
            arr.push_back(nums[i]);
        }
        for(int i=0; i<j; i++){
            arr.push_back(nums[i]);
        }
        nums=arr;
    }
};
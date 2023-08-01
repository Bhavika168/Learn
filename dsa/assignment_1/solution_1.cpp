class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n =nums.size();
        if(n < 3){
            return n;
        }
        int count=0, pointer= 0;
         
        for (int i=1; i<n; i++){
            if(nums[i] == nums[i-1] && count==0){
                count = 1;
                pointer++;
            }
            else if(nums[i] != nums[i-1]){
                count = 0;
                pointer++;
            }
            nums[pointer] = nums[i];
        }
        
        return pointer+1;
        
    }
};
//remove duplicate from sorted array
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int len=nums.size();
        if(len==0)
            return 0;
        int i=0,j;
        for(j=1;j<len;j++)
        {
            if(nums[i]!=nums[j])
            {
                i=i+1;
                nums[i]=nums[j];
            } 
        }
       
        return i+1;
    }   
};
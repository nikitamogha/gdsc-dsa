//pivot index
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int len = nums.size();
        int sum=0;
        for(int i=0;i<len;i++)
        {
            sum+=nums[i];
        }
        int rsum=sum;
        int lsum=0;
        for(int i=0;i<len;i++)
            
        {
            rsum-=nums[i];
            if(lsum==rsum)
                return i;
            lsum+=nums[i];
            
        }
        
        return -1;
    }
};
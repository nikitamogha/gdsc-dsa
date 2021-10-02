// rotate array
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
            
     int len=nums.size();
        int temp;
        for(int i=0;i<k;i++)
        {
            temp=nums[len-1];
            for(int j=len-1;j>0;j--)
            {
                nums[j]=nums[j-1];  
            }
            nums[0]=temp;
        }
    }
};
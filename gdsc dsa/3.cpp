// first and last position
class Solution {
public:
    
     int binary1(vector<int>& nums,int target)
    {
         int len,mid,res=-1;
        int low=0;
        len=nums.size();
        int high=len-1;
        while(low<=high)
        {
         mid=(low+high)/2;
            if(target==nums[mid])
            {
                res=mid;
                high=mid-1;
            }
            else if(target<nums[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        return res;
    }
    int binary2(vector<int>& nums,int target)
    {
         int len,mid,res=-1;
        int low=0;
        len=nums.size();
        int high=len-1;
        while(low<=high)
        {
         mid=(low+high)/2;
            if(target==nums[mid])
            {
                res=mid;
                low=mid+1;
            }
             else 
                 if(target<nums[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> ans;
        int  a=binary1(nums,target);
        int b= binary2(nums,target);
        ans.emplace_back(a);
        ans.emplace_back(b);
        return ans;
       
        }
};
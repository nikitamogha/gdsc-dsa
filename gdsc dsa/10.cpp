//two sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       //brute force
        
        /* <int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    ans.emplace_back(i);
                    ans.emplace_back(j);
                    return ans;
                }
            }
        }
        return ans;  */
        
        
        
        vector <int> ans;
        int n=nums.size();
        int diff;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            diff=target-nums[i];
            if(m.find(diff)!= m.end() && m.find(diff)->second !=i)
            {
                ans.emplace_back(i);
               ans.emplace_back(m.find(diff)->second);
                return ans;
            }
              m[nums[i]]=i;
        }
        return ans;
      
        
        
        
        
    }
};
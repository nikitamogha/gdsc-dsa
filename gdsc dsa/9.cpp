//leader in an array
class solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        vector<int> ans;
          for(int i=0;i<n;i++)
        {
            int j;
            for(j=i+1;j<n;j++)
            {
                if (a[i]<=a[j])
                break;
            }
                if(j==n)
                ans.emplace_back(a[i]);
            
        }
        return ans; 
    }
        
        
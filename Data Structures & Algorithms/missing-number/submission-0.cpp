class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        bool check = false;
        for(int i=0;i<=n;i++){
            check = false;
            for(int j=0;j<n;j++){
                if(nums[j] == i)
                {
                    check = true;
                    break;
                }
                
            }
            if (!check) {
                ans = i;
                break;
            }
          
        }

        return ans;
    }
};

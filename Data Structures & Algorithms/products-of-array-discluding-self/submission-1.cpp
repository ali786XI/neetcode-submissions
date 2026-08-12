class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int zero, product=1;
        int check = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == 0){
                zero = i;
                check++;
                continue;
            }
            product *= nums[i];
        }
        if(check > 0){
            for(int i=0;i<n;i++){
                if(check == 1 && i==zero)
                    ans.push_back(product);
                else
                    ans.push_back(0);
            }
        }
        else{
            for(int i=0;i<n;i++){
                ans.push_back(product/nums[i]);
            }
        }
        return ans;
    }
};
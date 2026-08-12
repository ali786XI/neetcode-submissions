class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            int second_int = target - nums[i];
            if(mp.find(second_int) != mp.end())
            {
                ans.push_back(mp.find(second_int)->second);
                ans.push_back(i);
                break;
            }
            else{
                mp[nums[i]] = i;
            }
        }
        return ans;
    }
};

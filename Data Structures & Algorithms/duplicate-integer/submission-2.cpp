class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> mpp;
        for(int i = 0;i < size(nums); i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] == 2){
                return true;
                break;
            }
        }
        return false;
    }
};
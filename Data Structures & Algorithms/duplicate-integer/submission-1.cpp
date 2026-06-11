class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.empty())return false;
        
        sort(nums.begin(),nums.end());
        auto p1=nums.begin();
        auto p2=p1+1;

        for(auto it=nums.begin();it!=nums.end()-1;it++){
            if(*(p1)==*(p2)){
                return true;
            }
            p1++;
            p2++;
        }
        return false;
    }
};
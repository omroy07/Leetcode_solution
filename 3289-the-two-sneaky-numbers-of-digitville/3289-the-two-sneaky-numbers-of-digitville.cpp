class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int i = 0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        vector<int> p;
        for(const auto &j : freq){
            if(j.second == 2){
                p.push_back(j.first);
            }
        }
        return p;
    }
};
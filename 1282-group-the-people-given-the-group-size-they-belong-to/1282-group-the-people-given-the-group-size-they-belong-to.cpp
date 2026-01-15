class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int , vector<int>> freq;
        for(int i = 0; i < groupSizes.size() ; i++){
            freq[groupSizes[i]].push_back(i);
        }
        vector<vector<int>> ans;
        for(auto e : freq){
            int j = 0;
            while( j < e.second.size()){
                vector<int> temp;
                for(int x = 0; x < e.first ; x++){
                    int index = e.second[j];
                    temp.push_back(index);
                    j++;
                }
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
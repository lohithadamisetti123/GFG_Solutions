class Solution {
  public:
    vector<int> remDuplicate(vector<int>& arr) {
        // code here
        unordered_map<int,int> freq;
        for(int i:arr){
            freq[i]++;
        }
        vector<int> res;
        for(auto i:freq){
            res.push_back(i.first);
        }
        return res;
    }
};
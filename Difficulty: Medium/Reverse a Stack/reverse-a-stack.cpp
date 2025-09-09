
class Solution {
  public:
    void reverse(stack<int> &St) {
        // code here
        vector<int> arr;
        while(!St.empty()){
        arr.push_back(St.top());
        St.pop();
        }
        for(int i=0;i<arr.size();i++){
            St.push(arr[i]);
        }
    }
};
//finding powersets of unique elements in an array
class Solution {
public:
    void allsubsets(vector<int> &arr, vector<int> &ans, int i, vector<vector<int>> &powersets)
    {
        if(i==arr.size())
        {
            powersets.push_back({ans});
            return;
        }

        //include
        ans.push_back(arr[i]);
        allsubsets(arr,ans,i+1, powersets);

        //exclude
        ans.pop_back(); //backtrack
        allsubsets(arr,ans,i+1, powersets);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> powersets;
        vector<int> ans;

        allsubsets(nums, ans, 0, powersets);
        return powersets;
    }
};

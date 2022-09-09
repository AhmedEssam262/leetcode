class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {

    vector<pair<int, int>> mp;

    for (int i = 0; i < mat.size(); i++)
    {
        int soldiers = 0;
        for (int j = 0; j < mat[0].size(); j++)
        {
            if (mat[i][j] == 1)
            {
                soldiers++;
            }
        }
        // storing  {power, index} as key-value pair
        mp.push_back({ soldiers,i });
    }

    sort(mp.begin(), mp.end());

    vector<int> ans;

    for (int i = 0; i < k; i++)
    {
        ans.push_back(mp[i].second);
    }

    return ans;
}
};

class Solution {
public:
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
	vector<int> res;

	for (int i = 0; i < nums1.size(); i++) {
        int index = -1;
        int index_2 = -1;
		auto it = find(nums2.begin(), nums2.end(),nums1[i]);
        if (it != nums2.end())
        {
             index_2=(it - nums2.begin());
        }
        else {
            res.push_back(-1);
            continue;
        }
        int new_index = -1;
        for (int j = index_2; j < nums2.size(); j++) {
            if (nums2[j] > nums1[i]) {
                 new_index = j;
                break;
            }
        }
        if(new_index ==-1)
            res.push_back(index);
        else
            res.push_back(nums2[new_index]);
       
	}
    return res;
}
};

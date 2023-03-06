class Solution {
public:
   int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
	vector<int> res;
	for (int i = 0; i < points.size(); i++) {
		if (x != points[i][0] && y != points[i][1]) {
			res.push_back(-1);
		}
		else {
			res.push_back(abs(x - points[i][0]) + abs(y - points[i][1]));
		}
	}


	int g = INT16_MAX;
	int index = -1;
	int numofnon = 0;
	for (int j = 0; j < res.size(); j++) {
		if (res[j] == -1)
			numofnon++;
	}
	if (numofnon == res.size())
		return -1;
	for (int j = 0; j < res.size(); j++) {
		if (res[j] != -1 && res[j] < g) {
			g = res[j];
			index = j;
		}
	}
	return index;
}
};

class Solution {
public:
bool checkStraightLine(vector<vector<int>>& coordinates) {
    int count=1;
	for (int i = 0; i < coordinates.size()-1; i++) {
        if(coordinates[i][0]==coordinates[i+1][0]){
            count++;
        }
    }

    if(count==coordinates.size())
        return true;
    if((coordinates[1][0] - coordinates[0][0])==0)
        return false;
	double slope = double(coordinates[1][1] - coordinates[0][1]) / double(coordinates[1][0] - coordinates[0][0]);
	double c = (coordinates[0][1] - slope*coordinates[0][0]);
	
	for (int i = 2; i < coordinates.size(); i++) {
		int res = coordinates[i][0] * slope+c;
		if (res != coordinates[i][1]) {
			return false;
		}
	}
	return true;
}

};

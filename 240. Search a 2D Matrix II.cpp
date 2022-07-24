#include<iostream>
#include<vector>
using namespace std;
// notice how you get the size
bool searchMatrix(vector<vector<int>>& matrix, int target) {
	int h= matrix.size();
	int l= matrix[0].size();
	for (int i = 0; i < h; i++) {
		if (matrix[i][0] > target) {
			break;
		}
		else if (matrix[i][0] < target || matrix[i][l - 1] < target) {
			continue;
		}
		else {
			for (int j = 0; j < l; j++)
			{
				if(matrix[i][j] == target){
					return true;
				}
			}
		}
	}
	return false;
}

int main() {
	vector<vector<int>> x = { {1, 4, 7, 11, 15},
	{2, 5, 8, 12, 19},
		{3, 6, 9, 16, 22},{10, 13, 14, 17, 24},{18, 21, 23, 26, 30} };
		
	int target = 5;
	cout << searchMatrix(x,5);
}

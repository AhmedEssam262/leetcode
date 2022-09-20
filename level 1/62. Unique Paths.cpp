class Solution {
public:
    int uniquePaths(int m, int n) {
	int arr[101][101] ;
	for (int i = 0; i <= m; i++) {
		arr[i][0] = 0;
		if (i > 0)
			arr[i][1] = 1;
	}
	
	for(int j = 0; j <= n; j++) {
		arr[0][j] = 0;
		if (j > 0)
			arr[1][j] = 1;
	}
	for (int x = 2; x <= m; x++) {
		for (int y = 2; y <= n; y++) {
			arr[x][y] = arr[x - 1][y] + arr[x][y - 1];
 		}
	}
	return arr[m ][n];
}
};

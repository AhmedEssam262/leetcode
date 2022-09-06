class Solution {
public:
    int magic(int a, int b, int c, int d, int e,
	int f, int g, int h, int i)
{
	set<int> s1 = { a, b, c, d, e, f, g, h, i },
		s2 = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	// Elements of grid must contain all numbers from 1 to
	// 9, sum of all rows, columns and diagonals must be
	// same, i.e., 15.
	if (s1 == s2 && (a + b + c) == 15 && (d + e + f) == 15 &&
		(g + h + i) == 15 && (a + d + g) == 15 &&
		(b + e + h) == 15 && (c + f + i) == 15 &&
		(a + e + i) == 15 && (c + e + g) == 15)
		return true;
	return false;
}

// Function to count total Magic square subgrids
int numMagicSquaresInside(vector<vector<int>>& grid)
{
	int ans = 0;
	int R = grid.size();
	int C = grid[0].size();
	for (int i = 0; i < R - 2; i++)
		for (int j = 0; j < C - 2; j++) {

			// if condition true skip check
			if (grid[i + 1][j + 1] != 5)
				continue;

			// check for magic square subgrid
			if (magic(grid[i][j], grid[i][j + 1],
				grid[i][j + 2], grid[i + 1][j],
				grid[i + 1][j + 1], grid[i + 1][j + 2],
				grid[i + 2][j], grid[i + 2][j + 1],
				grid[i + 2][j + 2]))
				ans += 1;
		}

	// return total magic square
	return ans;
}
};

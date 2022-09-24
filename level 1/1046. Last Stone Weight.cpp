class Solution {
public:
    
int lastStoneWeight(vector<int>& stones) {
	priority_queue<int> q;
	for (int i = 0; i < stones.size(); i++) {
		q.push(stones[i]);
	}
	if (stones.size() == 1)
		return stones[0];
	int s1;
	int s2;
	while (q.size()>1)
	{
		s1 = q.top();
		q.pop();
		s2 = q.top();
		q.pop();
		int dif = abs(s1 - s2);
		if (dif != 0)
			q.push(dif);
	}
	if (q.size() == 0)
		return 0;
	return q.top();
}
};

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
	priority_queue<string> p;
	vector<string> res;
	for (int i = 0; i < words.size(); i++) {
		p.push(words[i]);
	}

	map<string, int> my_map;
	multimap<int, string, greater<int>> my_map2;
	while (!p.empty())
	{
		my_map[p.top()]++;
		p.pop();
	}


	for (auto it = my_map.begin(); it != my_map.end(); it++) {
		my_map2.insert(pair<int,string>(it->second, it->first));
	}

	auto it2 = my_map2.begin();
	for (int i = 0; i < k; i++) {
		res.push_back(it2->second);
		it2++;
	}
	return res;
	
}
};

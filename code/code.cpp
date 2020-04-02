#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<vector<int> > v) {
	vector<int> ans(2,0);
	int *result = new int[2];

	for (int i = 0; i < 2; i++){
		if (v[0][i] == v[1][i])
			result[i] = v[2][i];
		else if (v[0][i] == v[2][i])
			result[i] = v[1][i];
		else if (v[1][i] == v[2][i])
			result[i] = v[0][i];
	}
	for(int j=0; j< 2; j++)
		ans[j] = result[j];

	return ans;
}
int main()
{
	vector<vector<int> > given(3, vector<int>(2,0));
	vector<int> ans;
	    char a,b;
	    int x1, y1, x2, y2, x3, y3, x4, y4;
	    cin >> a >> a>> x1 >> b >> y1 >> a >> b >> a>>x2 >> b >> y2 >> a >> b >> a>>
	         x3 >> b >> y3 >> a >> a;
	given[0][0] = x1;
	given[0][1] = y2;
	given[1][0] = x2;
	given[1][1] = y2;
	given[2][0] = x3;
	given[2][1] = y3;

	ans = solution(given);

	cout << "[" << ans[0] << ", " << ans[1] << "]" << endl;
return 0;
}

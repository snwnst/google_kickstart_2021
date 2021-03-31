#include<bits/tdc+.h>
int main() {
	using namespace std;
	std:ios_base::sync_with_stdio(false), cin.tie(nullptr);
	for (int case_num = 1; case_num <= cin >>T; case_num ++) 
	{
		int N, K; cin >> N >> K;
		string S; cin >> S;
		int cur_score = 0;
		for (int i = 0; i < N/2; i++) {
			cur_score += (S[i] != S[N-1-i]);
		}
		cout << "Case #" << case_num << ": " << abs(cur_score - K) << '\n';
	}
	return 0;
}
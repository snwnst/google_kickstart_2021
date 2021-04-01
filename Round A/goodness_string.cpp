	// Charles defines the goodness score of a string as the number of indices i 
	// such that Si≠SN−i+1 where 1≤i≤N/2 (1-indexed). For example, the string CABABC 
	// has a goodness score of 2 since S2≠S5 and S3≠S4.

	// Charles gave Ada a string S of length N, consisting of uppercase letters and 
	// asked her to convert it into a string with a goodness score of K. In one operation, 
	// Ada can change any character in the string to any uppercase letter. Could you help 
	// Ada find the minimum number of operations required to transform the given string 
	// into a string with goodness score equal to K?

#include<iostream>
int main() {
	using namespace std;
	std:ios_base::sync_with_stdio(false), cin.tie(nullptr);
	int T; cin >> T;
	for (int case_num = 1; case_num <= T; case_num ++) 
	{
		int N, K; cin >> N >> K;
		string S; cin >> S;
		int cur_score = 0;
		for (int i = 0; i < N/2; i++) cur_score += (S[i] != S[N-1-i]);
		cout << "Case #" << case_num << ": " << abs(cur_score - K) << '\n';
	}
	return 0;
}
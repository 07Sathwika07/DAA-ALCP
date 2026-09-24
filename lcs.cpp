#include <bits/stdc++.h>
using namespace std;
int lcs(string &A,string &B){
	int n=A.size();
	int m=B.size();
	vector<vector<int>> dp(m+1,vector<int>(n+1,0));
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(A[j-1]==B[i-1]){
				dp[i][j]=1+dp[i-1][j-1];
			}
			else{
				dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
			}
		}
	}
	return dp[m][n];
}
int main(){
	string A,B;
	cin>>A;
	cin>>B;
	cout<<lcs(A,B);
}


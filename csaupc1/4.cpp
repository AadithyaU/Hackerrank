#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
using namespace std;

#define sd(x) scanf("%d",&x)

 int main()
{
  int t;
  sd(t);

int n,m;
  while(t--) {
    sd(n);sd(m);
      int arr[n][m];

    for(int i = 0;i < n; i++) {
    	for(int j = 0; j < m; j++) {
    		 scanf("%d",&arr[i][j]);

    }}
   
   	int dp[n][m];
    memset(dp,0,sizeof(dp));
	dp[0][0] = arr[0][0];
	for(int i = 1; i < n; i++) dp[i][0] = dp[i-1][0] - arr[i][0];
	for(int i = 1; i < m; i++) dp[0][i] = dp[0][i-1] - arr[0][i];

	for(int i = 1;i < n; i++)
		for(int j = 1; j < m; j++) 
			dp[i][j] = max(dp[i-1][j],dp[i][j-1]) - arr[i][j];
	
	if(dp[n-1][m-1] < 0 ) printf("-1\n");		
    else printf("%d\n",dp[n-1][m-1]);

  }
  return 0;
}

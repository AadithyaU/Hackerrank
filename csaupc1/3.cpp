#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
using namespace std;

#define sd(x) scanf("%d",&x)

int lmatch(char *a,char *b,int k){
    int i,j;
	for(i = 0; i < k && b[i] && b[i] == a[i]; i++);
		if(b[i] != a[i] && i == 0) return -1;
		return i-1;
}

int rmatch(char *a,char *b,int k){
   int i ,j;
	int len = strlen(b);
	for(i = k-1,j = len - 1; i >= 0 && j >= 0 && b[j] == a[i]; i-- , j--);

		if(b[j] != a[i] && i == k-1) return -1;
		return len - 1 -j;
}
 
 int main()
{
  int n;
  sd(n);
  char f[100001];
  char str[n][100001];
  int dp[100001] = {-1};
  for(int i = 0; i < n; i++)
   scanf("%s",str[i]);
      scanf("%s",f);
  int len = strlen(f);
  int res;
    bool flag = true;
    memset(dp,-1,sizeof(dp));
  	int left = -1; int max = -1;
  for(int i = 0; i < n; i++) {
  	res = lmatch(f,str[i],len);
      if(res != -1 && res != len - 1) {
          dp[res] = i; flag = false;
      }
  }
     
     if(flag) {
        printf("No one Fused\n");
        return 0;    
     }
  
  for(int i = 0; i < n; i++) {
  	res = rmatch(f,str[i],len);
  	if(res != -1 && dp[len - 1 -res] != -1 && dp[res] != i) {
  		printf("%s %s\n",str[dp[len - 1 - res]],str[i]);
        return 0;
  	}
  }

   printf("No one Fused\n");
   return 0;
}
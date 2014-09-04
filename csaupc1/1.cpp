#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

#define sd(x) scanf("%d",&x)

void print(int *arr,int *in,int l,int h) {
	if(l > h) return;
	int mid = (l + h)/ 2;
	printf("%d ",arr[mid]);
	print(arr,in,l,mid-1);
	print(arr,in,mid+1,h);
}
 
 int main()
{
  int n,k;
  sd(n);
  while(n--) {
    sd(k);
    int arr[100001];
    for(int i = 0;i < k; i++) sd(arr[i]);
	int in[100001];
	for(int i = 0;i < k; i++) in[i] = arr[i];
	sort(arr,arr+k);
	print(arr,in,0,k-1);
    printf("\n");
  }
  return 0;
}

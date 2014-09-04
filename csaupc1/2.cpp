#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
using namespace std;

#define sd(x) scanf("%d",&x)

 
 int main()
{
  int n,k;
  sd(n);
  while(n--) {
    sd(k);
    printf("%d\n",k&1);
  }
  return 0;
}
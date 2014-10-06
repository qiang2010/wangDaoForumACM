/*
 * 给出n个整数按照从小到大输出其中前面 m大的数（输入的数据各不相同，并且都是在[-500000,500000]之间的整数）
 * 1.  一种方法就是排序，输出前m大的树数
 * 2. 建立一个小堆。。时间复杂度也是比较小的
 * 3. 由于输入都是整数，并且各不相同，都是在正负500000之间，因此可以空间换时间
*/
#include <iostream>
#include <memory.h>
#define B  500000
#define N  B*2+10
using namespace std;

int all_num[N];
int main(){
  int n,m;
  while(cin>>n>>m){
  int i = 0;
  memset(all_num,0,sizeof(all_num));
  int input;
  for( i = 0; i < n;i++){
    cin>>input;
    all_num[input+B]++;
  }
  i = N-1;
  for( int j = 0 ; j < m;j++){
    while(all_num[i]==0) i--;
    cout<< i-B; i--;
    if(j!=m-1)cout<<" ";
  }
  cout<<endl;
  }
}

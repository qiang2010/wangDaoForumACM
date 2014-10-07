/* 选取相应的贪心策略是非常重要的
 * 本题目，节目开始时间以及节目时间长短都不能作为贪心策略而得到最优解
 * 我们看的第一个节目一定是最早结束的，因此使用最早结束作为贪心策略，发现最早结束可以得到最优解
*/
#include <iostream>
#include <algorithm>
#define N 101
using namespace std;
struct tv{
   int beg;
   int en;
   tv(){
   beg = en =-1;
   }
};
tv all_tv [N];
int com(tv a,tv b){
  return a.en < b.en;
}
int main(){
  int n;
  size_t i =0;
  cin>>n;
  for( i =0;i<n;i++){
    cin>>all_tv[i].beg;
    cin>>all_tv[i].en;
  }
  sort(all_tv,all_tv+n,com);
  int start = all_tv[0].en;
  int endTime = all_tv[0].en;
  int sum=1;
  for(i =1;i<n;i++){
    if(endTime <= all_tv[i].beg){
      sum++;
      endTime = all_tv[i].en;
    }
  }
  cout<<sum;
}

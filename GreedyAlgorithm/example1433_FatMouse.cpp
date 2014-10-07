#include <iostream>
#include <algorithm>
#define N 1001
using namespace std;
struct goods{
  double j;
  double f;
  double s;
  goods(){
   j = f = s =0;
  }
};
// *** 按照性价比进行排序***
int com(goods a,goods b){
  return a.s > b.s;
 }
 goods all_goods[N];
int main(){
  int m,n;
  size_t i =0;
  while(true){
    cin>>n;
    if( n ==-1) return 0;
    cin>>m;
    for( i =0;i<m;i++){
        cin>>all_goods[i].j;
        cin>>all_goods[i].f;
        all_goods[i].s=all_goods[i].j/all_goods[i].f;
    }
    sort(all_goods,all_goods+m,com);

    double sum =0;
    i = 0;
    while(n>0 && i<m){
      if( n<all_goods[i].j){
        sum += n/all_goods[i].j*all_goods[i].f;
        n=0;
        break;
      }
      else {
        sum += all_goods[i].f;
        n -= all_goods[i].j;
      }
      i++;
    }
    cout<<sum<<endl;
 }
}


// 将数据本身和存储位置对应起来就是hash

#include <iostream>
#include <memory.h>
#define N 101

// *** 由于本题目的输入的分数都是在 0 - 100 之间的整数，因此已经确定了hash的结果范围
// *** 因此使用一个101
using namespace std;
int count_[N];

int main(){
  while(true){
    memset(count_,0,sizeof(count_));
    int n;
    cin>>n;
    if ( n == 0 ) return 0;
    int t;
    size_t i =0;
    for(i = 0 ; i < n ; i++){
      cin>>t;
      count_[t]++;
    }
    cin>>t;
    cout<<count_[t];
  }

}


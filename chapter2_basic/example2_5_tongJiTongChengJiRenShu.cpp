// �����ݱ���ʹ洢λ�ö�Ӧ��������hash

#include <iostream>
#include <memory.h>
#define N 101

// *** ���ڱ���Ŀ������ķ��������� 0 - 100 ֮�������������Ѿ�ȷ����hash�Ľ����Χ
// *** ���ʹ��һ��101
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


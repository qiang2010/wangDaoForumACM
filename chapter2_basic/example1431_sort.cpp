/*
 * ����n���������մ�С�����������ǰ�� m���������������ݸ�����ͬ�����Ҷ�����[-500000,500000]֮���������
 * 1.  һ�ַ��������������ǰm�������
 * 2. ����һ��С�ѡ���ʱ�临�Ӷ�Ҳ�ǱȽ�С��
 * 3. �������붼�����������Ҹ�����ͬ������������500000֮�䣬��˿��Կռ任ʱ��
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

/* ѡȡ��Ӧ��̰�Ĳ����Ƿǳ���Ҫ��
 * ����Ŀ����Ŀ��ʼʱ���Լ���Ŀʱ�䳤�̶�������Ϊ̰�Ĳ��Զ��õ����Ž�
 * ���ǿ��ĵ�һ����Ŀһ������������ģ����ʹ�����������Ϊ̰�Ĳ��ԣ���������������Եõ����Ž�
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

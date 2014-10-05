// ��5.1 ��ͨ����
#include<iostream>
#include<memory.h>
#define N 1000
using namespace std;

int Tree[N];

// *****���鼯�Ҹ��ڵ� ****
int findRoot(int x){
  if (x > N) return -1;
  if(Tree[x] == -1) return x;
  int temp= x ;
  while( Tree[temp] != -1){
    temp = Tree[temp];
  }
  return temp;
}
int main(){
  int n,m;
  int a,b;
  int tempRoot1,tempRoot2;
  cout<<"please input n(0<n<1000) and m(m>0):"<<endl;
  while(1){
    cin>>n;
    if (n == 0 ) return 0;
    cin>>m;
    memset(Tree,-1,sizeof(Tree)); // ���Ϊ -1����ʼ����£����нڵ㶼�ǹ�������ͨ����
    for (size_t i = 0; i < m ; i++){
      cin>>a>>b;
      tempRoot1 = findRoot(a);
      tempRoot2 = findRoot(b);
      //cout<<"root"<<tempRoot1<<" "<<tempRoot2;
      // *** �������ͬһ�����У���ϲ���������һ�������Ͳ��ô�����
      // *** ע��ϲ���ʱ���ǰ�һ�����ĸ���ֵ����һ������Tree[��]����������һ�����ͱ���˵�һ��������
      if ( tempRoot1 != tempRoot2){
        Tree[tempRoot2] = tempRoot1;   // **��� �� Tree[b] = tempRoot1 ; �ʹ���
      }
    }
    int ans = 0;
    for( size_t j = 1; j <= n; j++){ // *** ����Tree��0 - n-1 ��-1������������ͨ��������Ŀ
      if(Tree[j] == -1) ans ++;
      //cout<<"Tree j"<<Tree[j]<<endl;
    }
    cout<< "ans:" << ans<<endl;
    cout<<"please input n(0<n<1000) and M:"<<endl;
  }
  return 0;
}


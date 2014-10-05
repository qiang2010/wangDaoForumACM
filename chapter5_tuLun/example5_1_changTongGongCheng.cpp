// 例5.1 畅通工程
#include<iostream>
#include<memory.h>
#define N 1000
using namespace std;

int Tree[N];

// *****并查集找父节点 ****
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
    memset(Tree,-1,sizeof(Tree)); // 清空为 -1，初始情况下，所有节点都是孤立的连通分量
    for (size_t i = 0; i < m ; i++){
      cin>>a>>b;
      tempRoot1 = findRoot(a);
      tempRoot2 = findRoot(b);
      //cout<<"root"<<tempRoot1<<" "<<tempRoot2;
      // *** 如果不在同一个树中，则合并，否则在一棵树，就不用处理了
      // *** 注意合并的时候是把一棵树的根赋值给另一个树的Tree[根]，这样另外一棵树就变成了第一个的子树
      if ( tempRoot1 != tempRoot2){
        Tree[tempRoot2] = tempRoot1;   // **如果 是 Tree[b] = tempRoot1 ; 就错了
      }
    }
    int ans = 0;
    for( size_t j = 1; j <= n; j++){ // *** 最终Tree中0 - n-1 中-1的数量就是连通分量的数目
      if(Tree[j] == -1) ans ++;
      //cout<<"Tree j"<<Tree[j]<<endl;
    }
    cout<< "ans:" << ans<<endl;
    cout<<"please input n(0<n<1000) and M:"<<endl;
  }
  return 0;
}


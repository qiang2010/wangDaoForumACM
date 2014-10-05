//  最小生成树： 连通图中权值之和最小的树是该连通图的最小生成树
#include <iostream>
#include <algorithm>
#include <memory.h>
#define N 101
#define EDGES 100*100/2
using namespace std;

int Tree[N];
int findRoot(int x ){
  if (x > N) return -1;
  if(Tree[x]== -1) return x;
  int root = findRoot(Tree[x]);
  Tree[x]= root;
  return root;
}
struct edge{
  int beg,en;
  int weight;
  edge(){
    beg = en = -1;
    weight = -1;
  }
};
int com(edge a,edge b){
  return a.weight < b.weight;
}
edge allEdges[EDGES];
int main(){
  int n;
  int a,b, c;
  int root1,root2;
  while(true){
    cin>>n;
    if ( n == 0 ) return 0;
    // 读入数据
    int num = n*(n-1)/2;
    for ( size_t i = 0 ; i< num; i ++){
      cin>>a>>b>>c; // a b 是结点，c是权重
      allEdges[i].beg = a;
      allEdges[i].en  = b;
      allEdges[i].weight = c;
    }
    sort(allEdges,allEdges+num,com);
    memset(Tree,-1, sizeof(Tree));  // **切记勿忘初始化为 -1 ，否则会出现莫名的运行错误
    edge temp;
    int sum = 0;
    for(size_t j = 0 ; j< num ;j++){
      temp = allEdges[j];
      root1 = findRoot(temp.beg);
      root2 = findRoot(temp.en);
      if(root1 != root2 ){
        sum += temp.weight;
        Tree[root1] = root2;
      }
    }
    cout<< "ans "<< sum <<endl;
  }

  return 0;
}


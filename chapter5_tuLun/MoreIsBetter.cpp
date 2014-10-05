/* more is better
   使用并查集，我们可以在根节点存放树中节点的数目，使用负数来存放
*/
#include<iostream>

#define N 10000001

using namespace std;
int Tree[N];
int findRoot(int x ){
  if ( x > N ) return -1;
  while(Tree[x] < 0){  // 只要小于零，那就是根节点
    x = Tree[x];
  }
  return x;
}
int main(){
   int n;
   cin>>n;
   int a,b;
   int tempR1,tempR2;
   int sum;
   for(size_t i = 0; i< n; i++){
     cin>>a>>b;
     sum = 0;
     tempR1 = findRoot(a);
     tempR2 = findRoot(b);
     if(tempR1 != tempR2){
       sum = Tree[tempR1] + Tree[tempR2];
       Tree[tempR1] = tempR2;
       Tree[tempR2] = sum;
     }
   }
   int max_num = 1;
   for( size_t j = 0 ; j < N; j++){
     if ( max_num < - Tree[j])
        max_num = - Tree[j];
   }
}

/*
 *  并查集
 *
 *  求集合的交 并 差等，使用双亲节点表示法。在数组中，存放的时候父节点的编号。
*/
#include <iostream>

#define MAX 100
using namespace std;

int Tree[MAX];
//***** 返回一个节点的父节点 ****递归**
// ***** 一般加入 路径压缩操作 ，为了防止在合并集合的时候出现退化树****
int findRoot(int x){
  if(Tree[x] == -1) return x;
  int tmp =  findRoot(Tree[x]);
  Tree[x] = tmp; // 在递归返回的时候会将返回过程中的所有节点的父节点都设置为根
  return tmp;
}
// ***** 非递归找父节点 *****
int findRoot2(int x){
  int temp = x;
  while(Tree[temp] != -1){
    temp = Tree[temp];
  }
  return temp;
}
int main(){





}

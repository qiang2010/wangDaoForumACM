/*
 *  ���鼯
 *
 *  �󼯺ϵĽ� �� ��ȣ�ʹ��˫�׽ڵ��ʾ�����������У���ŵ�ʱ�򸸽ڵ�ı�š�
*/
#include <iostream>

#define MAX 100
using namespace std;

int Tree[MAX];
//***** ����һ���ڵ�ĸ��ڵ� ****�ݹ�**
// ***** һ����� ·��ѹ������ ��Ϊ�˷�ֹ�ںϲ����ϵ�ʱ������˻���****
int findRoot(int x){
  if(Tree[x] == -1) return x;
  int tmp =  findRoot(Tree[x]);
  Tree[x] = tmp; // �ڵݹ鷵�ص�ʱ��Ὣ���ع����е����нڵ�ĸ��ڵ㶼����Ϊ��
  return tmp;
}
// ***** �ǵݹ��Ҹ��ڵ� *****
int findRoot2(int x){
  int temp = x;
  while(Tree[temp] != -1){
    temp = Tree[temp];
  }
  return temp;
}
int main(){





}

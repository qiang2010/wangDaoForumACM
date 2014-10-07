#include <iostream>

using namespace std;

int main(){
  int n;
  char a,b;
  cin>>n;
  cin>>a>>b;
  // *** 动态申请二维数组
  char **p= new char*[n];
  size_t i =0;
  for(i =0;i<n;i++){
    p[i]= new char[n];
  }
  i = 0;
  char c;
  while(i <= n-i-1){
    if(i %2==0) c =b;
    else c =a;
    for(size_t j = i;j<= n-i-1; j++){
        p[i][j] = c;
        p[n-i-1][j]= c;
        p[j][i] = p[j][n-i-1]=c;
    }
    i++;
  }
  if(n>2){
    p[0][n-1]=p[0][0]=p[n-1][0]=p[n-1][n-1]=' ';
  }
  for( i =0;i<n;i++){
    for( size_t j = 0;j<n;j++)
        cout<<p[i][j];
    cout<<endl;
  }

  for( size_t i = 0;i<n;i++)
    delete [](p[i]);
  delete []p;
}

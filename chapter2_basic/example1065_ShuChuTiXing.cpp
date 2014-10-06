#include <iostream>

using namespace std;

void printChar(int x,char a ){
  for( int i = 0;i < x ;i++)
    cout<<a;
}
int main(){

  int h;
  cin>>h;
  int size_ = 2*(h-1)+h;
  int startNum;
  for(int i = 0 ;i < h ;i++){
    startNum = h+2*i;
    printChar(size_-startNum,' ');
    printChar(startNum,'*');
    cout<<endl;
  }


}




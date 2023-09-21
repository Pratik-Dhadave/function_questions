#include <iostream>
using namespace std;
// funtion declaration
void printMsg();
int printSum(int a, int b, int c){
    int ans = a+b+c;
    return ans;
}

void msgPrint(){
    cout<<"message 1"<<endl;
    return;
    cout<<"message 2"<<endl;
}
int main()
{
    // printMsg();

    // int sum =printSum(4,5,6);
    // cout<<sum<<endl;

    msgPrint();
    return 0;
}

void printMsg(){
  for(int i=0; i<10; i++){
    cout<<"Sundar ko sundari pasand hai "<<endl;
  }
}
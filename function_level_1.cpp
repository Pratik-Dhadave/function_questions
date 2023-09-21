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

void maxOfThree(int num1, int num2, int num3){
  int ans=max(num1,num2);
  int finalAns = max(ans,num3);
  cout<<"maximum no is:"<<finalAns<<endl;
}

void countOf1toN(int n){
    for(int i=1; i<=n; i++){
      cout<<i<<endl;
    }
}
int sumOf1toN(int n){
  int sum=0;
  for(int i=1; i<=n; i++){
    sum+=i;
  }
  return sum;
}
void sumofEven1toN(int n){
  int sum=0;
  for(int i=2; i<=n; i=i+2){
    sum+=i;
  }
  cout<<"Sum is:"<<sum<<endl;
}
void checkEvenOdd(int num){
  if((num & 1)==0){
    cout<<"Even No"<<endl;
  }else{
    cout<<"Odd No"<<endl;
  }
}
bool checkPrime(int n){
  for(int i=2; i<n; i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}
int main()
{
    // printMsg();

    // int sum =printSum(4,5,6);
    // cout<<sum<<endl;

    // msgPrint();

    // maxOfThree(45,445,4);

    // countOf1toN(10);

    // int sum =sumOf1toN(10);
    // cout<<"sum is :"<<sum<<endl;

    // sumofEven1toN(10);

    // checkEvenOdd(1);

    bool prime =checkPrime(3);
    if(prime){
      cout<<"prime no"<<endl;
    }else{
      cout<<"not prime"<<endl;
    }
    return 0;
}

void printMsg(){
  for(int i=0; i<10; i++){
    cout<<"Sundar ko sundari pasand hai "<<endl;
  }
}
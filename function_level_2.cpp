#include <iostream>
using namespace std;

void areaOfCircle(float radius){
    float pi = 3.14;
    float area =pi*radius*radius;
    cout<<"Area of Cricle is:"<<area;
}
long long int factOfN(long long int num){
    long long int fact=1; 
    for(int i=1; i<=num; i++){
        fact=fact*i;
    }
    return fact;
}
void  setKthBit(int N, int K)
    {
        // Write Your Code here
        int mask = 1 << K;
        int ans= N | mask;
        cout<< ans;
    }

double convetTemperatue(double celsius){
    double k = celsius+273.15;
    double f = celsius*1.80+32.00;

    cout<<k<<endl<<f<<endl;
}
int createNumberUsingDigit(int numberOfDigit){
    int num=0;
    for(int i=0; i<numberOfDigit; i++){
        int digit;
        cout<<"Enter number:"<<endl;
        cin>>digit;
        num=num*10+digit;
        cout<<"number created so far:"<<num<<endl;
    }
    return num;
}
void printAllDigits(int n){
    while(n>0){
        int oncesDigit = n%10;
        cout<<"Digit is:"<<oncesDigit<<endl;
        n=n/10;
    }
}
float KMtoMiles(float km){
    float _1KM = 0.621371;
    float miles = km * _1KM;
    return miles;
}
int main(){
    // float radius;
    // cin>>radius;
    // areaOfCircle(radius);

    // long long int ans =factOfN(15);
    // cout<<"Factorial is:"<<ans<<endl;
    // setKthBit(10,2);
    // convetTemperatue(36.50);

    // int numberOfDigit;
    // cin>>numberOfDigit;
    // int num= createNumberUsingDigit(numberOfDigit);
    // cout<<"ceated number using digit:"<<num;

    // int n;
    // cout<<"Enter number:"<<endl;
    // cin>>n;
    // printAllDigits(n);

    float km;
    cout<<"Enter KM:"<<endl;
    cin>>km;
    float miles = KMtoMiles(km);
    cout<<"Miles is:"<<miles;
    return 0;
}
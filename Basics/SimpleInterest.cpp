#include<iostream>
using namespace std;
int main(){
    int principal , rate , time ;
    double simpleInterest;
    cin>> principal >> rate >> time;

    simpleInterest =    (principal * rate * time)/100.00;
    
    cout<<"Simple interst of " <<principal <<" is " <<simpleInterest <<endl;
}
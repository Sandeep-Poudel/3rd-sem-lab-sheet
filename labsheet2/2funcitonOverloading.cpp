#include <iostream>
using namespace std;

float convert(int &feet , int &inches){
    inches = inches + feet*12;
}

float convert(int feet=1){
     return feet*12;
};

float convert(int feet,double inches){
    inches=(double)feet*12+inches;
    return inches;
}



int main(){
    int feet;
    float inches;
    cout<<"Enter the feets : ";
    cin>> feet;
    cout<<"Enter the inches : ";
    cin>> inches;
    inches = convert(66);
    cout<<inches<<endl;
    return 0;
}
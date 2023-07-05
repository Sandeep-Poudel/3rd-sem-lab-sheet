#include <iostream>
using namespace std;

float & assignLargerTemp(float &temp1,float &temp2){
    return (temp1>temp2)?temp1:temp2;
}


int main(){
    float temp1=100.99, temp2=23.56;

    cout<<"Enter the temperature: "<<endl;
    cin>>assignLargerTemp(temp1,temp2);
    cout<<"The value of temp1 variable is : "<< temp1<<endl;
    cout<< "The value of temp2 variable is :"<< temp2<<endl;
    
    return 0;
}
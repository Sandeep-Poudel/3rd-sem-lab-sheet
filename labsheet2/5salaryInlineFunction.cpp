#include <iostream>
using namespace std;


inline void salaryAfterTax(float x){
    cout<<"Your salary after tax is "<<x*0.9<<endl;
}

int main(){
    float salary;
    cout<<"Enter your salary: ";
    cin>>salary;
    salaryAfterTax(salary);
    return 0;
}
#include <iostream>
using namespace std;

namespace Square{
    int num;
    int fun(int a){
        return a*a;
    }

}

namespace Cube{
    int num;
    int fun(int a){
        return a*a*a ;
    }
}

int main(){
    Square::num=5;
    Cube::num=10;
    
    cout<<"Square of the num of Cube namespace ("<<Cube::num<<") is "<<Square::fun(Cube::num)<<endl;
    cout<<"Cube of the num of Square namespace ("<<Square::num<<") is "<<Cube::fun(Square::num)<<endl;

    return 0;
}
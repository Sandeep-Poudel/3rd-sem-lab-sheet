#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};


int takeDate(Date& d){
    cout<<"Enter the day: ";
    cin>>d.day;
    cout<<"Enter the month: ";
    cin>>d.month;
    cout<<"Enter the year: ";
    cin>>d.year;
    return 0;
};

int showDate(Date& d){
    cout<<d.day<<"/"<<d.month<<"/"<<d.year<<endl;
    return 0;
}

int main(){
    Date d1;
    takeDate(d1);
    showDate(d1);
    return 0;
}
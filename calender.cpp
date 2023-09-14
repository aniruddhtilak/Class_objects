#include<iostream>
using namespace std;
class calender{
    public:
    int year;
    int month;
    int day;
    int yob;
    int mob
    int dob;
    calender(){
    	cout<<"Enter current date - ";
        cout<<"Enter year - ";
        cin>>year;
        cout<<"Enter month - ";
        cin>>month;
        cout<<"Enter day - ";
        cin>>day;
        cout<<"Enter year of birth - ";
        cin>>yob;
        cout<<"Enter month of birth - ";
        cin>>mob;
        cout<<"Enter date of birth - ";
        cin>>dob;
    }
    int checker(){
        cout<<"Entered Date - "<<day<<" - "<<month<<" - "<<year<<endl;
        if(year%4==0 & year%400==0){
            cout<<"Year is leap";
            }
        else{
            cout<<"Year is not leap";
        }
         
    }
};
int main(){
    calender c1;
    c1.checker();
    return 0;
}

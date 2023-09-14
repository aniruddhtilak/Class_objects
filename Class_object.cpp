#include<iostream>
using namespace std;
class cube{
    public: //access specifier
    double height=2.0;
    protected:
    double width=3.0;
    private:
    double length=4.0;
 };
int main(){
    cube c1;
    double vol=(c1.height)*(c1.width)*(c1.length);
    cout<<"volume= "<<vol;

}
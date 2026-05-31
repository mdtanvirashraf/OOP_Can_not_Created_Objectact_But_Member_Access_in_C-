// Can_not_Created_Objectact_But_Member_Access
#include <iostream>
using namespace std;

class Tanvir
{

    int x;
    static int y;
    // static member define "use_static_keyword Which_type_member member name"
public:
    static void setData() // when i can use "static" kew word.For this cause olradey created "c member function". And this member access can not need created object.And this object member only one time created all object member use this member
    {
        y = 5;
    }
    static void display()
    {
        cout << "Y = " << y << endl;
    }
};

int Tanvir::y; // strack variable "main() function uper declaration netarcray" And Example:- "class_name :: member_name"
int main()
{
    Tanvir::setData();
    Tanvir::display();

    // direach member access procurer "class_name :: member_name"
    return 0;
}
// Can_not_Created_Objectact_But_Member_Access
#include <iostream>
using namespace std;

class Tanvir
{
public:
    int a, b;
    // static member define "use_static_keyword Which_type_member member name"
    static void c() // when i can use "static" kew word.For this cause olradey created "c member function". And this member access can not need created object.And this object member only one time created all object member use this member
    {
        cout << "C is access can not created obje" << endl;
    }
};

int main()
{
    Tanvir::c();
    // direach member access procurer "class_name :: member_name"
    return 0;
}
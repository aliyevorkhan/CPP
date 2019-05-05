#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name = "Orkhan";

    name.push_back('A');

    string sName = "Aliyev";

    name = name + " " + sName;

    cout << "Hello " << name <<endl;
    return 0;
}

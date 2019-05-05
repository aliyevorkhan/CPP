#include <iostream>

using namespace std;

int main()
{

    char ch;
//mustafa
    ch= cin.peek();//m
    cin.get(ch);//m
    cin.ignore(5, 'a');
    cin.get(ch);
    cin.putback(ch);
    cout<<ch;






    return 0;
}

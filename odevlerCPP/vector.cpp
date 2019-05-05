#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> myVec;
    myVec.push_back(10);
    myVec.push_back(12);
    myVec.push_back(11);
    cout << myVec.front() << endl;
    myVec.pop_back();
    cout << myVec.back() << endl;

    return 0;
}

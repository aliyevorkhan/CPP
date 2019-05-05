#include <iostream>
using namespace std;

template <typename xxx>

xxx myMax(xxx a, xxx b){
    return (a > b) ? a : b; //a b'den buyukse a'yi degilse b'yi dondurs
}

int main(int argc, char const *argv[])
{
    cout << myMax(5, 2)<<endl;
    cout << myMax(2.5, 3.5)<<endl;
    cout << myMax('a', 'b')<<endl;
    
    return 0;
}

#include <iostream>
using namespace std;
int absolute(int);
float absolute(float);
int main() {
    int a = -5;
    float b = 5.5;
    
    cout << "Absolute value of " << a << " = " << absolute(a) << endl;
    cout << "Absolute value of " << b << " = " << absolute(b);
    return 0;
}
int absolute(int var) {
     if (var < 0)
         var = -var;
    return var;
}
float absolute(float var){
    if (var < 0.0)
        var = -var;
    return var;
}

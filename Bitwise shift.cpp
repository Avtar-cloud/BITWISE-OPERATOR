//AVTAR SINGH ENTC A1
//24070123027
#include <iostream>
using namespace std;
int main(){
    int a = 4;  
    int b = 5;
    int bitwise_and = a & b;
    int bitwise_or = a | b;
    int bitwise_xor = a ^ b;
    int bitwise_not = ~a;
    int left_shift = a << 2;
    int right_shift = a >> 1;
    cout << "Bitwise AND: " << bitwise_and << endl;
    cout << "OR: " << bitwise_or << endl;
    cout << "XOR: " << bitwise_xor << endl;
    cout << "NOT a: " << bitwise_not << endl;
    cout << "Left Shift: " << left_shift << endl;
    cout << "Right Shift: " << right_shift << endl;
     return 0;
}

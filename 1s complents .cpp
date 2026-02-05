#include <iostream>
#include <string>
using namespace std;

class BinaryComplement {
private:
    string binaryNumber;

public:

    void setBinary(string num) {
        binaryNumber = num;
    }


    string getBinary() {
        return binaryNumber;
    }


    string calculateOnesComplement() {
        string complement = binaryNumber;
        for (char &bit : complement) {

            bit = (bit == '0') ? '1' : '0';
        }
        return complement;
    }
};

int main() {
    BinaryComplement binaryObj;
    string input;

    cout << "Enter a binary number: ";
    cin >> input;


    binaryObj.setBinary(input);


    cout << "1's complement: " << binaryObj.calculateOnesComplement() << endl;

    return 0;
}

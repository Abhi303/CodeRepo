#include<iostream>
#include<string>
using naemspace std;

string getString(int d) {
    if(d == 2) {
        return "abc";
    }
    if(d == 3) {
        return "def";
    }
    if(d == 4) {
        return "ghi";
    }
}

string *keypad(int input, int &outputSize) {
    if(input == 0) {
        string *output = new string[1];
        output[0] = "";
        return output;
    }
    
    int lastDigit = input % 10;
    int smallerNumber = input / 10;
    
    string *smallOutput = keypad(smallerNumber);
    string lastDigitChars = getString(lastDigit);
    string *output = new string[smallOutputSize * lastDigitChars.size()];
    int k = 0;
    for(int i = 0; i < lastDigitChars.size(); i++) {
        for(int j = 0; j < smallOutputSize; j++) {
            output[k] = smallOutput[j] + lastDigitChars[i];
            k++;
        }
    }
    outputSize = smallOutputSize *lastDigitChars.size();
    return output;
}
int main() {
    int size;
    string *output = keypad(23, size);
    for(int i = 0;i < size; i++) {
        cout<<output[i] << endl;
    }
}

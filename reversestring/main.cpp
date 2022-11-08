#include <stdio.h>
#include <iostream>
#include <string>
#include "stdio.h"

using namespace std;

int main(){
    string uinput;
    int stringlen = uinput.length();
    char temp;

    cout << "enter string to be reversed: \n";
    getline(cin, uinput);
    
    stringlen = uinput.length();
    temp = uinput.back();
    for (int i = uinput.length(); i > -1; i--)
    {
        cout << uinput[i];
        
    }
    cout << endl;

}
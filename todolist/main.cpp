
#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
#include "stdio.h"

using namespace std;

bool running = 1;


void getitem(){
    ofstream MyFile("filename.txt");

    string uinput;
    string mytext;
    fstream file;

    while(running == 1){
        printf("> ");
        std::getline(std::cin, uinput);
        if(uinput == "exit"){
            running = 0;
        }
        if(uinput == "show list"){
            MyFile.close();
            std::ifstream t("filename.txt");
            std::stringstream buffer;
            buffer << t.rdbuf();
            std::cout << buffer.str();
        }        
        MyFile << uinput << endl;
        }

        //MyFile << endl;        
        

    
    MyFile.close();
}


int main(){
    cout << "write everything you have to do here: \n";
    
    getitem();
}
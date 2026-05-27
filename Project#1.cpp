#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <windows.h>
using namespace std;

struct user{
    string username;
    string email;
    string password;
};




void entrance();

void entrance(){
    cout << "WELCOME TO tOkOBook\n";
    system("pause");
    system("cls");
    cout << "Please Read This Carefully\n";
    system("pause");
    system("cls");
}

int main(){
    entrance();
}
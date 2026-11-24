#include <iostream>
#include<fstream>

using namespace std;

int main(){
    ofstream f("student.txt",ios::app);
    char name[20],ch ='y';
    int id;
    float grade;
    while(ch=='y'||ch=='y'){
            cin>>ws;

    cin.getline(name,20);
    cin>>id>>grade;
    f<<name<<","<<id<<","<<grade<<"$\n";
    cin>>ch;
    f.close();
    }

    return 0;
}

#include <iostream>
#include<fstream>
#include<string>

using namespace std;

int main(){
    string name,id,grade;
    cout<<"Enter full name,ID,grade:\n";
    getline(cin,name);
    getline(cin,id);
    getline(cin,grade);
    ofstream file("student.txt");
    if(!file.is_open()){
            cout<<"Error\n";
    return 1;

    }
    file<<"name:"<<name<<"/nID:"<<id<<"/nGrade:"<<grade<<"\n";
    file.close();
    cout<<"Done\n";



    return 0;
}




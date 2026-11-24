#include <iostream>
#include<fstream>

using namespace std;

int main(){
    fstream file ("welcome.txt",ios::in|ios::out|ios::trunc);
    file<<"Hello Everybody";
    file.seekp(11);
    file<<"one";
    file.close();


    return 0;
}

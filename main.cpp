#include <iostream>
#include<fstream>
#include<string>


using namespace std;

int main(){
    string f1,f2,f3;
    ifstream in ("fruit.txt");
    if(!in)return 1;
    in>>f1>>f2>>f3;
    cout<<f1<<"\n"<<f2<<"\n"<<f3<<"\n";
    in.close();


    return 0;
}

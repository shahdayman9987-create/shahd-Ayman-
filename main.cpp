#include <iostream>
#include<fstream>
#include<cstdio>

using namespace std;

int main(){

    ofstream ("grades.txt")<<"85\n90\n78\nn92\n88\n";
    ifstream fin("grades.txt");
    if(!fin)return 1;
    int x;
    while(fin>>x)cout<<x<<"\n";
    fin.close();
    int del;
    cout<<"delete:";
    cin>>del;
    ifstream f1("grades.txt");
    ofstream f2("temp.txt");
    if(!f1||!f2)return 1;
    while(f1>>x)if(x !=del)f2<<x<<"\n";
    f1.close();f2.close();
    if(remove("grades.txt") ==0 && rename("temp.txt","grades.txt")==0)
        cout<<"Done\n";
    else
        cout<<"Error\n";



    return 0;
}




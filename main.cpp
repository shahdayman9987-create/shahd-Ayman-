#include <iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

int main(){
    int n,age;
    string name;
    cin>>n;
    ofstream out("persons.txt");
    while(n--&&cin>>name>>age)out<<name<<" "<<age<<"\n";
    out.close();
    ifstream in("persons.txt");
    vector<pair<string,int>>v;
    while(in>>name>>age)v.push_back({name,age});
    if(!v.empty()){
            auto mn=v[0],mx=v[0];
    for(auto&x:v){
            if(x.second<mn.second)mn=x;
    if(x.second>mx.second)mx=x;
    }


    ofstream res("results.txt");
    res<<"younger:"<<mn.first<<" "<<mn.second<<"\n";
    res<<"Older:"<<mx.first<<" "<<mx.second<<"\n";
    }





    return 0;
}

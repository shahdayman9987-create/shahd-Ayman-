#include <iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    vector<string>names={
        "Hadeer Mahmoud",
        "Youssef Ali",
        "Ahmed Mostafa",
        "Esraa Ebrahim"
        };
        sort(names.begin(),names.end());
        cout<<"Names sorted successfully:"<<endl;
        for(const string&name:names){
                cout<<name<<endl;

        }


    return 0;
}

#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int> populationmap={
        {"maharashtra",1000002020},
        {"karnataka",3766438},
        {"bengal",836443}
    };

    string statename;
    cout<<"Enter state name : ";
    cin>>statename;

    auto it=populationmap.find(statename);
    if (it!=populationmap.end())
    {
        cout<<"\nPopulation of "<<statename<<" is "<<it->second;
    }else{
        cout<<"\nData not found for "<<statename<<endl;
    }
}
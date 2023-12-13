#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string data;
    cout<<"Enter data : ";
    cin>>data;

    ofstream f1("abc.txt");
    if (!f1)
    {
        cout<<"Error couldnt open file"<<endl;
    }else{
        f1<<data<<endl;
        f1.close();
    }
    
    ifstream f2("abc.txt");
    if (!f2)
    {
        cout<<"Error couldnt open file"<<endl;
    }else{
        while (f2>>data)
        {
            cout<<"Data : "<<data<<endl;
        }
        f2.close();
    }
    

    return 0;
}
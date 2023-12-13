#include<iostream>
using namespace std;
class Complex{
    public:
    float real,img;
    Complex(){
        real=img=0;
    }
    Complex operator+(Complex obj){
        Complex temp;
        temp.real=real+obj.real;
        temp.img=img+obj.img;
        return temp;
    }
    Complex operator*(Complex obj){
        Complex temp;
        temp.real=real*obj.real-img*obj.img;
        temp.img=real*obj.img+img*obj.real;
        return temp;
    }
    friend istream& operator>>(istream&, Complex&);
    friend ostream& operator<<(ostream&,Complex&);
};
istream& operator>>(istream& is, Complex& obj) {
        is >> obj.real >> obj.img;
        return is;
}
ostream& operator<<(ostream& outt,Complex& obj){
    outt<<obj.real<<"+"<<obj.img<<"i"<<endl;
    return outt;
}
int main(){
    Complex a,b,c;
    cin>>a;
    cin>>b;
    c=a+b;
    cout<<c;
    c=a*b;
    cout<<c;
    return 0;
}
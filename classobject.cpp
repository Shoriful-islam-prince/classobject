#include<iostream>
using namespace std;
class student {
    public:
int id;
double gpa;
};

int main(){
student prince,rana;
prince.id=10;
prince.gpa=3.45;
cout<<prince.id<<" "<<prince.gpa<<endl;
rana.id=12;
rana.gpa=3.34;
cout<<rana.id<<" "<<rana.gpa<<endl;
    return 0;
}
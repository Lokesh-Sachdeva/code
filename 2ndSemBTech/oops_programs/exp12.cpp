#include<iostream>
#include<string.h>
using namespace std;
class Student
{
private:
    string name;
    int rollnum;
    static int count;
public:
   
    Student(){
        cout<<"an instance is created"<<endl;
        count++;
        cout<<"instance:"<<count<<endl;
    }
    ~Student(){
        cout<<"an instance is deleted"<<endl;
        count--;
        cout<<"instance:"<<count<<endl;
    }
};
int Student :: count=0;

int main(){
    Student s1,s2;
    {
        Student s3;
    }
    
    return 0;

}
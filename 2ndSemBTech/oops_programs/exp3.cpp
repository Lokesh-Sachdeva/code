//create a class student which have data member  as name, branch, roll no, age,gender, marks of 5 subjects
//Display the name of students and his percentage who has more than 70%, use array of OBJECTS
//input 3 students
#include <iostream>
#include <cmath>
using namespace std;

class student{
    public:
    string name,branch,gender;
    int age,rn;
    int marks[5];
    float perc;
    void input(){
        cout<<"\nEnter the name of the student: ";cin>>name;
        cout<<"\nEnter branch: ";cin>>branch;
        cout<<"\nEnter gender: ";cin>>gender;
        cout<<"\nEnter age: ";cin>>age;
        cout<<"\nEnter roll no.: ";cin>>rn;
        cout<<"\nEnter marks of the 5 subjects: ";
        float t=0;
        for(int i=0;i<5;i++){
            cin>>marks[i];cout<<" ";
            t+=marks[i];
        }
        perc=t/5;
    }

    void out(){
        cout<<"\nName: "<<name;
        cout<<"\nBranch: "<<branch;
        cout<<"\nGender: "<<gender;
        cout<<"\nAge: "<<age;
        cout<<"\nRoll No.: "<<rn;
        cout<<"\nMarks in 5 subjects: ";
        for(int i=0;i<5;i++){
            cout<<marks[i]<<", ";
        }
        cout<<"\nPercentage: "<<perc;
    }
};

int main(){
    student arr[3];// array of 3 students

    for(int i=0;i<3;i++){
        cout<<"STUDENT "<<(i+1);
        arr[i].input();
    }
    
    cout<<"\nDetails of the student having more than 70%";
    
    for(int i=0;i<3;i++){
        if (arr[i].perc>70){
            arr[i].out();
            cout<<"\n";
        }
        
    }

}
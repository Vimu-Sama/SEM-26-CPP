#include<bits/stdc++.h>
using namespace std ;

class Student{
    public:
        long registrationId ;
        string name ;
        float cgpa ;

        void PrintStudentData(){
            cout<<registrationId<<" "<<name<<" "<<cgpa ;
        }
};

int main(){
    Student s[5];

    for(int i=0;i<5;i++){
        cin>>s[i].registrationId ;
        cin>>s[i].name ;
        cin>>s[i].cgpa ;
    }

    for(int i=0;i<5;i++){
        cout<<"\nRegId-> "<<s[i].registrationId ;
        cout<<"\nName-> "<<s[i].name;
        cout<<"\nCgpa-> "<<s[i].cgpa ;
    }

    return 0;
}







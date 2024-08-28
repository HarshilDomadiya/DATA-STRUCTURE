#include <iostream>
using namespace std;
class Book{
    public:
    string title[5];
    string author[5];
    int number[5];
    bool status[5];
void status(){ 
    for(int i=0;i<5;i++){
        bool status[5]={true,true,true,true,true};
    }
    }
};
class Member:virtual public Book{
    public:
    int MemberID[5];
    string name[5];
    int list[5];
    void add(int i){
        if(status[i]==true){
            list[i]++;//error
            status[i]=false;
        }
    }
};
class Library{
    string title[5]={"DMGT","COA","DS with c++","ICE","PYTHON"};
    string name[5]={"A","B","C","D","E"};
};

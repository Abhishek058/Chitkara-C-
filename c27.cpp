class student
{
    public:
    int  rollno;
    string name;
    void getRN(){
        cin>>rollno;
        cin>>name;
    }
    void dispRN(){
        cout<<rollno<<endl<<name;
    }
};

class marks:public student{
    public:
    int marks1, marks2, marks3;
    void getM(){
        cin>>marks1;
        cin>>marks2;
        cin>>marks3;
    }
    void dispM(){
        cout<<marks1<<endl;
        cout<<marks2<<endl;
        cout<<marks3<<endl;
    }
};

class result: public student, public marks{
    public:
    void getdata(){
        getRN();
        getM
    }
    void displayData(){
        dispRN();
        dispM();
    }
};
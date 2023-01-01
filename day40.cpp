#include <iostream>
using namespace std;
class rollnumber{
    int rollno;
    public:
      void setdata(int a);
      void getdata();
};
void rollnumber :: setdata(int a){
    rollno= a;
}
void rollnumber :: getdata(){
    cout<<"the roll number of student is: "<<rollno<<endl;
}
class exam: public rollnumber{
       protected:
        float maths;
        float physics;
        public:
          void setmarks(float, float);
          void showmarks();
};
void exam::setmarks(float a, float b){
    maths=a;
    physics=b;
}
void exam::showmarks(){
    cout<<"the marks in maths are:"<<maths<<endl;
    cout<<"the marks in physics are:"<<physics<<endl;
}
class result:public exam{
    public: 
      float percentage(){
         return ((maths+physics)/2);
      }
};
int main() {
    result devesh;
    devesh.setdata(13);
    devesh.setmarks(99.04,99.5);
    devesh.getdata();
    devesh.showmarks();
    cout<<devesh.percentage();
    return 0;
}
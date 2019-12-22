#include <iostream>
#include <stdexcept>

using namespace std;

class WorkingStudent:public Student :public Employee {
private:
    bool same_institue=true;
public:
        WorkingStudent();
        WorkingStudent(bool same_institue);
        ~WorkingStudent();
};
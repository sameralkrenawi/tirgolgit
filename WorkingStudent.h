class WorkingStudent:public Student:public Employee {
private:
    string name;
    long id;
    int age;
    //default constructor

    WorkingStudent:Person(string pname, long id, int page)
    {
        this.id = id;
        if (pname.length < 10)
            name = pname;
        else {
            throw std::invalid_argument("Invalid length of name");
        }
        if (age >= 0 && age < 120) {
            age = page;
        }
        else {
            throw std::invalid_argument("Invalid Age");
        }
    }
};
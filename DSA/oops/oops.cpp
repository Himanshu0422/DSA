class Student
{
    int age;

public:
    char *name;

    Student(int age, char *name)
    {
        this->age = age;

        // Shallow copy
        // this.name = name;

        // Deep Copy
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    Student(Student const &s)
    {
        this->age = s.age;

        this->name = new char[strlen(name) + 1];
        strcpy(this->name, s.name);
    }

    void display()
    {
        cout << name << " " << age << endl;
    }
};


class Student1{
    public:

    int age;
    const int rollNumber;
    int &x;  // reference vaiable for age

    Student1(int r, int age) : rollNumber(r), age(age), x(this->age){

    }
};
class Student
{
private:
    int age;

public:
    int rollNumber;

    // Deafult
    Student()
    {
        cout << "Constructer called!" << endl;
    }
    // Parameterized constructor
    Student(int r)
    {
        cout << "Constructor 2 called!" << endl;
        rollNumber = r;
    }

    Student(int rollNumber, int age)
    {
        this->rollNumber = rollNumber;
        this->age = age;
    }

    void display()
    {
        cout << rollNumber << " " << age << endl;
    }

    int getAge()
    {
        return age;
    }

    void setAge(int a)
    {
        age = a;
    }
};
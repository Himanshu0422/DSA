class Student
{
private:
    static int totalStudents;

public:
    int rollNumber;
    int age;

    Student()
    {
        totalStudents++;
    }

    int getRollNumber()
    {
        return rollNumber;
    }

    static int getTotalStudent()
    {
        return totalStudents;
    }
};

int Student ::totalStudents = 0; // initialize static data members



// Static functions don't have this keyword
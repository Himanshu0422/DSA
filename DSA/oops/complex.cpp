class ComplexNumbers
{

private:
    int r;
    int i;

public:
    ComplexNumbers(int r, int i)
    {
        this->r = r;
        this->i = i;
    }

    void print()
    {
        if (i < 0)
        {
            cout << r
                 << " - i" << (-i) << endl;
        }
        else
        {
            cout << r << " + i" << (i) << endl;
        }
    }

    void plus(ComplexNumbers const &c2)
    {
        r = r + c2.r;
        i = i + c2.i;
    }

    void multiply(ComplexNumbers const &c2)
    {
        r = r * c2.r - i * c2.i;
        i = r * c2.i + i * c2.r;
    }
};
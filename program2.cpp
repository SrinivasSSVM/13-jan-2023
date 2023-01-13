#include<iostream>
using namespace std;
class Programming {
public:
    Programming(string language = "")
    {
        if (language.empty())
        {
            cout << "I love programming languages" <<endl;
        }
        else
        {
            cout << "I love " << language << endl;
        }
    }
};

int main()
{
	int p
Programming p("C++");
Programming p;
}

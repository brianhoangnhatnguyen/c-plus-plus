//Concatenation Method

/*#include <iostream>
#include <string>
using namespace std;
int main()
{
    string firstName="Brian";
    string lastName="Nguyen";
    string fullName=firstName+" "+lastName;
    cout<<fullName;
    return 0;
}*/

//Append Method
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string firstName="Brian ";
    string lastName="Nguyen";
    string fullName=firstName.append(lastName);
    cout<<fullName;
    return 0;
}
/*#include <iostream>
#include <string>
void countryFunction(std::string country="America") {
    std::cout<<country<<"\n";
}

int main()
{
    countryFunction("Sweden");
    countryFunction("Finland");
    countryFunction("Norway");
    countryFunction();
    return 0;
}*/

/*#include <iostream>
void studentHeight(double defaultHeight=5) {
    std::cout<<defaultHeight<<"\n";
}

int main()
{
    studentHeight();
    studentHeight(5.3);
    studentHeight(5.7);
    studentHeight(5.85);
    studentHeight(6);
    return 0;
}*/

/*#include <iostream>
#include <string>
void multipleParameters(std::string name, std::string color) {
    std::cout<<name<<" favorite color is "<<color;
}

int main()
{
    multipleParameters("Brian's","blue.");
    return 0;
}*/

/*#include <iostream>
#include <string>
int adding(int num1, int num2) {
    return num1+num2;
}

int main()
{
    int variableadd=adding(78,3);
    int variableadd2=adding(23,54);
    std::cout<<variableadd+variableadd2;
    return 0;
}*/

#include <iostream>
int sum(int k) {
    if(k>0) {
        return k+sum(k-1);
    }
    else {
        return 0;
    }
}

int main()
{
    int results=sum(10);
    std::cout<<results;
    return 0;
}

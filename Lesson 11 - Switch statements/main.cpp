//Switch statements

/*#include <iostream>
int main()
{
    int weekdays=6;
    switch(weekdays)
    {
        case 1:
        std::cout<<"Monday";
        break;
        case 2:
        std::cout<<"Tuesday";
        break;
        case 3:
        std::cout<<"Wednesday";
        break;
        case 4:
        std::cout<<"Thursday";
        break;
        case 5:
        std::cout<<"Friday";
        break;
        default:
        std::cout<<"THE WEEKENDS!!!!!!!"; //break is different from default. that means no need to add "break;" at the end of default.
    }
    return 0;
}*/

/*#include <iostream>
int main()
{
    int senses=1;
    switch(senses)
    {
        case 1:
        std::cout<<"Sight";
        break;
        case 2:
        std::cout<<"Touch";
        break;
        case 3:
        std::cout<<"Smell";
        break;
        case 4:
        std::cout<<"Hearing";
        break;
        case 5:
        std::cout<<"Taste";
        break;
        default:
        std::cout<<"Open your third eye. Be an omniscient god of the universe and the creator of life.";
    }
    return 0;
}*/

//OMG LOOOOOOOOOOOOOOOOOOOOOOOPS

/*#include <iostream>
int main()
{
    int i=-1;
    while(i<0) {
        std::cout<<i<<"\n";
        i--;
    }
    return 0;
}*/

/*#include <iostream>
int main()
{
    int i=0;
    while(i<96) {
        std::cout<<i<<"\n";
        i++;
    }
    return 0;
}*/

/*#include <iostream>
int main()
{
    int i=1;
    while(i<6) {
        std::cout<<"48656C6C6F20776F726C6421"<<"\n";
        i++;
    }
    return 0;
}*/


/*#include <iostream>
int main()
{
    int i=1;
    do {
        std::cout<<i<<"\n";
        i++;
    }
    while(i<99999);
    return 0;
}*/

#include <iostream>
int main()
{
    int sum;
    int num;
    std::cout<<"Input a number below:"<<"\n";
    std::cin>>num;
    while(num>=0)
    {
        sum+=num;
        std::cout<<"Input another number below:"<<"\n";
        std::cin>>num;
    }
    std::cout<<"Your sum is: "<<sum;
    return 0;
}

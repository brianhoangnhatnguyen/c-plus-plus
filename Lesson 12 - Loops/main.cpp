/*#include <iostream>
int main()
{
    double quotient=2;
    double number;
    do{
        std::cout<<"Enter a number: ";
        std::cin>>number;
        quotient/=number;
    }
    while(number!=1);
    std::cout<<"Your quotient is: "<<quotient;
    return 0;
}*/

/*#include <iostream>
int main()
{
    int i=0;
    do{
        std::cout<<i<<"\n";
        i++;
    }
    while(i<45);
    return 0;
}*/

/*#include <iostream>
int main()
{
    for(int i=0; i<5; i++)
    {
        std::cout<<i<<"\n";
    }
    return 0;
}*/

#include <iostream>
int main()
{
    int num;
    int sum;
    for(int num=1; num<=10; num++)
    {
        std::cout<<num<<"\n";
        sum=sum+num;
    }
    std::cout<<"Your sum is: "<<sum;
    return 0;
}



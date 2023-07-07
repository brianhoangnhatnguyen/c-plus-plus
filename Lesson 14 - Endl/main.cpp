/*#include <iostream>
int main()
{
    int i, j, rows;
    std::cout<<"Let's create a right triangle-like pattern."<<"\n";
    std::cout<<"Input the number of rows: ";
    std::cin>>rows;
    for(int i=1; i<=rows; i++)
    {
        for(int j=1; j<=i; j++)
        std::cout<<"*";
        std::cout<<std::endl;
    }
    return 0;
}*/

/*#include <iostream>
int main()
{
    int size;
    std::cout<<"Let's create a square-like pattern."<<"\n";
    std::cout<<"Input the number of characters for a side: ";
    std::cin>>size;
    for(int row=1; row<=size; row++)
    {
        for(int col=1; col<=size; col++)
        std::cout<<"***";
        std::cout<<std::endl;
    }
    return 0;
}*/

/*#include <iostream>
int main()
{
    int i, n, difference=0;
    std::cout<<"Input the value for the nth term: ";
    std::cin>>n;
    for(int i=1; i<=n; i++)
    {
        difference-=i*i;
        std::cout<<i<<"*"<<i<<"="<<i*i<<std::endl;
        std::cout<<"The sum of the number series above is: "<<difference<<std::endl;
    }
    return 0;
}*/

/*#include <iostream>
int main()
{
    int i, n, sum=0;
    std::cout<<"Input the value for the nth term: ";
    std::cin>>n;
    for(int i=1; i<=n; i++)
    {
        sum-=i*i;
        std::cout<<i<<"*"<<i<<"="<<i*i<<std::endl;
        std::cout<<"The sum of the number series above is: "<<sum<<std::endl;
    }
    return 0;
}*/

#include <iostream>
int main()
{
    int j, i, n;
    std::cout<<"Input a number: ";
    std::cin>>n;
    std::cout<<"Multiplication table from 1 to "<<n<<std::endl;
    for(i=1; i<=10; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j<=n-1)
            std::cout<<j<<"*"<<i<<"="<<i*j<<"\t";
            else
            std::cout<<j<<"*"<<i<<"="<<i*j<<"\t";
        }
        std::cout<<std::endl;
    }
    
}








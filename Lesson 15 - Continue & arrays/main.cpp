//Continue

/*#include <iostream>
int main()
{
    for(int i=0; i<=100; i=i+2)
    {
        if(i==60)
        {
            continue; //continues with the number after the number in the if condition. in this case, 60 is the number so the continue will skip that number and continue with the number after it.
        } //example: 59, 61, 62, and so on. it skipped 60.
        std::cout<<i<<"\n";
    }
    return 0;
}*/

//Arrays

/*#include <iostream>
#include <string>
int main()
{
    std::string programmingLanguage[4]={"Python", "HTML, CSS, JS", "C++", "Lua"};
    for(int i=0; i<=3; i++)
    {
        std::cout<<programmingLanguage[i]<<"\n";
    }
    return 0;
}*/

/*#include <iostream>
#include <string>
int main()
{
    std::string programmingLanguage[4]={"Python", "HTML, CSS, JS", "C++", "Lua"};
    for(int i=0; i<=3; i++)
    {
        std::cout<<i<<" "<<programmingLanguage[i]<<"\n";
    }
    return 0;
}*/

/*#include <iostream>
#include <string>
int main()
{
    int integers[40]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
    for(int i=0; i<=39; i++)
    {
        std::cout<<i<<". "<<integers[i]<<"\n";
    }
    return 0;
}*/

/*#include <iostream>
#include <string>
int main()
{
    std::string sellPoopTycoon[11]={"America","Switzerland","Canada","Mexico","Germany","Lebanon","Vietnam","Pakistan","Egypt","India","SELL POOP TYCOON! By Badass Experiences Ages 9+ Played  12 minutes"};
    for(int i=0; i<=11; i++)
    {
        sellPoopTycoon[10]="RO-BOTS [BETA] [FACTORY] By @FireKi99 Ages 13+ Played  28 minutes";
        std::cout<<i<<". "<<sellPoopTycoon[i]<<"\n";
    }
    return 0;
}*/

/*#include <iostream>
int main()
{
    int integers[40]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
    std::cout<<sizeof(integers);
    return 0;
}*/

/*#include <iostream>
#include <string>
int main()
{
    std::string test[1000]={"a", "aa", "aaa","a", "aa", "aaa","a", "aa", "aaa","a", "aa", "aaa","a", "aa", "aaa","a", "aa", "aaa","a", "aa", "aaa"};
    std::cout<<sizeof(test);
    return 0;
}*/

#include <iostream>
int main()
{
    int theNumbers[9]={11,22,33,44,55,66,77,88,99};
    int getArrayLength=sizeof(theNumbers) / sizeof(int);
    std::cout<<getArrayLength; 
    return 0;
}





/*#include <iostream>
#include <string>
int main()
{
    struct {
        int number;
        std::string hello;
        char alphabetLetterNine;
    } myFirstStructure;
    
    myFirstStructure.number=7;
    myFirstStructure.hello="Hello World!";
    myFirstStructure.alphabetLetterNine='I';
    
    std::cout<<myFirstStructure.number<<"\n"<<myFirstStructure.hello<<"\n";
    std::cout<<myFirstStructure.alphabetLetterNine;
    return 0;
}*/

/*#include <iostream>
#include <string>
int main()
{
    struct {
        std::string textAfterInput;
        std::string input;
    } structureCinInput;
    structureCinInput.textAfterInput="You have entered in the text: ";
    structureCinInput.input;
    
    std::cout<<"Enter something below."<<"\n";
    getline(std::cin,structureCinInput.input);
    std::cout<<structureCinInput.textAfterInput<<structureCinInput.input;
    return 0;
}*/

/*#include <iostream>
#include <string>
int main()
{
    struct {
        std::string gameName;
        int releaseDate;
    } game1, game2, game3, game4;
    
    game1.gameName="Roblox";
    game1.releaseDate=2006;
    game2.gameName="Minecraft";
    game2.releaseDate=2011;
    game3.gameName="Call of Duty: Black Ops II";
    game3.releaseDate=2012;
    game4.gameName="Super Mario 64";
    game4.releaseDate=1996;
    
    std::cout<<"Here are some games and their release dates."<<"\n""\n";
    std::cout<<game1.gameName<<": "<<game1.releaseDate<<"\n";
    std::cout<<game2.gameName<<": "<<game2.releaseDate<<"\n";
    std::cout<<game3.gameName<<": "<<game3.releaseDate<<"\n";
    std::cout<<game4.gameName<<": "<<game4.releaseDate;
    return 0;
}*/

#include <iostream>
#include <string>
int main()
{
    std::string vietnamGreeting="Xin Chào";
    std::string &greeting=vietnamGreeting;
    
    std::cout<<greeting<<"\n";
    std::cout<<vietnamGreeting;
    return 0;
}




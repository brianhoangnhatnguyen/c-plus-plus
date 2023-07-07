/*#include <iostream>
int main()          
{
    int numbers[2][4]={
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };
    std::cout<<numbers[1][3];
    return 0;
}*/

/*#include <iostream>
int main()
{
    std::string letters[2][4]={
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };
    letters[0][0]="Z";
    letters[0][3]="M";
    std::cout<<letters[0][0]<<"\n"<<letters[0][3];
    return 0;
}*/

/*#include <iostream>
int main()
{
    std::string letters[3][4]={
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"},
        {"I", "J", "K", "L"}
    };
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++)
            std::cout<<letters[i][j]<<"\n";
    }
    return 0;
}*/

#include <iostream>
int main()
{
    std::string letters[4][2][2]={
        {
            {"A", "B"},
            {"C", "D"}
        },
        {
            {"E", "F"},
            {"G", "H"}
        },
        {
            {"I", "J"},
            {"K", "L"}
        },
        {
            {"M", "N"},
            {"O", "P"}
        }
    };
    for(int i=0; i<4; i++){
        for(int j=0; j<2; j++){
            for(int d=0; d<2; d++){
                for(int g=0; g<2; g++)
                std::cout<<letters[i][j][d][g]<<"\n";
            }
        }
    }
    return 0;
}



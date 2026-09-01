#include <iostream>
#include <string>
#include <cstring> 

int main(int args, char* arg[]){
    if (args > 1)
    {
        for (int i = 1; i < args; i++)
        {
            if (strcmp(arg[i],"v") == 0)
            {
                std::cout << "intDev"<< std::endl;
            }
            else if (strcmp(arg[i],"c") == 0)
            {
                std::cout << "intDev"<< std::endl;
            }
            
        }
               
    }
    

    return 0;
}
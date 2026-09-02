#include <stdio.h>
#include <string.h>

int main(int args, char* arg[]){
    if (args == 3)
    {
        if (strcmp(arg[1],"build") == 0)
        {
            FILE *file = fopen(arg[2], "r");
            if (file == NULL)
            {
                printf("Error\n");
                return 1;
            }
            char cmd[100], argw[100];
            if (fscanf(file,"%99s %99s",cmd,argw) == 2)
            {
                if (strcmp(cmd,"#cpush") == 0)
                {
                    /* 
                    inDev
                    */
                }
            }
            else{
                printf("Error\n");
            }
        }
        else if (strcmp(arg[1],"help") == 0 && strcmp(arg[2],"arg") == 0)
        {
            printf("------help(-1-)------\n");
            printf("calmarus build <file_name> - building to other lang\n");
            printf("calmarus help arg - help message args\n");
        }
        
           
    }
    

    return 0;
}
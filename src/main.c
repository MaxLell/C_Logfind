#include <stdio.h>

#define OK 0
#define ERROR -1

int main(int argc, char *argv[])
{
    // Parse the Search Term from the input Argument
    if (NULL == argv[1])
    {
        printf("%s\n", "At least one Search Term needs to be provided");
        return ERROR;
    }

    // Get a list of the log files which are here in the folder

    // Loop through the files

    //   Loop through the lines 

    //     Find Strings that match the current Search term in the line

    //     When a match is found 

    //       when the current file name was not displayed yet

    //       print out the current file name

    //     else print out the current line Number and a comma


    return OK;
}

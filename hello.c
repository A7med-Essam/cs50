
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // get name from user
    string name = get_string("what is your name?\n");
    
    // print hello, + user name
    printf("hello, %s \n", name);
}
#include <stdio.h>

int main(){
    enum colour{
        red = 1, green, blue 
    };

    enum colour favouritecolour;

    printf("1-red, 2-green, 3-blue\n");
    printf("please choose your favourite colour: ");
    scanf("%u", &favouritecolour);

    switch(favouritecolour)
    {
    case red:
        printf("your favourite colour is red");
        break;

    case green:
        printf("your favourite colour is green");
        break;
    
    case blue:
        printf("your favourite colour is blue");
        break;

    default:
        printf("invalid choice");
    }
    return 0;
}
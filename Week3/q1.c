#include <stdio.h>
enum day
{
    Mon=1,Tue,Wed,Thu,Fri,Sat,Sun
};

int main(){
    enum day week;
    week = Fri;
    printf("%d\n", week);
    return 0;
}
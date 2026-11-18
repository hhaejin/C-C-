#include <stdio.h>

struct Data{
    char name[101];
    char tel[101];
    char addr[101];
};
int main(){
    struct Data p;

    scanf("%s",p.name);
    scanf("%s",p.tel);
    scanf("%s",p.addr);

    printf("name : %s\n",p.name);
    printf("tel : %s\n",p.tel);
    printf("addr : %s",p.addr);

    return 0;
}
#include <string.h>

int main(){
    char ucheniki[4][3][10] = {{"Vika","woman","troechnik"}, {"Ksyusha","woman","otlichnik"}, {"Oleg","man","horoshist"},{"Dima","man","troechnik"}};
    for(int i = 0; i < 4; i++){
        if((!strcmp(ucheniki[i][1],"man"))&&((!strcmp(ucheniki[i][2],"horoshist"))||(!strcmp(ucheniki[i][2],"otlichnik"))))
            printf("%s",ucheniki[i][0]);
    }
    return 0;
}

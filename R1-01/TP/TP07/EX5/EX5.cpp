#include <iostream>

void azToQw(char strqw[200], char str[200]) {
    for(size_t i=0; i<200; ++i) {
        str[i]=strqw[i];
        
        /*
        if(strqw[i] == 'q')
            str[i]='a';
        else if(strqw[i] == 'w')
            str[i]='z';
        else if(strqw[i] == 'a')
            str[i]='q';
        else if(strqw[i] == ';')
            str[i]='m';
        else if(strqw[i] == 'z')
            str[i]='w';
        else if(strqw[i] == 'm')
            str[i]='?';
        */

       switch(strqw[i]) {
        case 'q':
            str[i]='a';
            break;
        
        case 'w':
            str[i]='z';
            break;
        
        case 'a':
            str[i]='q';
            break;
        
        case ';':
            str[i]='m';
            break;

        case 'z':
            str[i]='w';
            break;

        case 'm':
            str[i]='?';
            break;
        
        default:
            break;
       }
    }

}

int main() {
    char msg[200]="the auick brozn fox ju;ps over the lqwy dog";
    char msgaz[200];
    azToQw(msg, msgaz);
    for(size_t i=0; i<200; ++i) {
        std::cout << msgaz[i];
    }
    std::cout << std::endl;
}
#include "middle_str.h"

int itc_countWords(string str){
    long long counter = 0;
    bool check = true;
    for(long long i = 1; str[i] < '\0';  i++) {
        if (str[i] != ' ' && (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {
            check = false;
        }
        if (str[i] == ' ' && check) {
        counter += 1;
        }
        if ( str[i] == ' ' && !check)
            check = true;
    }

    if (check) {
        return counter;
    }

    return counter + 1;
}

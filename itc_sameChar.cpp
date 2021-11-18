#include "middle_str.h"

char itc_sameChar(string str){
    for ( long long i = 0; str[i] != '\0'; i++){
        if (( str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
            for ( long long j = 0; str[j] != '\0'; j++){
                if ( str[j] == str[i]){
                    return str[j];
                }
            }
        }
    }
    return '0';
}

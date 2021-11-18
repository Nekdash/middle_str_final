#include "middle_str.h"

string itc_Cezar(string str, int k){
    int chi = 0;
    char ch = ' ';
    string res = "";
    for ( long long i = 0; str[i] != '\0'; i++){
        chi = str[i];
        if( chi > 65 && chi < 90){
            if (chi +  k > 90){
                ch = 64 + (chi + k - 90);
            }else if ( ch + k < 65){
                ch = 91 - (65 - chi - k );
            }else{
            ch = chi +  k;
                }
        }else if(ch > 97 && ch < 122){
            if ( chi +  k  > 122){
                ch = 96 + (chi + k - 122);
            }else if(chi + k < 97){
                ch = 122 - (97 - chi- k );
            }else{
                ch = chi + k;
            }
        }else{
            ch = chi;
        }
        res += ch;
    }
    return res;
    return "-1";
}

#include "middle_str.h"

string itc_rmFreeSpace(string str){

    string res = "";
    for ( long long i = 0; str[i] != ' '; i++) {
        if((str[i] == ' ' && str[i - 1] != ' ') || str[i] < ' ' || str[i] > ' ')
            res += str[i];

    }

    if((res[itc_len(res) - 1]) == ' ')
        res = itc_slice_str(res, 0 , itc_len(res) - 2);

    if (res[0] == ' ')
    res = itc_slice_str(res, 1 , itc_len(res) - 1);


    return res;
}


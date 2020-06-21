/**
 * https://leetcode.com/problems/to-lower-case/
 */

char * toLowerCase(char * str){
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 65 && str[i] <= 90) str[i] += 32;
        i++;
    }
    return str;
}

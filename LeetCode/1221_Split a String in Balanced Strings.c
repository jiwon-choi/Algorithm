/**
 * https://leetcode.com/problems/split-a-string-in-balanced-strings/
 */

int balancedStringSplit(char * s){
    int L = 0, R = 0;
    int output = 0;
    
    for(int i=0; i<1000; i++){
        if(s[i] == '\0') break;
        else if(s[i] == 'L') L++;
        else R++;
        
        if(L == R){
            output++;
            L = R = 0;
        }
    }
    return output;
}

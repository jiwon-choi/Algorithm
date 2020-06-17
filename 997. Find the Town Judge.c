/**
 * https://leetcode.com/problems/find-the-town-judge/
 */

int findJudge(int N, int** trust, int trustSize, int* trustColSize){
    
    int **arr = (int **)malloc(sizeof(int *)*(N+1));
    for(int i=1; i<=N; i++)
        arr[i] = (int *)malloc(sizeof(int)*2);
    // arr[i][0] == inDegree, arr[i][1] == outDegree
    
    for(int i=1; i<=N; i++)
        for(int j=0; j<2; j++)
            arr[i][j] = 0;
        
    for(int i=0; i<trustSize; i++){
        arr[trust[i][0]][1]++;
        arr[trust[i][1]][0]++;
    }
    
    for(int i=1; i<=N; i++){
        if((arr[i][0] == N-1) && (arr[i][1] == 0)) return i;
    }
    return -1;
}
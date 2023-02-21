#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int answer = 0;
char visit[17][1 <<  17] = {0,}, adj[17][17] = {0,};

void dfs(int node, int status, int sheep, int wolf, int info[], int info_len)
{
    visit[node][status] = 1;
    answer = answer < sheep ? sheep : answer;

    for(int i = 0; i < info_len; i++)
    {
        int newsheep, newwolf;
        if(adj[node][i] && !visit[i][status | (1 << i)])
        {
            newsheep = sheep + (!info[i] && !(status & (1 << i)));
            newwolf = wolf + (info[i] && !(status & (1 << i)));
            if(newsheep > newwolf)
                dfs(i, status|(1 << i), newsheep, newwolf, info, info_len);
        }
    }
}

int solution(int info[], size_t info_len, int** edges, size_t edges_rows, size_t edges_cols)
{
    for(int i = 0; i < edges_rows; i++)
        adj[edges[i][0]][edges[i][1]] = adj[edges[i][1]][edges[i][0]] = 1;

    dfs(0,1,1,0,info,info_len);
    return answer;
}
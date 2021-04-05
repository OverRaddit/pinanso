#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int g_graph[4][4]={0};
int g_trans_graph[4][4]={0};
int g_input[16];
int g_visited[8][5]={0};

int validate(int arr[4], int a, int b)
{
    int i;
    int max;
    printf("(validate)>>%d,%d\n",a,b);
    max = -1;
    i = -1;
    while(++i < 4)
    {
        if(max < arr[i])
        {
            max = arr[i];
            a--;
        }
    }
    i = 4;
    max = -1;
    while(--i >= 0)
        if(max < arr[i])
        {
            max = arr[i];
            b--;
        }
    printf(">a:%d b:%d\n",a,b);
    if(a == 0 && b == 0)
        return 1;
    else
        return -1;
}
// 16 array fill
void fill(int depth)
{
    int i;
    int n;
    n = depth / 4;
    // 4번마다 한번씩 검사를 한다. 맨처음만 제외
    printf(">depth :%d\n",depth);
    if(depth != 0 && depth % 4 == 0)
    {
        // (depth/4)행에 대한 체크를 한다.
        printf("%d %d %d %d\n",g_graph[n-1][0],g_graph[n-1][1],g_graph[n-1][2],g_graph[n-1][3]);
        if(validate(g_graph[n-1], g_input[n-1 + 8], g_input[n-1 + 12]) == -1){
            printf("error occur\n");
            return;
        }
    }
    // 종료조건
    if(depth == 16){
        printf("print.\n");
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++)
                printf("%d, ", g_graph[i][j]);
        printf("\n");
        }
        exit(1);
    }
    i = 1;
    while(i <= 4)
    {
        // 조건1 행,열에 중복x
        // 조건2 빈칸에만 숫자를 넣어야함.
        printf("========================\n");
        printf(">depth :%d, number to add : %d\n",depth, i);
        if(g_visited[depth/4][i] == 0 && g_visited[depth%4 + 4][i] == 0)
        {
            g_graph[depth/4][depth%4] = i;
            g_trans_graph[depth%4][depth/4] = i;
            g_visited[depth/4][i] = 1;
            g_visited[depth%4 + 4][i] = 1;
            fill(depth + 1);
            //g_graph[depth/4][depth%4] = 0;
            g_trans_graph[depth%4][depth/4] = 0;
            g_visited[depth/4][i] = 0;
            g_visited[depth%4 + 4][i] = 0;
        }
        i++;
    }
}
void get_input(char *str)
{
    int i;
    i = 0;
    while(*str != '\0')
    {
        if(str[0] >= '0' && str[0] <= '9')
        {
            printf("g_input[%d] = %d\n",i,str[0]-'0');
            g_input[i++] = str[0] - '0';
        }
        str++;
    }
}
int main(int argc, char* argv[]){
    int i;
    int j;
    if(argc != 2)
    {
        write(1, "Error\n", 6);
        return 0;
    }
    get_input(argv[1]);
    fill(0);
    return 0;
}
#include <stdio.h>

#define NV 5    // number of vertices

//--------- vertex 방문 여부를 저장하는 배열
// visited[k] = 1이면, vertex k는 DFS를 하면서 방문하였음.
int visited[NV] = { 0 };

//---------stack for DFS-----------
int stack[NV];
int top = -1;

void push(int v) {
    if (top == NV - 1) {
        return;
    }

    top++;
    stack[top] = v;
}

int pop() {
    if (top == -1) {
        return -999;
    }

    int res = stack[top];
    top--;
    return res;
}

/*
    vertex v가 이미 stack에 들어 있으면,
    return 1,
    otherwise return 0
*/
int inStack(int v) {

    for (int i = 0; i <= top; i++) {
        if (stack[i] == v) {
            return 1;
        }
    }
    return 0;
}

// vertix v1과 v2 사이에 edge가 있다
void addEdge(int graph[][NV], int v1, int v2) {

    graph[v1][v2] = 1;
    graph[v2][v1] = 1;
}

void processAdjacentVertices(int graph[][NV], int v) {

    for (int i = 0; i < NV; i++) {
        if (graph[v][i] == 1) { // 직접 연결되어 있으면... vertex i
            if (visited[i] == 0 && inStack(i) == 0) {
                push(i);
            }
        }
    }
}

/*
    0. startVertex를 push

    1. pop --> v
    2. vertex v를 방문했다고 표시하고 출력, visited[v] = 1
    3. vertex와 연결된 (direct) vertices를 찾아서
        3.1 not visited
        3.2 not in stack ==> push
    4. stack에 뭔가 있으면, 1번으로...
*/
void DepthFirstSearch(int graph[][NV], int startVertex) {

    push(startVertex);
    while (1) {

        int v = pop();
        if (v == -999) {
            return;
        }

        printf("Vertex %d 방문\n", v);
        visited[v] = 1;
        processAdjacentVertices(graph, v);    // 3번
    }

}


int main() {

    int graph[NV][NV] = { 0 };

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    DepthFirstSearch(graph, 0);
}
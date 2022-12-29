#include <stdio.h>

#define NV 5    // number of vertices

//--------- vertex �湮 ���θ� �����ϴ� �迭
// visited[k] = 1�̸�, vertex k�� DFS�� �ϸ鼭 �湮�Ͽ���.
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
    vertex v�� �̹� stack�� ��� ������,
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

// vertix v1�� v2 ���̿� edge�� �ִ�
void addEdge(int graph[][NV], int v1, int v2) {

    graph[v1][v2] = 1;
    graph[v2][v1] = 1;
}

void processAdjacentVertices(int graph[][NV], int v) {

    for (int i = 0; i < NV; i++) {
        if (graph[v][i] == 1) { // ���� ����Ǿ� ������... vertex i
            if (visited[i] == 0 && inStack(i) == 0) {
                push(i);
            }
        }
    }
}

/*
    0. startVertex�� push

    1. pop --> v
    2. vertex v�� �湮�ߴٰ� ǥ���ϰ� ���, visited[v] = 1
    3. vertex�� ����� (direct) vertices�� ã�Ƽ�
        3.1 not visited
        3.2 not in stack ==> push
    4. stack�� ���� ������, 1������...
*/
void DepthFirstSearch(int graph[][NV], int startVertex) {

    push(startVertex);
    while (1) {

        int v = pop();
        if (v == -999) {
            return;
        }

        printf("Vertex %d �湮\n", v);
        visited[v] = 1;
        processAdjacentVertices(graph, v);    // 3��
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
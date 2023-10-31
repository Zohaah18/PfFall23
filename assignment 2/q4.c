/**
* programmer:Zoha Ahmed
* Desc: question 4, assignment 2
* Date: 31 October,2023
*/

#include <stdio.h>
#include <stdio.h>

#define N 5
#define M 5

char maze[N][M] = {
    {'S', 'O', 'O', 'W', 'W'},
    {'O', 'W', 'O', 'O', 'W'},
    {'O', 'O', 'O', 'W', 'O'},
    {'W', 'W', 'O', 'W', 'O'},
    {'W', 'W', 'O', 'E', 'W'}
};

int crossed[N][M]; // to keep the track of the visited cells

int valid(int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < M && maze[x][y] != 'W' && crossed[x][y] == 0);
}

int find_path(int x, int y) {
    if (maze[x][y] == 'E') {
        crossed[x][y] = 1;
        return 1;
    }

    if (valid(x, y)) {
        crossed[x][y] = 1;

        if (find_path(x, y + 1) || find_path(x + 1, y)) {
            return 1;
        }

        crossed[x][y] = 0; // Backtrack
    }

    return 0;
}

void printPath() {
    int x = 0, y = 0;

    while (maze[x][y] != 'E') {
        printf("%d,%d ", x, y);

        if (x + 1 < N && crossed[x + 1][y]) {
            x++;
        } else {
            y++;
        }
    }

    printf("%d,%d\n", x, y);
}

int main() {
    if (find_path(0, 0)) {
        printf("Path found!\n");
        printf("Output Maze after traversal:\n");
        printPath();
    } else {
        printf("No path found.\n");
    }

    return 0;
}

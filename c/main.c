#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Items { ROCK = 0, PAPER = 1, SCISSORS = 2 };
void emptyLine() { printf("\n"); };
void won() {
  printf("You won!");
  emptyLine();
};

void draw() {
  printf("Its a Draw!");
  emptyLine();
};
void loose() {
  printf("You lost, maybe next time!");
  emptyLine();
};
int checkGame(int player, int pc) { return 1; };
void game() {
  do {
    srand(time(NULL));
    char item;
    int i = rand() % 3;
    enum Items compitem = i;
    printf("Pick [R]ock / [P]aper / [S]cissors\n");
    scanf("%s", &item);
    if (item == 'r' && compitem == ROCK) {
      draw();
      continue;
    }
    if (item == 'r' && compitem == SCISSORS) {
      won();
      continue;
    }
    if (item == 'r' && compitem == PAPER) {
      loose();
      continue;
    }
    if (item == 'p' && compitem == ROCK) {
      won();
      continue;
    }
    if (item == 'p' && compitem == SCISSORS) {
      loose();
      continue;
    }
    if (item == 'p' && compitem == PAPER) {
      draw();
      continue;
    }
    if (item == 's' && compitem == ROCK) {
      loose();
      continue;
    }
    if (item == 's' && compitem == SCISSORS) {
      draw();
      continue;
    }
    if (item == 's' && compitem == PAPER) {
      won();
      continue;
    }
    printf("This is not a valid Option. Please try again.\n");
    emptyLine();
  } while (1);
}

int main() {
  game();
};

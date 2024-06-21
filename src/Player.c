
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "linkedlist.h"
#include "textfilewriter.h"

void read_command(char** cmds);

typedef struct {
    int snum;
    char dept[30];
    char name[30];
} Student;

int main() {
    FILE* temp_file = fopen("temp_music_titles.txt", "w");
    if (temp_file == NULL) {
        printf("Failed to open temp file for writing.\n");
        return 1;
    }
    create_music_titles(temp_file);
    fclose(temp_file);

    char* commands[] = {"add", "Hello", "Enemy", "abc", NULL};
    read_command(commands);

    return 0;
}

void read_command(char** cmds) {
    while (*cmds != NULL) {
        if (strcmp(*cmds, "add") == 0) {
            cmds++;
            while (*cmds != NULL && strcmp(*cmds, "add") != 0) {
                add(*cmds);
                cmds++;
            }
        }
        else if (strcmp(*cmds, "list") == 0) {
            list();
        }
        else if (strcmp(*cmds, "play") == 0) {
            play();
        }
        else if (strcmp(*cmds, "clear") == 0) {
            clear();
        }
        else if (strcmp(*cmds, "quit") == 0) {
            quit();
        }
        else if (strcmp(*cmds, "load") == 0) {
            cmds++;
            if (*cmds != NULL) {
                load(*cmds);
            }
        }
        else if (strcmp(*cmds, "save") == 0) {
            cmds++;
            if (*cmds != NULL) {
                save(*cmds);
            }
        }
        cmds++;
    }
}


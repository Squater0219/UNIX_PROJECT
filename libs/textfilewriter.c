// textfilewriter.h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "linkedlist.h"
#include "textfilewriter.h"

void create_music_titles(FILE* stream){
    fprintf(stream, "3\nHello\nEnemy\nabc\n");
}

void read_file(char* file_name){
    printf("Loading playlist from file: %s\n", file_name);
    load(file_name);

    printf("Loaded Playlist:\n");
    list();

    clear();
}

void write_file(char* file_name){
    add("Hello");
    add("Enemy");
    add("abc");

    FILE* file = fopen(file_name, "w");
    if (!file) {
        printf("Error opening file %s.\n", file_name);
        return;
    }

    printf("Saving playlist to file: %s\n", file_name);
    print_file(file);
    fclose(file);
    clear();
}
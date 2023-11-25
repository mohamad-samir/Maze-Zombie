#include "../headers/header.h"

/**
 * free_grid - free allocated memory of grid
 * @grid: the given grid
 *
 * Return: nothing
 **/
void free_grid(SDL_Point ***grid) {
    if (grid == NULL || *grid == NULL) {
        return; // Check for NULL pointer
    }

    for (int j = 0; j < map_x; j++) {
        free((*grid)[j]);
    }
    free(*grid);
    *grid = NULL; // Set the pointer to NULL after freeing
}

/**
 * free_tokens - free the memory assigned for tokens
 * @tokens: the given tokens
 *
 * Return: Nothing
 **/
void free_tokens(char **tokens) {
    if (tokens == NULL) {
        return; // Check for NULL pointer
    }

    char **tmp = tokens;

    while (*tokens) {
        free(*tokens++);
    }
    free(tmp);
}

/**
 * free_cols - free allocated memory of columns
 * @cols: the given columns
 *
 * Return: nothing
 **/
void free_cols(char ***cols) {
    if (cols == NULL || *cols == NULL) {
        return; // Check for NULL pointer
    }

    for (int i = 0; i < map_x; i++) {
        for (int j = 0; j < map_y; j++) {
            free(cols[i][j]);
        }
        free(cols[i]);
    }
    free(*cols);
    *cols = NULL; // Set the pointer to NULL after freeing
}

/**
 * free_numbers - free the memory assigned for numbers
 * @numbers: the given numbers
 *
 * Return: Nothing
 **/
void free_numbers(int **numbers) {
    if (numbers == NULL || *numbers == NULL) {
        return; // Check for NULL pointer
    }

    for (int i = 0; i < map_x; i++) {
        free(numbers[i]);
    }
    free(*numbers);
    *numbers = NULL; // Set the pointer to NULL after freeing
}

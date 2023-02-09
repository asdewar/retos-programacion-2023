#include <stdio.h>
#include <stdlib.h>

/* Comon line reader for all asdewar solutions. */
// Line struct that represents a Line.
typedef struct {
    char *content;
    int size;
} Line;

// Returns line struct created from line readed from stdin.
Line *get_line_from_user(const char *user_string) {
    // Variables used for line struct.
    char *line = NULL;
    size_t size = 0;
    Line *l = (Line *)malloc(sizeof(Line));
    // Get user input.
    printf("%s", user_string);
    l->size = getline(&line, &size, stdin) - 1;
    line[l->size] =  '\0';
    l->content = line;
    return l;
}

// Print every line struct variable.
void print_line(Line *l) {
    printf("Line content: %s\nLine size: %d\n", l->content, l->size);
}

// Free the line struct passed through argument.
void free_line(Line *l) {
    free(l->content);
    free(l);
}
/* End of comon line reader for all asdewar solutions. */

int main(int argc, char const *argv[])
{
    Line *l = get_line_from_user("Introduce tenis variable: ");

    print_line(l);

    free_line(l);


    return 0;
}

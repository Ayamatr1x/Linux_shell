#ifndef SOURCE_H
#define SOURCE_H

#include <stdio.h>

#define ERRCHAR    -2
#define INIT_SRC_POS (-1)  // assuming -1 means start of buffer

struct source_s {
    char *buffer;
    long bufsize;
    long curpos;
};

char next_char(struct source_s *src);
void unget_char(struct source_s *src);
char peek_char(struct source_s *src);
void skip_white_spaces(struct source_s *src);

#endif // SOURCE_H

#ifndef _TUI_H_
#define _TUI_H_

int get_terminal_width();
int get_terminal_height();

typedef struct SVector2 {
  int x;
  int y;
} Vector2;

typedef struct SLabel {
  // ...
} Label;

#endif

#ifndef _SYS_FRAME_H_
#define _SYS_FRAME_H_

#include "common.h"
//设置光标位置
void SetCurPos(int x, int y);
void HideCursor();
void RecoverCursor();

//框架设置
void DrawRow(int x, int y);  
void DrawCol(int x, int y);
void DrawFrame(const char *title);
void SystemEnd();


#endif /* _SYS_FRAME_H_ */
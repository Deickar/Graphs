#include "ResizeWindowMessage.h"


ResizeWindowMessage::ResizeWindowMessage(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) : WinMessageBase(hwnd, msg, wParam, lParam) {
	this->resizeTypeRequested = wParam;
	this->newHeight = LOWORD(lParam);
	this->newWidth = LOWORD(lParam);
}
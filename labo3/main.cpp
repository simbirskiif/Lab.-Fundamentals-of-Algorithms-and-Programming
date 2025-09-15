#include <windows.h>

HDC hdc;

void l311() {
    Rectangle(hdc, 10, 100, 100, 190);
    MoveToEx(hdc, 10, 100, 0);
    LineTo(hdc, 55, 50);
    LineTo(hdc, 100, 100);
}

void l312() {
    int c = 150;
    HPEN pen = CreatePen(PS_SOLID, 1, RGB(150, 75, 0));
    SelectObject(hdc, pen);
    Rectangle(hdc, c - 10, 300 - 30, c + 10, 300);
    pen = CreatePen(PS_SOLID, 1, RGB(0, 255, 0));
    SelectObject(hdc, pen);
    MoveToEx(hdc, c - 50, 300 - 30, 0);
    LineTo(hdc, c + 50, 300 - 30);
    MoveToEx(hdc, c - 50, 300 - 30, 0);
    LineTo(hdc, c, 300 - 30 - 35);
    MoveToEx(hdc, c, 300 - 30 - 35, 0);
    LineTo(hdc, c + 50, 300 - 30);
    MoveToEx(hdc, c - 40, 300 - 30 - 35, 0);
    LineTo(hdc, c + 40, 300 - 30 - 35);
    MoveToEx(hdc, c - 40, 300 - 30 - 35, 0);
    LineTo(hdc, c, 300 - 30 - 35 - 25);
    MoveToEx(hdc, c, 300 - 30 - 35 - 25, 0);
    LineTo(hdc, c + 40, 300 - 30 - 35);
    MoveToEx(hdc, c - 20, 300 - 30 - 35 - 25, 0);
    LineTo(hdc, c + 20, 300 - 30 - 35 - 25);
    MoveToEx(hdc, c - 20, 300 - 30 - 35 - 25, 0);
    LineTo(hdc, c, 300 - 30 - 35 - 25 - 15);
    MoveToEx(hdc, c, 300 - 30 - 35 - 25 - 15, 0);
    LineTo(hdc, c + 20, 300 - 30 - 35 - 25);
    DeleteObject(pen);
}

void l313() {
    int c = 75;
    int y = -50;
    HPEN pen = CreatePen(PS_SOLID, 1, RGB(225, 200, 60));
    HBRUSH penh = CreateSolidBrush(RGB(225, 200, 60));
    SelectObject(hdc, penh);
    SelectObject(hdc, pen);
    Ellipse(hdc, c - 10, 390 + y, c + 10, 410 + y);
    pen = CreatePen(PS_SOLID, 1, RGB(255, 0, 0));
    SelectObject(hdc, pen);
    MoveToEx(hdc, c + 10, 400 + y, 0);
    LineTo(hdc, c + 50, 400 + y);
    penh = CreateSolidBrush(RGB(10, 165, 200));
    pen = CreatePen(PS_SOLID, 1, RGB(225, 200, 60));
    SelectObject(hdc, penh);
    SelectObject(hdc, pen);
    Ellipse(hdc, c + 50, 390 + y, c + 70, 410 + y);
    pen = CreatePen(PS_SOLID, 1, RGB(255, 0, 0));
    SelectObject(hdc, pen);
    MoveToEx(hdc, c + 70, 400 + y, 0);
    LineTo(hdc, c + 85, 400 + y);
    LineTo(hdc, c + 90, 400 - 10 + y);
    LineTo(hdc, c + 90, 400 - 10 - 10 + y);
    LineTo(hdc, c + 90 - 20, 400 - 10 - 10 + y);
    LineTo(hdc, c + 90 - 20 - 10, 400 - 10 - 10 - 15 + y);
    LineTo(hdc, c + 90 - 20 - 10 - 50, 400 - 10 - 10 - 15 + y);
    LineTo(hdc, c + 90 - 20 - 10 - 50 - 20, 400 - 10 - 10 + y);
    LineTo(hdc, c + 90 - 20 - 10 - 50 - 20 - 10, 400 - 10 - 10 + y);
    LineTo(hdc, c + 90 - 20 - 10 - 50 - 20 - 10, 400 + y);
    LineTo(hdc, c - 10, 400 + y);
}

void l314() {
    int c = 300;
    int y = 400;
    HBRUSH pen1 = CreateSolidBrush(RGB(135, 206, 235));
    HPEN pen2 = CreatePen(PS_SOLID, 1, RGB(87, 174, 209));
    SelectObject(hdc, pen1);
    SelectObject(hdc, pen2);
    Ellipse(hdc, c - 30, y - 30, c + 30, y + 30);
    HBRUSH pen3 = CreateHatchBrush(HS_BDIAGONAL,RGB(153, 199, 217));
    HPEN pen4 = CreatePen(PS_SOLID, 1, RGB(64, 141, 172));
    SelectObject(hdc, pen3);
    SelectObject(hdc, pen4);
    Ellipse(hdc, c - 20, y - 20 - 20, c + 20, y + 20 - 20);
    HBRUSH pen5 = CreateHatchBrush(HS_DIAGCROSS,RGB(186, 186, 186));
    HPEN pen6 = CreatePen(PS_SOLID, 1, RGB(223, 235, 240));
    SelectObject(hdc, pen5);
    SelectObject(hdc, pen6);
    Ellipse(hdc, c - 15, y - 15 - 20 - 20, c + 15, y + 15 - 20 - 20);
    HPEN pen7 = CreatePen(PS_SOLID, 1, RGB(255, 128, 0));
    HBRUSH pen8 = CreateSolidBrush(RGB(255, 128, 0));
    SelectObject(hdc, pen7);
    SelectObject(hdc, pen8);
    int up = -43;
    BeginPath(hdc);
    MoveToEx(hdc, c, y - 6 + up, 0);
    LineTo(hdc, c, y + 6 + up);
    LineTo(hdc, c - 20, y + up);
    LineTo(hdc, c, y - 6 + up);
    EndPath(hdc);
    FillPath(hdc);
    HPEN pen9 = CreatePen(PS_SOLID, 1, RGB(150, 75, 0));
    SelectObject(hdc, pen9);
    MoveToEx(hdc, c - 15, y - 10 + 15 - 20, 0);
    LineTo(hdc, c - 30, y - 10 + 15 - 20 + 25);
    MoveToEx(hdc, c + 30, y - 10 + 15, 0);
    LineTo(hdc, c + 15, y - 10 + 15 - 20 );
}


LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
        case WM_PAINT: {
            PAINTSTRUCT ps;
            hdc = BeginPaint(hwnd, &ps);
            l311();
            l312();
            l313();
            l314();
            EndPaint(hwnd, &ps);
        }
            return 0;

        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
    }

    return DefWindowProc(hwnd, msg, wParam, lParam);
}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int) {
    SetConsoleCP(CP_UTF8);
    WNDCLASS wc = {};
    wc.lpfnWndProc = WndProc;
    wc.hInstance = hInstance;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH) (COLOR_WINDOW + 1);
    wc.lpszClassName = "MyWindowClass";
    RegisterClass(&wc);

    // Создаём окно — с рамкой, заголовком и кнопкой закрытия:
    HWND hwnd = CreateWindowEx(
        0,
        "MyWindowClass",
        "Моё окно", // заголовок
        WS_OVERLAPPEDWINDOW, // полный набор (рамка + все кнопки)
        CW_USEDEFAULT, CW_USEDEFAULT,
        800, 600,
        NULL, NULL, hInstance, NULL);

    ShowWindow(hwnd, SW_SHOW);
    UpdateWindow(hwnd);

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return (int) msg.wParam;
}

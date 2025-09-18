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
    LineTo(hdc, c + 15, y - 10 + 15 - 20);
}

void l315() {
    int c = 300;
    int y = 100;
    HPEN pen1 = CreatePen(PS_SOLID, 1, RGB(150, 75, 0));
    HBRUSH pen2 = CreateSolidBrush(RGB(150, 75, 0));
    SelectObject(hdc, pen1);
    SelectObject(hdc, pen2);
    BeginPath(hdc);
    MoveToEx(hdc, c, y, 0);
    LineTo(hdc, c - 15, y + 100);
    LineTo(hdc, c + 15, y + 100);
    EndPath(hdc);
    FillPath(hdc);
    HPEN pen3 = CreatePen(PS_SOLID, 1, RGB(40, 175, 20));
    HBRUSH pen4 = CreateSolidBrush(RGB(40, 255, 20));
    SelectObject(hdc, pen3);
    SelectObject(hdc, pen4);
    Ellipse(hdc, c - 20, y - 20, c + 20, y + 20);
    Ellipse(hdc, c + 15 - 25, y + 25 - 25, c + 15 + 25, y + 25 + 25);
    Ellipse(hdc, c - 10 - 25, y + 28 - 25, c - 10 + 25, y + 28 + 25);
    Ellipse(hdc, c - 15 - 25, y + 50 - 25, c - 15 + 25, y + 50 + 25);
    Ellipse(hdc, c + 15 - 25, y + 50 - 25, c + 15 + 25, y + 50 + 25);
}

void l316() {
    int c = 400;
    int y = 150;
    HPEN pen1 = CreatePen(PS_SOLID, 1, RGB(41, 49, 51));
    HBRUSH pen2 = CreateSolidBrush(RGB(194, 197, 204));
    HBRUSH pen3 = CreateSolidBrush(RGB(194, 197, 204));
    HPEN pen4 = CreatePen(PS_SOLID, 1,RGB(218, 165, 32));
    HBRUSH pen5 = CreateSolidBrush(RGB(218, 165, 32));
    HPEN pen6 = CreatePen(PS_SOLID, 1,RGB(255, 248, 220));
    HBRUSH pen7 = CreateSolidBrush(RGB(255, 248, 220));
    SelectObject(hdc, pen6);
    SelectObject(hdc, pen7);
    Ellipse(hdc, c - 60 + 60, y - 60 - 50 + 20, c + 60 + 60, y + 60 - 50 + 20);

    SelectObject(hdc, pen4);
    SelectObject(hdc, pen5);
    Ellipse(hdc, c - 30 + 60, y - 30 - 50 + 20, c + 30 + 60, y + 30 - 50 + 20);

    SelectObject(hdc, pen1);
    SelectObject(hdc, pen2);
    Rectangle(hdc, c - 5, y - 75, c + 5, y + 75);
    Rectangle(hdc, c - 5, y - 75, c + 60, y - 70);

    SelectObject(hdc, pen3);
    Ellipse(hdc, c - 7, y - 7 - 75, c + 7, y + 7 - 75);
    SelectObject(hdc, pen2);
    BeginPath(hdc);
    MoveToEx(hdc, c + 60, y - 70, 0);
    LineTo(hdc, c + 40, y - 50);
    LineTo(hdc, c + 80, y - 50);
    EndPath(hdc);
    FillPath(hdc);
}

void l317() {
    int c = 600;
    int y = 150;
    HPEN pen1 = CreatePen(PS_SOLID, 3, RGB(155, 66, 34));
    SelectObject(hdc, pen1);
    MoveToEx(hdc, c, y - 70, 0);
    LineTo(hdc, c, y + 20);
    MoveToEx(hdc, c, y - 40, 0);
    LineTo(hdc, c + 30, y - 70);
    MoveToEx(hdc, c, y, 0);
    LineTo(hdc, c - 30, y - 40);
}

void l318() {
    int c = 500;
    int y = 400;
    HBRUSH pen1 = CreateHatchBrush(HS_CROSS, RGB(0, 0, 0));
    HPEN pen2 = CreatePen(PS_SOLID, 1, RGB(255, 0, 0));

    HBRUSH pen3 = CreateSolidBrush(RGB(0, 0, 0));
    HPEN pen4 = CreatePen(PS_SOLID, 2,RGB(0, 0, 0));
    SelectObject(hdc, pen3);
    SelectObject(hdc, pen4);
    MoveToEx(hdc, c, y, 0);
    LineTo(hdc, c + 20, y - 30);
    LineTo(hdc, c + 60, y - 30);
    LineTo(hdc, c + 70, y);
    MoveToEx(hdc, c + 60, y - 30, 0);
    LineTo(hdc, c + 55, y - 50);
    SelectObject(hdc, pen1);
    SelectObject(hdc, pen2);
    Ellipse(hdc, c - 18, y - 18, c + 18, y + 18);
    Ellipse(hdc, c - 18 + 70, y - 18, c + 18 + 70, y + 18);

    HPEN pen5 = CreatePen(PS_SOLID, 1, RGB(0, 0, 0));
    HBRUSH pen6 = CreateSolidBrush(RGB(255, 255, 255));
    SelectObject(hdc, pen5);
    SelectObject(hdc, pen6);
    Ellipse(hdc, c - 7, y - 7, c + 7, y + 7);
    Ellipse(hdc, c - 10 + 35, y - 10, c + 10 + 35, y + 10);
    MoveToEx(hdc, c + 35, y, 0);
    LineTo(hdc, c + 50, y - 15);
    MoveToEx(hdc, c + 35, y, 0);
    LineTo(hdc, c + 20, y + 15);
    MoveToEx(hdc, c, y - 7, 0);
    LineTo(hdc, c + 35, y - 10);
    MoveToEx(hdc, c, y + 7, 0);
    LineTo(hdc, c + 35, y + 10);
}

void l319() {
    int c = 700;
    int y = 100;
    HPEN pen1 = CreatePen(PS_SOLID, 3, RGB(192, 192, 192));
    HBRUSH pen2 = CreateSolidBrush(RGB(192, 192, 192));
    SelectObject(hdc, pen1);
    SelectObject(hdc, pen2);
    Rectangle(hdc, c - 50, y - 5, c + 50, y + 5);
    Rectangle(hdc, c - 50, y - 5 + 100, c + 50, y + 5 + 100);

    Rectangle(hdc, c - 50, y + 5, c - 50 + 10, y - 5 + 100);
    Rectangle(hdc, c - 50 + 20, y + 5, c - 50 + 30, y - 5 + 100);
    Rectangle(hdc, c - 50 + 40, y + 5, c - 50 + 50, y - 5 + 100);
    Rectangle(hdc, c - 50 + 60, y + 5, c - 50 + 70, y - 5 + 100);
    Rectangle(hdc, c - 50 + 80, y + 5, c - 50 + 90, y - 5 + 100);
    Rectangle(hdc, c - 50 + 100, y - 5, c - 50 + 110, y + 5 + 100);
}

void l31A() {
    int c = 400;
    int y = 300;
    HPEN pen1 = CreatePen(PS_SOLID, 3, RGB(100, 170, 210));
    HBRUSH pen2 = CreateSolidBrush(RGB(135, 206, 235));
    SelectObject(hdc, pen1);
    SelectObject(hdc, pen2);
    Ellipse(hdc, c - 30 - 15, y - 30 + 5, c + 30 - 15, y + 30 + 5);
    Ellipse(hdc, c - 10, y - 10, c + 10, y + 10);
    Ellipse(hdc, c - 30 + 20, y - 30 + 5, c + 30 + 20, y + 30 + 5);
    Ellipse(hdc, c - 20 + 15, y - 20 - 15, c + 20 + 15, y + 20 - 15);
    Ellipse(hdc, c - 25 - 15, y - 25 - 15, c + 25 - 15, y + 25 - 15);
}

void l31B() {
    int c = 400;
    int y = 500;
    HPEN pen1 = CreatePen(PS_SOLID, 3, RGB(192, 192, 192));
    HBRUSH pen2 = CreateSolidBrush(RGB(192, 192, 192));
    SelectObject(hdc, pen1);
    SelectObject(hdc, pen2);
    Pie(hdc, c, y, c + 50, y + 50, c + 25, y, c + 25, y + 50);
    Rectangle(hdc, c + 25, y, c + 100, y + 50);
    Pie(hdc, c + 75, y, c + 125, y + 50, c + 100, y + 50, c + 100, y);
    HPEN pen3 = CreatePen(PS_SOLID, 3, RGB(135, 206, 235));
    HBRUSH pen4 = CreateSolidBrush(RGB(135, 206, 235));
    SelectObject(hdc, pen3);
    SelectObject(hdc, pen4);
    Ellipse(hdc, c - 7 + 25, y - 7 + 15, c + 7 + 25, y + 7 + 15);
    Ellipse(hdc, c - 7 + 25 + 20, y - 7 + 15, c + 7 + 25 + 20, y + 7 + 15);
    Ellipse(hdc, c - 7 + 25 + 20 + 20, y - 7 + 15, c + 7 + 25 + 20 + 20, y + 7 + 15);
    SetTextColor(hdc, RGB(30, 144, 255));
    SetBkMode(hdc, TRANSPARENT);
    TextOut(hdc, c + 25, y + 25, "OceanGate", 9);
    HPEN pen5 = CreatePen(PS_SOLID, 3, RGB(236, 236, 128));
    HBRUSH pen6 = CreateSolidBrush(RGB(236, 236, 128));
    SelectObject(hdc, pen5);
    SelectObject(hdc, pen6);
    BeginPath(hdc);
    MoveToEx(hdc, c, y + 25, 0);
    LineTo(hdc, c - 125, y);
    LineTo(hdc, c - 125, y + 50);
    EndPath(hdc);
    FillPath(hdc);
}

void l321() {
    int c = 175;
    int y = 125;
    int a = -5;
    HPEN pen = CreatePen(PS_SOLID, 1, RGB(0, 255, 0));
    SelectObject(hdc, pen);
    while (a < 5) {
        MoveToEx(hdc, c, y, 0);
        LineTo(hdc, c + 10 * a, y - 50);
        a++;
    }
}

void l322() {
    int c = 125;
    int y = 50;
    HPEN pen = CreatePen(PS_SOLID, 1, RGB(20, 220, 32));
    SelectObject(hdc, pen);
    int a = -5;
    while (a <= 5) {
        MoveToEx(hdc, c, y, 0);
        LineTo(hdc, c + 10 * a, y - 50 + (10 * abs(a)));
        a++;
    }
}

void l323() {
    {
        int c = 175;
        int y = 125;
        int a = -15;
        HPEN pen = CreatePen(PS_SOLID, 1, RGB(0, 255, 0));
        SelectObject(hdc, pen);
        while (a <= 15) {
            MoveToEx(hdc, c, y, 0);
            LineTo(hdc, c + 5 * a, y - 50);
            a++;
        }
    }
    {
        int c = 125;
        int y = 300;
        HPEN pen = CreatePen(PS_SOLID, 1, RGB(20, 220, 32));
        SelectObject(hdc, pen);
        int a = -20;
        while (a <= 20) {
            MoveToEx(hdc, c, y, 0);
            LineTo(hdc, c + 5 * a, y - 100 + (5 * abs(a)));
            a++;
        }
    }
}

void l324() {
    int c = 125;
    int y = 50;
    int a = 0;
    HPEN pen = CreatePen(PS_SOLID, 1, RGB(255, 0, 255));
    SelectObject(hdc, pen);
    while (a <= 25) {
        MoveToEx(hdc, c + a * 5, y, 0);
        LineTo(hdc, c + a * 5, y - 50);
        a++;
    }
}

void l3241() {
    int c = 125;
    int y = 50;
    int a = 0;
    HPEN pen = CreatePen(PS_SOLID, 1, RGB(255, 0, 255));
    SelectObject(hdc, pen);
    while (a <= 100) {
        MoveToEx(hdc, c + a * 2, y, 0);
        LineTo(hdc, c + a * 2, y - 50);
        a++;
    }
}

void l325() {
    {
        int c = 25;
        int y = 400;
        int a = 0;
        HPEN pen = CreatePen(PS_SOLID, 1, RGB(0, 255, 255));
        SelectObject(hdc, pen);
        MoveToEx(hdc, c, y, 0);
        LineTo(hdc, c, y + 125);
        MoveToEx(hdc, c + 50, y, 0);
        LineTo(hdc, c + 50, y + 125);
        while (a <= 25) {
            MoveToEx(hdc, c, y + 5 * a, 0);
            LineTo(hdc, c + 50, y + 5 * a);
            a++;
        }
    }
    {
        int c = 10;
        int y = 175;
        HPEN pen = CreatePen(PS_SOLID, 1, RGB(20, 235, 15));
        SelectObject(hdc, pen);
        int a = 0;
        while (a <= 30) {
            MoveToEx(hdc, c + 3 * a, y, 0);
            LineTo(hdc, c + 3 * a, y + 20);
            a++;
        }
    }
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
        case WM_PAINT: {
            PAINTSTRUCT ps;
            hdc = BeginPaint(hwnd, &ps);
            l311();
            // l312();
            l313();
            l314();
            l315();
            l316();
            l317();
            l318();
            l319();
            l31A();
            l31B();
            // l321();
            // l322();
            l323();
            // l324();
            l3241();
            l325();
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
        1280, 920,
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

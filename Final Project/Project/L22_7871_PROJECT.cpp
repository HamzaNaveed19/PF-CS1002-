//#include<iostream>
//#include<Windows.h>
//#include <cstdlib>
//#include<time.h>
//#include<fstream>
//#include<conio.h>
//using namespace std;
//const int N = 9;
//int X = 0;
//HANDLE text = GetStdHandle(STD_OUTPUT_HANDLE);
//void gotorowcolumn(int row, int col) {
//    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//    int x_position = col, y_position = row;
//    COORD screen;
//    HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
//    screen.X = x_position;
//    screen.Y = y_position;
//    SetConsoleCursorPosition(hOutput, screen);
//}
//void generator(int arr[][N], int indexs[]) {
//    X = 0;
//    srand(time(NULL));
//    int gen = rand() % 9 + 18;
//    for (int i = 0; i < gen; i++) {
//        int col = rand() % 9;
//        int row = rand() % 9;
//        int num = rand() % 9 + 1;
//        if (num == 0) {
//            i--;
//            continue;
//        }
//        bool r = true;
//        bool c = true;
//        bool ingrid = true;
//        int grid_col = 0, grid_row = 0;
//        if (arr[row][col] == 0 && arr[row][col] != num) {
//            for (int j = 0; j < N; j++) {
//                if (num == arr[row][j]) {
//                    r = false;
//                }if (num == arr[j][col]) {
//                    c = false;
//                }
//            }
//            grid_row = row - (row % 3);
//            grid_col = col - (col % 3);
//            for (int l = 0; l < 3; l++) {
//                for (int k = 0; k < 3; k++) {
//                    if (arr[l + grid_row][k + grid_col] == num) {
//                        ingrid = false;
//                        continue;
//                    }
//                }
//            }
//            if (r == true && c == true && ingrid == true) {
//                arr[row][col] = num;
//                indexs[X] = row;
//                X++;
//                indexs[X] = col;
//                X++;
//            }
//            else {
//                i--;
//                continue;
//            }
//        }
//        else {
//            i--;
//        }
//    }
//}
//void save(int arr[][N], int no, int indexs[]) {
//    if (no == 1) {
//        ofstream w1("game1.txt");
//        w1 << X;
//        w1 << endl;
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j < N; j++) {
//                if (arr[i][j] == 0) {
//                    w1 << "#" << " ";
//                }
//                else {
//                    w1 << arr[i][j] << " ";
//                }
//            }
//            w1 << endl;
//
//        }cout << endl;
//        for (int i = 0; i < X; i++) {
//            w1 << indexs[i] << " ";
//        }
//        w1.close();
//    }
//    if (no == 2) {
//        ofstream w2("game2.txt");
//        w2<< X;
//        w2 << endl;
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j < N; j++) {
//                if (arr[i][j] == 0) {
//                    w2 << "#" << " ";
//                }
//                else {
//                    w2 << arr[i][j] << " ";
//                }
//            }
//            w2 << endl;
//
//        }cout << endl;
//        for (int i = 0; i < X; i++) {
//            w2 << indexs[i] << " ";
//        }
//        w2.close();
//    }if (no == 3) {
//        ofstream w3("game3.txt");
//        w3 << X;
//        w3 << endl;
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j < N; j++) {
//                if (arr[i][j] == 0) {
//                    w3 << "#" << " ";
//                }
//                else {
//                    w3 << arr[i][j] << " ";
//                }
//            }
//            w3 << endl;
//
//        }cout << endl;
//        for (int i = 0; i < X; i++) {
//            w3 << indexs[i] << " ";
//        }
//        w3.close();
//    }
//}void load(int arr[][N], int no, int indexs[]) {
//    if (no == 1) {
//        ifstream r1("game1.txt");
//        r1 >> X;
//        char z = ' ';
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j < N; j++) {
//                r1 >> z;
//                if (z == '#') {
//                    arr[i][j] = 0;
//                }
//                else {
//                    arr[i][j] = z-48;
//                }
//            }
//        }
//        for (int i = 0; i < X; i++) {
//            r1 >> indexs[i];
//        }
//
//    }
//    if (no == 2) {
//        ifstream r2("game2.txt");
//        r2 >> X;
//        char z = ' ';
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j < N; j++) {
//                r2 >> z;
//                if (z == '#') {
//                    arr[i][j] = 0;
//                }
//                else {
//                    arr[i][j] = z - 48;
//                }
//            }
//        }
//        for (int i = 0; i < X; i++) {
//            r2 >> indexs[i];
//        }
//
//    }  if (no == 3) {
//        ifstream r3("game3.txt");
//        r3>> X;
//        char z = ' ';
//        for (int i = 0; i < N; i++) {
//            for (int j = 0; j < N; j++) {
//                r3 >> z;
//                if (z == '#') {
//                    arr[i][j] = 0;
//                }
//                else {
//                    arr[i][j] = z - 48;
//                }
//            }
//        }
//        for (int i = 0; i < X; i++) {
//            r3 >> indexs[i];
//        }
//
//    }
//}
//void display(int arr[][N]) {
//    system("color 7D");
//    gotorowcolumn(0, 35);
//    SetConsoleTextAttribute(text, 7);
//    cout << "SUDOKU PUZZLE " << endl;
//    gotorowcolumn(4, 50);
//    SetConsoleTextAttribute(text, 10);
//    cout << "PRESS ESC BUTTON TO EXIT AND SAVE!" << endl;
//    gotorowcolumn(2, 0);
//    SetConsoleTextAttribute(text, 12);
//    cout << "______________________" << endl;
//    for (int row = 0; row < N; row++) {
//        for (int col = 0; col < N; col++) {
//            if (col == 0 || col == 3 || col == 6) {
//                SetConsoleTextAttribute(text, 12);
//                cout << "|";
//
//            }
//            if (arr[row][col] == 0) {
//                SetConsoleTextAttribute(text, 6);
//                cout << "_" << " ";
//            }
//            else {
//                SetConsoleTextAttribute(text, 3);
//                cout << arr[row][col] << " ";
//            }if (col == 8) {
//                SetConsoleTextAttribute(text, 12);
//                cout << "|";
//
//            }
//        }
//        if (row == 2 || row == 5) {
//            cout << endl;
//
//            for (int i = 0; i < 11; i++) {
//                SetConsoleTextAttribute(text, 12);
//                cout << "--";
//            }
//
//        }
//        cout << endl;
//    }
//    cout << "----------------------" << endl;
//    cout << endl;
//}
//int result(int arr[][N]) {
//    bool won = false;
//    int zero_count = 0;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            if (arr[i][j] == 0) {
//                zero_count++;
//            }
//        }
//    }
//    return zero_count;
//}
//int convert(int r) {
//    if (r == 49) {
//        r = 1;
//    }
//    else if (r == 50) {
//        r = 2;
//    }
//    else if (r == 51) {
//        r = 3;
//    }
//    else if (r == 52) {
//        r = 4;
//    }
//    else if (r == 53) {
//        r = 5;
//    }
//    else if (r == 54) {
//        r = 6;
//    }
//    else if (r == 55) {
//        r = 7;
//    }
//    else if (r == 56) {
//        r = 8;
//    }
//    else if (r == 57) {
//        r = 9;
//    }
//    return r;
//}
//void input(int arr[][N], int indexs[]) {
//    int a = result(arr);
//    while (a != 0) {
//        gotorowcolumn(12, 50);
//        SetConsoleTextAttribute(text, 10);
//        cout << "no of empty boxes : " << result(arr) << endl;
//        SetConsoleTextAttribute(text, 9);
//        gotorowcolumn(16, 0);
//        char in = ' ';
//        char row = ' ';
//        char col = ' ';
//        int c = 0, r = 0, In = 0;
//        bool ROW = false;
//        cout << "enter the row : ";
//        while (!ROW) {
//            row = _getch();
//            cout << row << endl;
//            r = int(row);
//            if ((r >= 49 && r <= 57) || r == 27) {
//                ROW = true;
//            }
//            else {
//                cout << "enter valid number : " << endl;
//            }
//            if (r == 27) {
//                cout << "enter the game for replacing  : " << endl;
//                cout << "GAME-1 \nGAME-2 \nGAME-3 " << endl;
//                int no;
//                cin >> no;
//                save(arr, no, indexs);
//                system("pause");
//                return;
//            }
//
//        }
//        bool COL = false;
//        cout << "enter the column  : ";
//        while (!COL) {
//            col = _getch();
//            cout << col << endl;
//            c = int(col);
//            if ((c >= 49 && c <= 57) || c == 27) {
//                COL = true;
//            }
//            else {
//                cout << "enter valid number : " << endl;
//            }
//            if (c == 27) {
//                cout << "  enter the game for replacing  : " << endl;
//                cout << "GAME-1 \nGAME-2 \nGAME-3 " << endl;
//                int no;
//                cin >> no;
//                save(arr, no, indexs);
//                system("pause");
//                return;
//            }
//        }
//        bool INP = false;
//        while (!INP) {
//            cout << "enter the number : ";
//            in = _getch();
//            cout << in << endl;
//            In = int(in);
//            if ((In >= 49 && In <= 57) || In == 27) {
//                INP = true;
//            }
//            else {
//                cout << "enter valid number : " << endl;
//            }if (In == 27) {
//                cout << "enter the game for replacing  : " << endl;
//                cout << "GAME-1 \nGAME-2 \nGAME-3 " << endl;
//                int no;
//                cin >> no;
//                save(arr, no, indexs);
//                system("pause");
//                return;
//            }
//        }
//        int  inp = convert(In);
//        int temp_r = convert(r) - 1;
//        int temp_c = convert(c) - 1;
//        bool validplace = true;
//        for (int i = 0; i + 1 < X; i = i + 2) {
//            if (temp_r == indexs[i] && temp_c == indexs[i + 1]) {
//                validplace = false;
//                break;
//            }
//        }
//        if (validplace == false) {
//            cout << "cant alter the puzzle elements : " << endl;
//            continue;
//        }
//        bool val_row = true;
//        bool val_col = true;
//        for (int j = 0; j < N; j++) {
//            if (arr[j][temp_c] == inp) {
//                val_row = false;
//            }if (arr[temp_r][j] == inp) {
//                val_col = false;
//            }
//        } bool ingrid = true;
//        int grid_row = 0;
//        int grid_col = 0;
//        grid_row = temp_r - (temp_r % 3);
//        grid_col = temp_c - (temp_c % 3);
//
//        for (int l = 0; l < 3; l++) {
//            for (int k = 0; k < 3; k++) {
//                if (arr[l + grid_row][grid_col + k] == inp) {
//                    ingrid = false;
//                }
//            }
//        }if (/*empty == true && */ ingrid == true && val_row == true && val_col == true) {
//            arr[temp_r][temp_c] = inp;
//            system("cls");
//            display(arr);
//            a = result(arr);
//        }
//        else {
//            if (ingrid == false)
//                cout << "exist in grid\n";
//            if (val_col == false)
//                cout << "exist in row\n";
//            if (val_row == false)
//                cout << "exist in column\n";
//        }
//
//    }
//}
//int main() {
//    system("color 7D");
//
//    gotorowcolumn(0, 50);
//
//    cout << "SUDOKU PUZZLE " << endl;
//
//    int arr[N][N] = { 0 };
//    int index[1000] = { 0 };
//    char choice = '0';
//
//    cout << " MAIN MENU " << endl;
//    cout << "n--> New Game \nl--> Load Game " << endl;
//    cin >> choice;
//
//    while (choice != 'n' && choice != 'l') {
//        cout << "enter valid choice!" << endl;
//        cin >> choice;
//    }
//    system("cls");
//
//    cin.ignore();
//    int game = 0;
//
//    if (choice == 'l') {
//
//        cout << "select the game number please : " << endl;
//        cout << "GAME-1 \nGAME-2 \nGAME-3 " << endl;
//        cin >> game;
//        bool inp = false;
//        while (inp == false) {
//            while (1) {
//                {
//                    if (cin.fail())
//                    {
//                        cin.clear();
//                        cin.ignore();
//                        cout << "enter an integer value only  : " << endl;
//                        cin >> game;
//                    }
//                    if (!cin.fail())
//                        break;
//                }
//
//            }if (game > 0 && game < 4) {
//                inp == true;
//                break;
//            }
//            else {
//                cout << "enter between 1 and 3 " << endl;
//                cin >> game;
//            }
//        }
//        system("cls");
//
//    } if (game == 1 || game == 2 || game == 3) {
//        load(arr, game, index);
//        display(arr);
//        input(arr, index);
//    }
//    if (choice == 'n') {
//        generator(arr, index);
//        display(arr);
//        input(arr, index);
//    }
//    if (result(arr) == 0) {
//        cout << "YOU WIN !" << endl;
//    }
//    return 0;
//}

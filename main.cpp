#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

void field_print();
void random();
void input();
bool win();
void bot();
bool draw();
int main();
void isDanger();
void bot_win();

char matrix[3][3];
int num;
int count = 1;
bool flag = false;
int x1 = 100;
int x2 = 100;
int x3 = 100;
int x4 = 100;

void random() {
    srand(unsigned(time(0)));
    int number = rand();
    number = number % 2;
    if (number == 0)
        cout << "Бот ходит первым" << endl;
    if (number == 1)
        cout << "За вами первый ход" << endl;
    num = number;
}
void field_print(){
    cout << "-------------" << endl;
    for (auto & i : matrix){
        cout << "| " << i[0] <<  " | " << i[1] << " | " << i[2] << " |" << endl;
        cout << "-------------" << endl;
    }
}
void input(){
    char input_answer;
    while (true){
        cin >> input_answer;
        if (input_answer != '1' & input_answer != '2' & input_answer != '3'
                & input_answer != '4' & input_answer != '5' & input_answer != '6'
                & input_answer != '7' & input_answer != '8' & input_answer != '9'){
            cout << "Вы ввели некорректное значение, осуществите повторный ввод";
            continue;
        }
        if (input_answer == '1'){
            if (matrix[2][0] == '-'){
                matrix[2][0] = 'x';
                count += 1;
                break;
            }
        }
        if (input_answer == '2'){
            if (matrix[2][1] == '-'){
                matrix[2][1] = 'x';
                count += 1;
                break;
            }
        }
        if (input_answer == '3'){
            if (matrix[2][2] == '-'){
                matrix[2][2] = 'x';
                count += 1;
                break;
            }
        }
        if (input_answer == '4'){
            if (matrix[1][0] == '-'){
                matrix[1][0] = 'x';
                count += 1;
                break;
            }
        }
        if (input_answer == '5'){
            if (matrix[1][1] == '-'){
                matrix[1][1] = 'x';
                count += 1;
                break;
            }
        }
        if (input_answer == '6'){
            if (matrix[1][2] == '-'){
                matrix[1][2] = 'x';
                count += 1;
                break;
            }
        }
        if (input_answer == '7'){
            if (matrix[0][0] == '-'){
                matrix[0][0] = 'x';
                count += 1;
                break;
            }
        }
        if (input_answer == '8'){
            if (matrix[0][1] == '-'){
                matrix[0][1] = 'x';
                count += 1;
                break;
            }
        }
        if (input_answer == '9'){
            if (matrix[0][2] == '-'){
                matrix[0][2] = 'x';
                count += 1;
                break;
            }
        }
        cout << "Вы ввели некорректное значение, осуществите повторный ввод";

    }

}
void bot_win(){
    x3 = 100;
    x4 = 100;
    if (matrix[0][0] == 'o' && matrix[0][1] == 'o'){
        if (matrix[0][2] == '-'){
            x3 = 0;
            x4 = 2;
        }
    }
    if (matrix[0][1] == 'o' && matrix[0][2] == 'o'){
        if (matrix[0][0] == '-'){
            x3 = 0;
            x4 = 0;
        }

    }
    if (matrix[0][0] == 'o' && matrix[1][0] == 'o'){
        if (matrix[2][0] == '-'){
            x3 = 2;
            x4 = 0;
        }

    }
    if (matrix[1][0] == 'o' && matrix[2][0] == 'o'){
        if (matrix[0][0] == '-'){
            x3 = 0;
            x4 = 0;
        }

    }
    if (matrix[0][2] == 'o' && matrix[1][2] == 'o'){
        if (matrix[2][2] == '-'){
            x3 = 2;
            x4 = 2;
        }

    }
    if (matrix[1][2] == 'o' && matrix[2][2] == 'o'){
        if (matrix[0][2] == '-'){
            x3 = 0;
            x4 = 2;
        }

    }
    if (matrix[2][0] == 'o' && matrix[2][1] == 'o'){
        if (matrix[2][2] == '-'){
            x3 = 2;
            x4 = 2;
        }

    }
    if (matrix[2][1] == 'o' && matrix[2][2] == 'o'){
        if (matrix[2][0] == '-'){
            x3 = 2;
            x4 = 0;
        }

    }
    if (matrix[0][0] == 'o' && matrix[1][1] == 'o'){
        if (matrix[2][2] == '-'){
            x3 = 2;
            x4 = 2;
        }

    }
    if (matrix[1][1] == 'o' && matrix[2][2] == 'o'){
        if (matrix[0][0] == '-'){
            x3 = 0;
            x4 = 0;
        }

    }
    if (matrix[0][2] == 'o' && matrix[1][1] == 'o'){
        if (matrix[2][0] == '-'){
            x3 = 2;
            x4 = 0;
        }

    }
    if (matrix[2][0] == 'o' && matrix[1][1] == 'o'){
        if (matrix[0][2] == '-'){
            x3 = 0;
            x4 = 2;
        }

    }
    if (matrix[0][0] == 'o' && matrix[0][2] == 'o'){
        if (matrix[0][1] == '-'){
            x3 = 0;
            x4 = 1;
        }

    }
    if (matrix[0][0] == 'o' && matrix[2][0] == 'o'){
        if (matrix[1][0] == '-'){
            x3 = 1;
            x4 = 0;
        }

    }
    if (matrix[2][0] == 'o' && matrix[2][2] == 'o'){
        if (matrix[2][1] == '-'){
            x3 = 2;
            x4 = 1;
        }

    }
    if (matrix[0][2] == 'o' && matrix[2][2] == 'o'){
        if (matrix[1][2] == '-'){
            x3 = 1;
            x4 = 2;
        }

    }
    if (matrix[1][0] == 'o' && matrix[1][1] == 'o'){
        if (matrix[1][2] == '-'){
            x3 = 1;
            x4 = 2;
        }

    }
    if (matrix[1][1] == 'o' && matrix[1][2] == 'o'){
        if (matrix[1][0] == '-'){
            x3 = 1;
            x4 = 0;
        }

    }
    if (matrix[1][0] == 'o' && matrix[1][2] == 'o'){
        if (matrix[1][1] == '-'){
            x3 = 1;
            x4 = 1;
        }

    }
    if (matrix[0][1] == 'o' && matrix[1][1] == 'o'){
        if (matrix[2][1] == '-'){
            x3 = 2;
            x4 = 1;
        }

    }
    if (matrix[1][1] == 'o' && matrix[2][1] == 'o'){
        if (matrix[0][1] == '-'){
            x3 = 0;
            x4 = 1;
        }

    }
    if (matrix[0][1] == 'o' && matrix[2][1] == 'o'){
        if (matrix[1][1] == '-'){
            x1 = 1;
            x2 = 1;
        }

    }
}
void bot(){
    if (count == 1){
        matrix[1][1] = 'o';
        count += 1;
    }
    else if (count == 2){
        if (matrix[1][1] == '-'){
            matrix[1][1] = 'o';
            count += 1;
        }else{
            if (matrix[0][0] == '-'){
                matrix[0][0] = 'o';
                count += 1;
            }
            else if (matrix[0][2] == '-'){
                matrix[0][2] = 'o';
                count += 1;
            }
            else if (matrix[2][0] == '-'){
                matrix[2][0] = 'o';
                count += 1;
            }
            else if (matrix[2][2] == '-'){
                matrix[2][2] = 'o';
                count += 1;
            }
        }
    }
    else if (count == 3){
        flag = false;
        for (int i = 0; i < 3; i++){
            if (flag){
                break;
            }
            for (int j = 0; j < 3; j++){
                if (matrix[i][j] == '-'){
                    matrix[i][j] = 'o';
                    count += 1;
                    flag = true;
                    break;
                }
            }
        }
    }
    else if (count == 4){
        if (matrix[0][0] == 'o' && matrix[1][1] == 'x' && matrix[2][2] == 'x'){
            matrix[0][2] = 'o';
            count += 1;
        }
        else{
            bot_win();
            if (x3 != 100){
                matrix[x3][x4] = 'o';
                count += 1;
            }
            else{
                isDanger();
                if (x1 != 100){
                    matrix[x1][x2] = 'o';
                    count += 1;
                }
                else{
                    if (matrix[0][1] == '-'){
                        matrix[0][1] = 'o';
                        count += 1;
                    }
                    else if (matrix[1][0] == '-'){
                        matrix[1][0] = 'o';
                        count += 1;
                    }
                    else if (matrix[1][2] == '-'){
                        matrix[1][2] = 'o';
                        count += 1;
                    }
                    else if (matrix[2][1] == '-'){
                        matrix[2][1] = 'o';
                        count += 1;
                    }
                }
            }
        }



    }
    else if (count == 5){
        bot_win();
        if (x3 != 100){
            matrix[x3][x4] = 'o';
            count += 1;
        }
        else{
            isDanger();
            if (x1 != 100){
                matrix[x1][x2] = 'o';
                count += 1;
            }
            else{
                if (matrix[0][1] == '-'){
                    matrix[0][1] = 'o';
                    count += 1;
                }
                else if (matrix[1][0] == '-'){
                    matrix[1][0] = 'o';
                    count += 1;
                }
                else if (matrix[1][2] == '-'){
                    matrix[1][2] = 'o';
                    count += 1;
                }
                else if (matrix[2][1] == '-'){
                    matrix[2][1] = 'o';
                    count += 1;
                }
            }
        }

    }
    else if (count == 6){
        bot_win();
        if (x3 != 100){
            matrix[x3][x4] = 'o';
            count += 1;
        }
        else{
            isDanger();
            if (x1 != 100){
                matrix[x1][x2] = 'o';
                count += 1;
            }
            else{
                flag = false;
                for (int i = 0; i < 3; i++){
                    if (flag){
                        break;
                    }
                    for (int j = 0; j < 3; j++){
                        if (matrix[i][j] == '-'){
                            matrix[i][j] = 'o';
                            count += 1;
                            flag = true;
                            break;
                        }
                    }
                }
            }
        }
    }
    else if (count == 7){
        bot_win();
        if (x3 != 100){
            matrix[x3][x4] = 'o';
            count += 1;
        }
        else{
            isDanger();
            if (x1 != 100){
                matrix[x1][x2] = 'o';
                count += 1;
            }
            else{
                if (matrix[0][1] == '-'){
                    matrix[0][1] = 'o';
                    count += 1;
                }
                else if (matrix[1][0] == '-'){
                    matrix[1][0] = 'o';
                    count += 1;
                }
                else if (matrix[1][2] == '-'){
                    matrix[1][2] = 'o';
                    count += 1;
                }
                else if (matrix[2][1] == '-'){
                    matrix[2][1] = 'o';
                    count += 1;
                }
                else{
                    flag = false;
                    for (int i = 0; i < 3; i++){
                        if (flag){
                            break;
                        }
                        for (int j = 0; j < 3; j++){
                            if (matrix[i][j] == '-'){
                                matrix[i][j] = 'o';
                                count += 1;
                                flag = true;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    else if (count == 8){
        bot_win();
        if (x3 != 100){
            matrix[x3][x4] = 'o';
            count += 1;
        }
        else{
            isDanger();
            if (x1 != 100){
                matrix[x1][x2] = 'o';
                count += 1;
            }
            else{
                if (matrix[0][1] == '-'){
                    matrix[0][1] = 'o';
                    count += 1;
                }
                else if (matrix[1][0] == '-'){
                    matrix[1][0] = 'o';
                    count += 1;
                }
                else if (matrix[1][2] == '-'){
                    matrix[1][2] = 'o';
                    count += 1;
                }
                else if (matrix[2][1] == '-'){
                    matrix[2][1] = 'o';
                    count += 1;
                }
            }
        }
    }
    else if (count == 9){
        flag = false;
        for (int i = 0; i < 3; i++){
            if (flag){
                break;
            }
            for (int j = 0; j < 3; j++){
                if (matrix[i][j] == '-'){
                    matrix[i][j] = 'o';
                    count += 1;
                    flag = true;
                    break;
                }
            }
        }
    }



}
void isDanger(){
    x1 = 100;
    x2 = 100;
    if (matrix[0][0] == 'x' && matrix[0][1] == 'x'){
        if (matrix[0][2] == '-'){
            x1 = 0;
            x2 = 2;
        }
    }
    if (matrix[0][1] == 'x' && matrix[0][2] == 'x'){
        if (matrix[0][0] == '-'){
            x1 = 0;
            x2 = 0;
        }

    }
    if (matrix[0][0] == 'x' && matrix[1][0] == 'x'){
        if (matrix[2][0] == '-'){
            x1 = 2;
            x2 = 0;
        }

    }
    if (matrix[1][0] == 'x' && matrix[2][0] == 'x'){
        if (matrix[0][0] == '-'){
            x1 = 0;
            x2 = 0;
        }

    }
    if (matrix[0][2] == 'x' && matrix[1][2] == 'x'){
        if (matrix[2][2] == '-'){
            x1 = 2;
            x2 = 2;
        }

    }
    if (matrix[1][2] == 'x' && matrix[2][2] == 'x'){
        if (matrix[0][2] == '-'){
            x1 = 0;
            x2 = 2;
        }

    }
    if (matrix[2][0] == 'x' && matrix[2][1] == 'x'){
        if (matrix[2][2] == '-'){
            x1 = 2;
            x2 = 2;
        }

    }
    if (matrix[2][1] == 'x' && matrix[2][2] == 'x'){
        if (matrix[2][0] == '-'){
            x1 = 2;
            x2 = 0;
        }

    }
    if (matrix[0][0] == 'x' && matrix[1][1] == 'x'){
        if (matrix[2][2] == '-'){
            x1 = 2;
            x2 = 2;
        }

    }
    if (matrix[1][1] == 'x' && matrix[2][2] == 'x'){
        if (matrix[0][0] == '-'){
            x1 = 0;
            x2 = 0;
        }

    }
    if (matrix[0][2] == 'x' && matrix[1][1] == 'x'){
        if (matrix[2][0] == '-'){
            x1 = 2;
            x2 = 0;
        }

    }
    if (matrix[2][0] == 'x' && matrix[1][1] == 'x'){
        if (matrix[0][2] == '-'){
            x1 = 0;
            x2 = 2;
        }

    }
    if (matrix[0][0] == 'x' && matrix[0][2] == 'x'){
        if (matrix[0][1] == '-'){
            x1 = 0;
            x2 = 1;
        }

    }
    if (matrix[0][0] == 'x' && matrix[2][0] == 'x'){
        if (matrix[1][0] == '-'){
            x1 = 1;
            x2 = 0;
        }

    }
    if (matrix[2][0] == 'x' && matrix[2][2] == 'x'){
        if (matrix[2][1] == '-'){
            x1 = 2;
            x2 = 1;
        }

    }
    if (matrix[0][2] == 'x' && matrix[2][2] == 'x'){
        if (matrix[1][2] == '-'){
            x1 = 1;
            x2 = 2;
        }

    }
    if (matrix[1][0] == 'x' && matrix[1][1] == 'x'){
        if (matrix[1][2] == '-'){
            x1 = 1;
            x2 = 2;
        }

    }
    if (matrix[1][1] == 'x' && matrix[1][2] == 'x'){
        if (matrix[1][0] == '-'){
            x1 = 1;
            x2 = 0;
        }

    }
    if (matrix[1][0] == 'x' && matrix[1][2] == 'x'){
        if (matrix[1][1] == '-'){
            x1 = 1;
            x2 = 1;
        }

    }
    if (matrix[0][1] == 'x' && matrix[1][1] == 'x'){
        if (matrix[2][1] == '-'){
            x1 = 2;
            x2 = 1;
        }

    }
    if (matrix[1][1] == 'x' && matrix[2][1] == 'x'){
        if (matrix[0][1] == '-'){
            x1 = 0;
            x2 = 1;
        }

    }
    if (matrix[0][1] == 'x' && matrix[2][1] == 'x'){
        if (matrix[1][1] == '-'){
            x1 = 1;
            x2 = 1;
        }

    }
}

bool win(){
    for (int i = 0; i < 3; i++){
        if ((matrix[0][i] == matrix[1][i]) &&  (matrix[1][i] == matrix[2][i]) && matrix[0][i] != '-'){
            return true;
        }
        if ((matrix[i][0] == matrix[i][1]) &&  (matrix[i][1] == matrix[i][2]) && matrix[i][0] != '-'){
            return true;
        }
        if (((matrix[0][0] == matrix[1][1]) &&  (matrix[1][1] == matrix[2][2]) && matrix[0][0] != '-') || ((matrix[0][2] == matrix[1][1]) &&  (matrix[1][1] == matrix[2][0]) && matrix[0][2] != '-')){
            return true;
        }
    }
    return false;
}
bool draw(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (matrix[i][j] == '-'){
                return false;
            }
        }
    }
    return true;
}
int main() {
    SetConsoleOutputCP(CP_UTF8);
    for (auto & i : matrix){
        for (char & j : i){
            j = '-';
        }
    }
    field_print();
    random();
    while (true){
        if (num == 0){
            bot();
            num = 1;
            field_print();
        }
        else{
            input();
            num = 0;
        }
        if (win()){
            if (num == 1){
                cout << "Бот выиграл";
            }
            else{
                cout << "Вы выиграли";
            }
            break;
        }
        if (draw()){
            cout << "Ничья";
            break;
        }

    }



    return 0;
}

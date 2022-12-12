#include <iostream>
using namespace std;

int main () {
    int n; 
    int amountmore, amountequal = 0;
    double a[40][40], sum;
    cout << "Введите количество строк и столбцов(до 40): ";
    cin >> n;

    cout << endl << "Ввод элементов первой матрицы: " << endl; 

    for (int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j){
            cout << "Введите элемент A: " << "[" << i+1 << "]" << "[" << j+1 << "]" << " : ";
            cin >> a[i][j];
        }
    for (int i = 0; i < n; ++i){
        sum = 0.0;
        for (int j = 0; j<n;++j)
            if (j != i)
                sum += abs (a[i][j]);
        sum = abs (a[i][i]) - sum;

        if (sum >= 0.0){
            amountequal +=1;
            if (sum > 0.0)  
                amountmore +=1;}
        }
    if (amountequal == n){
        if (amountmore >= 1)
            cout << "\n" "Матрица обладает свойством диагонального преобладания" << endl;}
    else
        cout << "\n" "Матрица не обладает свойством диагонального преобладания" << endl;
}

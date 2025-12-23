#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

const int ROWS = 2;
const int COLS = 2;

template <typename T>
void printMatrix(const vector<vector<T>> &matrix, const string &typeName)
{
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            cout << setw(15) << matrix[i][j];
        }
        cout << endl;
    }
}

template <typename T>
vector<vector<T>> multiplyMatrices(const vector<vector<T>> &A, const vector<vector<T>> &B)
{
    vector<vector<T>> result(ROWS, vector<T>(COLS, 0));
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            for (int k = 0; k < COLS; ++k)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return result;
}

int main()
{
    vector<vector<int>> int_A = {{1, 2}, {3, 4}};
    vector<vector<int>> int_B = {{5, 6}, {7, 8}};

    vector<vector<float>> float_A(ROWS, vector<float>(COLS));
    vector<vector<float>> float_B(ROWS, vector<float>(COLS));
    vector<vector<double>> double_A(ROWS, vector<double>(COLS));
    vector<vector<double>> double_B(ROWS, vector<double>(COLS));

    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            float_A[i][j] = static_cast<float>(int_A[i][j]);
            float_B[i][j] = static_cast<float>(int_B[i][j]);
            double_A[i][j] = static_cast<double>(int_A[i][j]);
            double_B[i][j] = static_cast<double>(int_B[i][j]);
        }
    }

    auto int_result = multiplyMatrices(int_A, int_B);
    printMatrix(int_result, "int");

    auto float_result = multiplyMatrices(float_A, float_B);
    printMatrix(float_result, "float");

    auto double_result = multiplyMatrices(double_A, double_B);
    printMatrix(double_result, "double");

    return 0;
}

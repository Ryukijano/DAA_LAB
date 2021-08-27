#include <iostream>

using namespace std;

void read_sq_matrix(int n, int m, int** &A, int** &B)
{
    A = new int*[n];
    B = new int*[m];
    cout<<"Enter the elements of the matrix A: "<<endl;
    for (int i = 0; i < n; i++)
    {
        A[i] = new int[m];
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    cout<<"Enter the elements of the matrix B: "<<endl;
    for (int i = 0; i < m; i++)
    {
        B[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> B[i][j];
        }
    }
}

void non_zero_elements(int n, int m, int** A, int** B)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] != 0 || B[j][i] != 0)
            {
                count++;
            }
        }
    }
    cout <<"The no of non-zero elements are"<< count << endl;
}

void sum_of_elements_above_leading_diagonal(int n, int m, int** A, int** B)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i > j)
            {
                sum += A[i][j] + B[j][i];
            }
        }
    }
    cout<<"The sum of elements above leading diagonals are :" << sum << endl;
}

void display_elements_below_minor_diagonal(int n, int m, int** A, int** B)
{
    int min = 1000000000;
    int min_i = 0;
    int min_j = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i < j && A[i][j] < min)
            {
                min = A[i][j];
                min_i = i;
                min_j = j;
            }
        }
    }
    cout<<"The elements below minor diagonal are :";
    cout << min << " " << min_i << " " << min_j << endl;
}

void product_diagonal_elenents(int n, int m, int** A, int** B)
{
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i == j)
            {
                product *= A[i][j] * B[j][i];
            } 

        }
    }
    cout<<"The product of the diagonal elements is:";
    cout << product << endl;
}

int main()
{
    int n, m;
    cout<<"Enter the number of rows and columns of the matrix A: ";
    cin>>n>>m;
    int** A = new int*[n];
    int** B = new int*[m];
    read_sq_matrix(n, m, A, B);
    non_zero_elements(n, m, A, B);
    sum_of_elements_above_leading_diagonal(n, m, A, B);
    display_elements_below_minor_diagonal(n, m, A, B);
    product_diagonal_elenents(n, m, A, B);
    return 0;
}




   
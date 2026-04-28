#include<iostream>
using namespace std;

// Function to multiply two matrix
void multiply( int matrix1 [3][3], int matrix2 [3][3], int result[3][3])
{
    // initilize the result of matrix
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            result[i][j]=0;
        }
    }
    // multipply matrix
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                result[i][j] += matrix1[i][k]* matrix2[k][j];
            }
        }
    }
}

void display(int matrix[3][3])
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<< matrix[i][j]<< " ";
        }
        cout<<endl;
    }



}

int main()
{
    int mat1[3][3], mat2[3][3], result[3][3];

    //   input elements
    cout<<" Input elements for First matrix "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>mat1[i][j];
        }
    }

    cout<<" Input elements for second matrix "<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>mat2[i][j];
        }
    }

    multiply(mat1, mat2, result);

    cout<< "result after multiplication "<<endl;
    display(result);



    return 0;
}

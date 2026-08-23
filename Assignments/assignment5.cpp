#include <iostream>
using namespace std;

class spare
{
    int rows, coloum;
    float matrix[10][10];
    float sparematrix[20][3];
    int nonzero;
    float sum;

public:
    void setmatrix()
    {
        cout << "Enter number of rows:";
        cin >> rows;

        cout << "Enter number of coloum:";
        cin >> coloum;

        cout << "Enter matrix elements:\n";
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < coloum; j++)
            {
                cin >> matrix[i][j];
            }
        }

        cout << "\nNormal Matrix\n";
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < coloum; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    void countnonzero()
    {
        nonzero = 0;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < coloum; j++)
            {
                if (matrix[i][j] != 0)
                {
                    nonzero++;
                }
            }
        }
    }

    void spere()
    {
        int k = 0;

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < coloum; j++)
            {
                if (matrix[i][j] != 0)
                {
                    sparematrix[k][0] = i;
                    sparematrix[k][1] = j;
                    sparematrix[k][2] = matrix[i][j];

                    k++;
                }
            }
        }
    }

    void displaysparematrix()
    {
        cout << "\nSparse Matrix\n";
        cout << "Student\tSubject\tMarks\n";

        for (int i = 0; i < nonzero; i++)
        {
            cout << sparematrix[i][0] + 1 << "\t"
                 << sparematrix[i][1] + 1 << "\t"
                 << sparematrix[i][2] << endl;
        }
    }

    void subjectwiseavg()
    {
        float highestavg = 0;
        int highestSubject = -1;
        cout << "\nSubject wise average\n";

        for (int i = 0; i < coloum; i++)
        {
            float sum = 0;
            int count = 0;

            for (int j = 0; j < nonzero; j++)
            {
                if (sparematrix[j][1] == i)
                {
                    sum = sum + sparematrix[j][2];
                    count++;
                }
            }

            if (count > 0)
            {
                float average = sum / count;
                cout << "Average of subject " << i + 1
                     << " = " << average << endl;

                if (average > highestavg)
                {
                    highestavg = average;
                    highestSubject = i;
                }
            }
        }
        cout << "\nSubject with highest average: "
             << highestSubject + 1 << endl;

        cout << "Highest average: "
             << highestavg << endl;
    }

    void stu_w_high_garde()
{
    float max = sparematrix[0][2];

    // Find highest grade
    for(int i = 1; i < nonzero; i++)
    {
        if(sparematrix[i][2] > max)
        {
            max = sparematrix[i][2];
        }
    }

    
    cout << "\nHighest Grade: " << max << endl;

    cout << "Students with highest grade:\n";

    for(int i = 0; i < nonzero; i++)
    {
        if(sparematrix[i][2] == max)
        {
            cout << "Student "
                 << sparematrix[i][0] + 1 << endl;
        }
    }
}
};

int main()
{
    spare s;
    s.setmatrix();
    s.countnonzero();
    s.spere();
    s.displaysparematrix();

    s.subjectwiseavg();
    s.stu_w_high_garde();
}

#include <iostream>

#include<vector>

using namespace std;

int main()
{

    vector< vector<int> >matrix;

    int value;

    for(int i=0; i<3; i++)
    {

        vector<int> row;

        for(int j=0; j<3; j++)
        {

            cin>>value;

            row.push_back(value);



        }

        matrix.push_back(row);

    }

    for(int i=0; i<3; i++)
    {

        for(int j=0; j<3; j++)
        {

            cout<<matrix[i][j]<<" ";

        }

        cout<<endl;

    }

    return 0;

}

#include<iostream>
using namespace std;
int** creat2DArray(const int &height,const int &width)
{
    int **array=new int*[height];
    for(int i=0;i<height;i++)
    {
        array[i]=new int[width];
    }
    return array;
}

void populateArray(int **array,const int &height,const int &width)
{
    for(int i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
            cout<<"请输入array["<<i<<"]["<<j<<"]的值:";
            cin>>array[i][j];
        }
    }
}

void displayArray(int** array, const int &height,const int &width) {
    std::cout << "数组内容：" << std::endl;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void deallocateArray(int **array,int height)
{
    for(int i=0;i<height;i++)
    {
        delete[] array[i];
    }
    delete[] array;
}

int main()
{
    int height,width;
    cin>>height>>width;
    int **array=creat2DArray(height,width);
    populateArray(array,height,width);
    displayArray(array,height,width);
    deallocateArray(array,height);
    return 0;
}
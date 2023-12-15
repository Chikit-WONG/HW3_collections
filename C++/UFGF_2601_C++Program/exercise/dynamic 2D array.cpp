#include <iostream>

// 动态创建二维数组的函数
int **create2DArray(int height, int width)
{
    int **array = new int *[height]; // 创建一个指针数组

    for (int i = 0; i < height; i++)
    {
        array[i] = new int[width]; // 创建每一行的整数数组
    }

    return array;
}

// 填充数组的函数
void populateArray(int **array, int height, int width)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            std::cout << "请输入 array[" << i << "][" << j << "] 的值：";
            std::cin >> array[i][j];
        }
    }
}

// 显示数组的函数
void displayArray(int **array, int height, int width)
{
    std::cout << "数组内容：" << std::endl;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// 释放数组内存的函数
void deallocateArray(int **array, int height)
{
    for (int i = 0; i < height; i++)
    {
        delete[] array[i]; // 释放每一行的内存
    }
    delete[] array; // 释放指针数组的内存
}

int main()
{
    int height, width;

    // 从用户获取行数和列数
    std::cout << "请输入行数：";
    std::cin >> height;
    std::cout << "请输入列数：";
    std::cin >> width;

    // 动态创建二维数组
    int **array = create2DArray(height, width);

    // 填充数组的值
    populateArray(array, height, width);

    // 显示数组内容
    displayArray(array, height, width);

    // 释放数组内存
    deallocateArray(array, height);

    return 0;
}
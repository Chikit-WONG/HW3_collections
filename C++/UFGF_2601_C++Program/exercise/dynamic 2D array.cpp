#include <iostream>

// ��̬������ά����ĺ���
int **create2DArray(int height, int width)
{
    int **array = new int *[height]; // ����һ��ָ������

    for (int i = 0; i < height; i++)
    {
        array[i] = new int[width]; // ����ÿһ�е���������
    }

    return array;
}

// �������ĺ���
void populateArray(int **array, int height, int width)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            std::cout << "������ array[" << i << "][" << j << "] ��ֵ��";
            std::cin >> array[i][j];
        }
    }
}

// ��ʾ����ĺ���
void displayArray(int **array, int height, int width)
{
    std::cout << "�������ݣ�" << std::endl;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// �ͷ������ڴ�ĺ���
void deallocateArray(int **array, int height)
{
    for (int i = 0; i < height; i++)
    {
        delete[] array[i]; // �ͷ�ÿһ�е��ڴ�
    }
    delete[] array; // �ͷ�ָ��������ڴ�
}

int main()
{
    int height, width;

    // ���û���ȡ����������
    std::cout << "������������";
    std::cin >> height;
    std::cout << "������������";
    std::cin >> width;

    // ��̬������ά����
    int **array = create2DArray(height, width);

    // ��������ֵ
    populateArray(array, height, width);

    // ��ʾ��������
    displayArray(array, height, width);

    // �ͷ������ڴ�
    deallocateArray(array, height);

    return 0;
}
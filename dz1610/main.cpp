#include <iostream>
#include <Windows.h>
#include <cstdlib>

void zadanie1(int arr[], const int size)
{

    int minnum, maxnum;

    for (int j = 0; j < size; j++)
    {
        arr[j] = rand() % 5 + 5;
        std::cout << arr[j] << "\t";
    }

    minnum = arr[0];
    maxnum = arr[0];

    for (int j = 0; j < size; j++)
    {
        if (arr[j] < minnum)
        {
            minnum = arr[j];
        }
        if (arr[j] > maxnum)
        {
            maxnum = arr[j];
        }
    }
    std::cout << std::endl << "����������� ����� = " << minnum << std::endl << "������������ ����� = " << maxnum << std::endl;
}

void zadanie2(int arr[], const int size)
{
    int ot, ado, sum, znach;
    sum = 0;
    std::cout << "������� �� ������� ����� ����������� ������: ";
    std::cin >> ot;
    std::cout << "������� �� ������� ����� ����������� ������: ";
    std::cin >> ado;
    ado = ado + 1 - ot;
    std::cout << "������� �������� ������������� ��������: ";
    std::cin >> znach;
    for (int j = 0; j < size; j++)
    {
        arr[j] = rand() % ado + ot;
        std::cout << arr[j] << "\t";
        if (arr[j] <= znach)
        {
            sum += arr[j];
        }
    }
    std::cout << std::endl << "����� ��������� �� ������������� ��������: " << sum << std::endl;
}


void zadanie3(int arr3[], const int size3)
{

    for (int j = 0; j < size3; j++)
    {
        std::cout << "������� ������� ����� �� " << j + 1 << " �����: ";
        std::cin >> arr3[j];
    }

    int minnum, maxnum;
    int ot, ado;
    int minmes = 0;
    int maxmes = 0;
    minnum = arr3[0];
    maxnum = arr3[0];

    std::cout << "\n������� ����� ������ ��: ";
    std::cin >> ot;
    std::cout << "\n������� ����� ������ ��: ";
    std::cin >> ado;

    for (int i = 0; ot <= ado; i++, ot++)
    {
        if (arr3[i] < minnum)
        {
            minnum = arr3[i];
            minmes = i;
        }
        if (arr3[i] > maxnum)
        {
            maxnum = arr3[i];
            maxmes = i;
        }
    }
    std::cout << "\n����� � ������� ���� ����������� �������: " << minmes << "\n����� � ������ ���� ������������ �������: " << maxmes + 1;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    const int size = 5;
    int arr[size];

    const int size3 = 12;
    int arr3[size3];

    zadanie1(arr, size);
    zadanie2(arr, size);
    zadanie3(arr, size);

	return 0;
}
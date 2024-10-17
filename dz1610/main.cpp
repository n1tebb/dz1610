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
    std::cout << std::endl << "ћинимальное число = " << minnum << std::endl << "ћаксимальное число = " << maxnum << std::endl;
}

void zadanie2(int arr[], const int size)
{
    int ot, ado, sum, znach;
    sum = 0;
    std::cout << "¬ведите от скольки будет заполн€тьс€ массив: ";
    std::cin >> ot;
    std::cout << "¬ведите до скольки будет заполн€тьс€ массив: ";
    std::cin >> ado;
    ado = ado + 1 - ot;
    std::cout << "¬ведите значение максимального элемента: ";
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
    std::cout << std::endl << "—умма элементов до максимального значени€: " << sum << std::endl;
}


void zadanie3(int arr3[], const int size3)
{

    for (int j = 0; j < size3; j++)
    {
        std::cout << "¬ведите прибыль фирмы за " << j + 1 << " мес€ц: ";
        std::cin >> arr3[j];
    }

    int minnum, maxnum;
    int ot, ado;
    int minmes = 0;
    int maxmes = 0;
    minnum = arr3[0];
    maxnum = arr3[0];

    std::cout << "\n¬ведите номер мес€ц€ от: ";
    std::cin >> ot;
    std::cout << "\n¬ведите номер мес€ц€ до: ";
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
    std::cout << "\nћес€ц в котором была минимальна€ прибыль: " << minmes << "\nћес€ц в ктором была максимальна€ прибыль: " << maxmes + 1;
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
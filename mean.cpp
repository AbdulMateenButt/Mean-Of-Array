#include <iostream>
using namespace std;
double mean(int *list, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + list[i];
    }
    return sum / size;
}
void display()
{
    int size;
    cout << "Enter size of list array: ";
    cin >> size;
    int list[size];
    cout << "Enter elements of list array: " << '\n';
    for (int i = 0; i < size; i++)
    {
        cin >> list[i];
    }
    int result = mean(list, size);
    cout << "Sum Of Elements is " << result;
}
int main()
{
    display();
}
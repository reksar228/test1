#include "f1.h"
using namespace std;

void main() {
    setlocale(LC_ALL, "Russian");
    int numCities;
    cout << "������� ���������� �������: ";
    cin >> numCities;
    vector<City> cities(numCities);
    cout << "������� ���������� ������� (x y):\n";
    for (int i = 0; i < numCities; ++i) {
        cin >> cities[i].x >> cities[i].y;
    }
    // ��������� ����������� ����������
    int optimalDistance = findOptimalRoute(cities, 0, 1, 0);
    cout << "����������� ����������: " << optimalDistance << endl;
}
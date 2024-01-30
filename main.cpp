#include <iostream>
#include <vector>
#include <string>

using namespace std;


struct Train {
    string number;
    string departureTime;
    string destinationStation;
};

int main() {
    system("chcp 1251");
    system("cls");
    vector<Train> trains; 
    int choice;

    do {
        cout << "����:" << endl;
        cout << "1. ������ ����� ����" << endl;
        cout << "2. �������� ���������� ��� �� �����" << endl;
        cout << "3. ����� � ��������" << endl;
        cout << "������� �����: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            Train newTrain;
            cout << "����� �����: ";
            cin >> newTrain.number;
            cout << "��� �����������: ";
            cin >> newTrain.departureTime;
            cout << "������� �����������: ";
            cin >> newTrain.destinationStation;

            trains.push_back(newTrain); 
            break;
        }
        case 2: {
            cout << "���������� ��� �� �����:" << endl;
            for (const auto& train : trains) {
                cout << "�����: " << train.number << ", ��� �����������: " << train.departureTime
                    << ", �����������: " << train.destinationStation << endl;
            }
            break;
        }
        case 3:
            cout << "�� ���������!" << endl;
            break;
        default:
            cout << "������� ����. ���� �����, ������� ���� �����." << endl;
        }
    } while (choice != 3);

    return 0;
}

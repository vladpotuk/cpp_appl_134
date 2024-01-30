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
        cout << "Меню:" << endl;
        cout << "1. Додати новий поїзд" << endl;
        cout << "2. Показати інформацію про всі поїзди" << endl;
        cout << "3. Вийти з програми" << endl;
        cout << "Виберіть опцію: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            Train newTrain;
            cout << "Номер поїзда: ";
            cin >> newTrain.number;
            cout << "Час відправлення: ";
            cin >> newTrain.departureTime;
            cout << "Станція призначення: ";
            cin >> newTrain.destinationStation;

            trains.push_back(newTrain); 
            break;
        }
        case 2: {
            cout << "Інформація про всі поїзди:" << endl;
            for (const auto& train : trains) {
                cout << "Номер: " << train.number << ", Час відправлення: " << train.departureTime
                    << ", Призначення: " << train.destinationStation << endl;
            }
            break;
        }
        case 3:
            cout << "До побачення!" << endl;
            break;
        default:
            cout << "Невірний вибір. Будь ласка, виберіть іншу опцію." << endl;
        }
    } while (choice != 3);

    return 0;
}

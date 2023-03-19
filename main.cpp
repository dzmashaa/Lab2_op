#include "functions.h"

int main() {
    string first_file = "timetable.bin";
    string second_file = "winter_timetable.bin";
    createFile(first_file);
    cout << "TIMETABLE:"<< endl;
    printFile(first_file);
    createNewFile( first_file,  second_file);
    cout << "WINTER TIMETABLE:"<< endl;
    printFile(second_file);
    short choice;
    do {
        cout << "\nIf you want to add data, press 1";
        cin >> choice;
        if(choice == 1) {
            addData(first_file);
            cout << "TIMETABLE:" << endl;
            printFile(first_file);
            createNewFile(first_file, second_file);
            cout << "WINTER TIMETABLE:" << endl;
            printFile(second_file);
        }
    }while(choice == 1);
    return 0;
}

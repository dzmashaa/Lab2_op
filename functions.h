#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

struct time;
struct timetable;

void createFile(string); // створення файлу
void createNewFile(string, string); // створення нового файлу
void printRecord(timetable&); // вивід рейсу
void addData(string); // додати дані в вхідний файл
void dataInput(ofstream&); // ввід тексту
int input_minute(string);
int input_hour(string);
int input_number();
void printFile(string);
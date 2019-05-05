#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <array>
#define SIZE 5
using namespace std;
struct files {
	string path;
	int size = 0;
	int numberOfPage;
	struct {
		string name;
		string surname;
		string username;
		string email;
		int birthday;
	}  author;
	struct {
		int year;
		int month;
		int day;
		int hour;
		int minute;
		int second;
	}createtOn;
};

int size = 3;
files buffer[5]; // Buffer dizisi tanÄ±mlandÄ±
files ogr[5]; // TÃ¼m verilerin tutulduÄŸu dizi tanÄ±mlandÄ±.
int storage[5] = { 0,0,0,0,0 };
void readFromFile() { // Dosya iÃ§eriÄŸini okuyan fonksiyon.
	fstream file;
	int i = 0;
	string filename;
	// filename of the file 
	filename = "a.txt";
	// opening file 
	char data[50], data2[50], data3[50];
	int count = 1;
	file.open(filename.c_str());
	// extracting words form the file 
	while (!file.eof())
	{
		file >> ogr[i].path;
		file >> ogr[i].size;
		file >> ogr[i].numberOfPage;
		file >> ogr[i].author.name;
		file >> ogr[i].author.surname;
		file >> ogr[i].author.username;
		file >> ogr[i].author.email;
		file >> ogr[i].author.birthday;
		file >> ogr[i].createtOn.year;
		file >> ogr[i].createtOn.month;
		file >> ogr[i].createtOn.day;
		file >> ogr[i].createtOn.hour;
		file >> ogr[i].createtOn.minute;
		file >> ogr[i].createtOn.second;
		i++;
	}
}
int k = 0;
int kalanYazdirma = 0;
int kalanOkuma = size;
int readPoint = 0;
int printPoint = 0;
bool full = false;
bool finishedPrint = false;
string fillBuffer() {
	for (int k = 0; k<5; k++) { // BOÅ MU DOLU MU KONTROLU
		if (storage[k] == 1) {full =  true; continue; }
		else { full = false; break; }
	} // KONTROL BITTI
	if (kalanOkuma == 0) return "KuyruÄŸa eklenecek eleman yok.";
	if (full == false) {
		for (int i = readPoint; i<5; i++) {
			if (storage[i] == 0) {
				buffer[i].path = ogr[k].path;
				storage[i] = 1;
				kalanYazdirma++;
				kalanOkuma--;
				readPoint = i;
				k++;
				return ogr[i].path;
			}
			else { readPoint = 0; continue; }
		}
	}
	else { return "Buffer full."; }
}

string printDoc() {
	for (int k = 0; k<5; k++) { // BOÅ MU DOLU MU KONTROLU
		if (storage[k] == 0) finishedPrint = true;
		else { finishedPrint = false; break; }
	}
	if (finishedPrint == false) {
		for (int i = printPoint; i<5; i++) {
			if (storage[i] == 1) {
				buffer[i].path = "";
				storage[i] = 0;
				kalanYazdirma--;
				printPoint++;
				if (printPoint > 4) printPoint = 0;
				return ogr[i].path;
			}
			else { printPoint++;continue; }
		}
	}
	else { return "Printed All Files."; }
}

int main() {
	cout << "READING" << endl;
	readFromFile();
	int sc = 2;
	do {

		if (sc % 2 == 0) {
			for (int k = 0; k<5; k++) { // BOÅ MU DOLU MU KONTROLU
				cout << storage[k]; //
			}
			Sleep(1000);
			string dgr = fillBuffer();
			// KONTROL BITTI
			if (dgr == "Buffer full.") {
				cout << endl << sc << ".s" << " Buffer full." << endl;
			}
			else if (dgr == "KuyruÄŸa eklenecek eleman yok.") {
				cout << "KuyruÄŸa eklenecek eleman yok.";
			}
			else {
				cout << endl << sc << ".s" << " pc " << dgr << " gonderdi." << endl;
			}
		}

		if (sc % 5 == 0) {
			for (int k = 0; k<5; k++) { // BOÅ MU DOLU MU KONTROLU
				cout << storage[k]; //
			}
			string d = printDoc();
			// KONTROL BITTI
			if (d == "Printed All Files.") {
				cout << endl << sc << ".s" << " Printed All Files." << endl;
			}
			else {
				cout << endl << sc << ".s" << d << " yazdirdi." << endl;
			}
		}
		sc++;
	} while (finishedPrint == false);


	cout << "FINISHED" << endl;
	return 0;
}

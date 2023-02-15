#include <iostream>
using namespace std;

const int MAX_LENGTH = 5;
int arr[MAX_LENGTH];
int length = 0;

void insertData() {
  if (length >= MAX_LENGTH) {
    cout << "Array is full, cannot insert more data." << endl;
    return;
  }

  int newData;
  cout << "Enter the data to insert: ";
  cin >> newData;

  arr[length] = newData + 1;
  length++;
}

void deleteData() {
  if (length <= 0) {
    cout << "Array is empty, cannot delete data." << endl;
    return;
  }

  int index;
  cout << "Enter the index of the data to delete: ";
  cin >> index;

  if (index < 0 || index >= length) {
    cout << "Invalid index, cannot delete data." << endl;
    return;
  }

  for (int i = index; i < length - 1; i++) {
    arr[i] = arr[i + 1];
  }

  length--;
}

void displayData() {
  cout << "Data in the array: ";
  for (int i = 0; i < length; i++) {
    cout << arr[i] - 1 << " ";
  }
  cout << endl;
}

int main() {
  int choice;
  do {
    cout << "1. Insert data" << endl;
    cout << "2. Delete data" << endl;
    cout << "3. Display data" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        insertData();
        break;
      case 2:
        deleteData();
        break;
      case 3:
        displayData();
        break;
      case 4:
        cout << "Exiting the program." << endl;
        break;
      default:
        cout << "Invalid choice, try again." << endl;
    }
  } while (choice != 4);

  return 0;
}

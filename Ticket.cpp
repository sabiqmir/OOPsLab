// Cinema Seat Reservation System
#include <iostream>
using namespace std;

const int ROWS = 5;
const int COLS = 5;

void showSeats(char seats[ROWS][COLS]) {
    cout << "\nSeating Chart (O = free, X = booked):\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    char seats[ROWS][COLS];

    // initialize all seats as free
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            seats[i][j] = 'O';
        }
    }

    int choice, row, col;
    do {
        cout << "\n--- Cinema Seat Reservation ---\n";
        cout << "1. Book a Seat\n";
        cout << "2. Cancel a Seat\n";
        cout << "3. Show Seating Chart\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter row and column (0-" << ROWS-1 << "): ";
                cin >> row >> col;
                if (seats[row][col] == 'O') {
                    seats[row][col] = 'X';
                    cout << "Seat booked successfully!\n";
                } else {
                    cout << "Seat already booked.\n";
                }
                break;
            case 2:
                cout << "Enter row and column (0-" << ROWS-1 << "): ";
                cin >> row >> col;
                if (seats[row][col] == 'X') {
                    seats[row][col] = 'O';
                    cout << "Booking cancelled.\n";
                } else {
                    cout << "Seat is already free.\n";
                }
                break;
            case 3:
                showSeats(seats);
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}

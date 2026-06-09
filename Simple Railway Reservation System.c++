#include <iostream>
using namespace std;

class RailwayReservation {
    int availableSeats;

public:
    RailwayReservation() {
        availableSeats = 50;
    }

    void bookTicket() {
        int seats;
        cout << "Enter number of seats to book: ";
        cin >> seats;

        if (seats <= availableSeats) {
            availableSeats -= seats;
            cout << "Ticket Booked Successfully!\n";
            cout << "Remaining Seats: " << availableSeats << endl;
        } else {
            cout << "Seats Not Available!\n";
        }
    }

    void cancelTicket() {
        int seats;
        cout << "Enter number of seats to cancel: ";
        cin >> seats;

        availableSeats += seats;
        cout << "Ticket Cancelled Successfully!\n";
        cout << "Available Seats: " << availableSeats << endl;
    }

    void checkAvailability() {
        cout << "Available Seats: " << availableSeats << endl;
    }
};

int main() {
    RailwayReservation train;
    int choice;

    do {
        cout << "\n===== RAILWAY RESERVATION SYSTEM =====\n";
        cout << "1. Book Ticket\n";
        cout << "2. Cancel Ticket\n";
        cout << "3. Check Seat Availability\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                train.bookTicket();
                break;
            case 2:
                train.cancelTicket();
                break;
            case 3:
                train.checkAvailability();
                break;
            case 4:
                cout << "Thank You!\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}

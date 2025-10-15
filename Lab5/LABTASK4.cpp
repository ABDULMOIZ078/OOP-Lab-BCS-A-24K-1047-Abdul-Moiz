#include <iostream>
using namespace std;

class CallRecord {
private:
    string callerID;
    int durationMinutes;
    static int totalCalls;

public:
    CallRecord(string id = "", int d = 0) {
        callerID = id;
        durationMinutes = d;

        if (id != "" && d > 0)
            totalCalls++;
    }

    void displayRecord() {
        cout << "Caller ID: " << callerID << endl;
        cout << "Duration: " << durationMinutes << " min" << endl;
    }

    static int getTotalCalls() {
        return totalCalls;
    }
};

int CallRecord::totalCalls = 0;

int main() {
    const int s = 20;
    CallRecord calls[s] = {
        CallRecord("032341234567", 5),
        CallRecord("030432876543", 8),
        CallRecord("03324567890", 3),
        CallRecord("03441122334", 10),
        CallRecord("03441122334", 60),
        CallRecord("03423322334", 56)
    };

    for (int i = 0; i < 6; i++) {
        calls[i].displayRecord();
    }

    cout << "\nTotal calls logged today: " << CallRecord::getTotalCalls() << endl;
    return 0;
}

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    int timer = 0;

    while (timer < 9) {
        switch (timer % 3) {
            case 0:
                cout << "Traffic light is RED" << endl;
                break;
            case 1:
                cout << "Traffic light is YELLOW" << endl;
                break;
            case 2:
                cout << "Traffic light is GREEN" << endl;
                break;
        }

        this_thread::sleep_for(chrono::seconds(1));
        timer++;
    }

    cout << "Traffic light simulation ended after 9 iterations." << endl;

    return 0;
}

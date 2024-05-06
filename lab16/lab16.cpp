#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Magazine {
private:
    string title;
    string publisher;
    int year;
    int pageCount;

public:

    Magazine(string t, string p, int y, int pc) : title(t), publisher(p), year(y), pageCount(pc) {}


    void display() const {
        cout << "Title: " << title << ", Publisher: " << publisher << ", Year: " << year << ", Page Count: " << pageCount << endl;
    }


    int getYear() const {
        return year;
    }

    string getPublisher() const {
        return publisher;
    }
};

int main() {

    vector<Magazine> magazines = {
        Magazine("Magazine1", "PublisherA", 2020, 50),
        Magazine("Magazine2", "PublisherB", 2021, 60),
        Magazine("Magazine3", "PublisherA", 2019, 70),
        Magazine("Magazine4", "PublisherC", 2022, 80)
    };


    string desiredPublisher = "PublisherA";
    cout << "Magazines published by " << desiredPublisher << ":" << endl;
    for (const auto& mag : magazines) {
        if (mag.getPublisher() == desiredPublisher) {
            mag.display();
        }
    }


    int desiredYear = 2020;
    cout << "\nMagazines published after " << desiredYear << ":" << endl;
    for (const auto& mag : magazines) {
        if (mag.getYear() > desiredYear) {
            mag.display();
        }
    }

    return 0;
}

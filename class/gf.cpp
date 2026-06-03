#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
void emojiSpam() {
    string emojis[] = {"😂", "😡", "🙄", "🥺", "💀", "😤", "😒", "🤡", "🔥", "😑"};
    int n = rand() % 15 + 5;

    cout << "GF: ";
    for (int i = 0; i < n; i++) {
        cout << emojis[rand() % 10] << " ";
    }
    cout << "\n";
}

int main() {
    srand(time(0));
    string msg;
    cout << "💬 Chat with GF started...\n";
    cout << "Type your messages (type 'bye' to end):\n\n";
    while (true) {
        cout << "You: ";
        getline(cin, msg);

        if (msg == "bye") {
            cout << "\nGF: hmm... okay bye 😐\n";
            break;
        }
        int mood = rand() % 5;
        if (msg.find("love") != string::npos) {
            cout << "GF: Awww 🥺❤️\n";
        } 
        else if (msg.find("sorry") != string::npos) {
            cout << "GF: Hmm... dekha jabe 😒\n";
        }
        else if (msg.find("where") != string::npos) {
            cout << "GF: FBI naki? 😑\n";
        }
        else if (mood == 0) {
            emojiSpam();
        }
        else {
            cout << "GF: hmm...\n";
        }
    }
    cout << "\n📵 You are BLOCKED!\n";
    cout << "Reason: Emoji spam tolerate korte parlam na 😤\n";
    return 0;
}
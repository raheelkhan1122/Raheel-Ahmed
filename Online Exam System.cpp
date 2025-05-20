#include <iostream>
#include <vector>
#include <string>
using namespace std;
class User {
private:
    string username;
    string password;

public:
    User() {
        username = "student";
        password = "12345";
    }

    bool login() {
        string inputUser, inputPass;
        cout << "---- Student Login ----" << endl;
        cout << "Username: ";
        cin >> inputUser;
        cout << "Password: ";
        cin >> inputPass;

        if (inputUser == username && inputPass == password) {
            cout << "Login successful!\n\n";
            return true;
        } else {
            cout << "Invalid credentials!\n";
            return false;
        }
    }
};
class Question {
private:
    string questionText;
    string options[4];
    char correctOption;

public:
    Question(string qText, string opt1, string opt2, string opt3, string opt4, char correct) {
        questionText = qText;
        options[0] = opt1;
        options[1] = opt2;
        options[2] = opt3;
        options[3] = opt4;
        correctOption = correct;
    }

    void displayQuestion() {
        cout << questionText << endl;
        cout << "A. " << options[0] << endl;
        cout << "B. " << options[1] << endl;
        cout << "C. " << options[2] << endl;
        cout << "D. " << options[3] << endl;
    }

    bool checkAnswer(char answer) {
        return (toupper(answer) == correctOption);
    }
};
class Exam {
private:
    vector<Question> questions;
    int score;

public:
    Exam() {
        score = 0;
    
        questions.push_back(Question("What is the capital of France?", "Berlin", "London", "Paris", "Madrid", 'C'));
        questions.push_back(Question("Which language is used for OOP?", "Python", "HTML", "CSS", "SQL", 'A'));
        questions.push_back(Question("What is 5 + 3?", "5", "8", "6", "10", 'B'));
        questions.push_back(Question("Which one is a loop in C++?", "if", "for", "switch", "break", 'B'));
        questions.push_back(Question("What is the extension of C++ file?", ".txt", ".cpp", ".doc", ".html", 'B'));
    }

    void startExam() {
        char answer;
        cout << "---- Exam Started ----\n";
        for (int i = 0; i < questions.size(); i++) {
            cout << "\nQuestion " << i + 1 << ":\n";
            questions[i].displayQuestion();
            cout << "Your answer (A/B/C/D): ";
            cin >> answer;

            if (questions[i].checkAnswer(answer)) {
                cout << "Correct!\n";
                score++;
            } else {
                cout << "Wrong!\n";
            }
        }

        cout << "\n---- Exam Finished ----\n";
        cout << "Your Score: " << score << " out of " << questions.size() << endl;
    }
};
int main() {
    User student;
    if (student.login()) {
        Exam exam;
        exam.startExam();
    } else {
        cout << "Exiting program...\n";
    }

    return 0;
}

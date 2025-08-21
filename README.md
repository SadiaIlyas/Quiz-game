**🎯 Quiz Game in C++**


**📌Overview**
This project is a Console-based Quiz Game built using C++.
It allows users to select from different topics (HTML, CSS, C++, Python) and then answer 10 multiple-choice questions from the chosen category.
The program uses Structures (struct) to store questions, options, and answers, ensuring a clean and organized implementation.

**🚀 Features**

✅ Four quiz categories: HTML, CSS, C++, and Python
✅ 10 questions per category
✅ Multiple-choice format (A/B/C/D)
✅ Instant feedback (Correct / Wrong with correct answer)
✅ Final score display at the end of the quiz
✅ Reusable functions for better structure

**🛠️ Technologies Used**
1-C++ (Core language)
2-Standard Template Library (STL)
3-Basic Console I/O

**📂 Project Structure**
📦 Quiz-Game
 ┣ 📜 main.cpp        # Main source code
 ┣ 📜 README.md       # Documentation (this file)

**🎮 How to Play**

Run the program.

Choose a quiz category (HTML / CSS / C++ / Python).
Answer the 10 multiple-choice questions by typing A, B, C, or D.
Get instant feedback for each answer.
View your final score at the end.

**📸 Example Gameplay**
*** Welcome to Quiz Game ***
Select the topic for quiz
1) HTML
2) CSS
3) C++
4) Python
Choose (1/2/3/4): 1

*** HTML QUIZ ***

Q1. Which is a block-level element?
A) div
B) span
C) a
D) img
Your answer (A/B/C/D): A
✅ Correct!
...
===== Quiz Finished =====
Your Score: 8 / 10

**🧩 Code Highlights**
Struct for Question:
struct Question {
    string text;
    string options[4];
    char correct;
};
**Function to start quiz:**
void startQuiz(Question quiz[], int n);
Separate functions to load questions for each category:
void loadHTML(Question q[]);
void loadCSS(Question q[]);
void loadCPP(Question q[]);
void loadPython(Question q[]);

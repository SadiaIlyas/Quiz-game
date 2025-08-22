#include <iostream>
#include <string>
using namespace std;
struct Question {
    string text;
    string options[4];
    char correct; 
};
void startQuiz(Question quiz[], int n) {
    int score = 0;
    char ans;
    for (int i = 0; i < n; i++) {
        cout << "\nQ" << i+1 << ". " << quiz[i].text << "\n";
        cout << "A) " << quiz[i].options[0] << "\n";
        cout << "B) " << quiz[i].options[1] << "\n";
        cout << "C) " << quiz[i].options[2] << "\n";
        cout << "D) " << quiz[i].options[3] << "\n";
        cout << "Your answer (A/B/C/D): ";
        cin >> ans;
        if (toupper(ans) == quiz[i].correct) {
            cout << "? Correct!\n";
            score++;
        } else {
            cout << "? Wrong! Correct is " << quiz[i].correct << "\n";
        }
    }
    cout << "\n===== Quiz Finished =====\n";
    cout << "Your Score: " << score << " / " << n << "\n";
}
void loadHTML(Question q[]) {
    q[0]  = {"Block-level element?", {"div","span","a","img"}, 'A'};
    q[1]  = {"Semantic element?", {"article","b","i","font"}, 'A'};
    q[2]  = {"HTML5 doctype?", {"<!DOCTYPE html>","<!DOCTYPE HTML5>","<!doctype5>","<!HTML5>"}, 'A'};
    q[3]  = {"Main content tag?", {"section","main","body","aside"}, 'B'};
    q[4]  = {"Email input type?", {"email","text","mail","address"}, 'A'};
    q[5]  = {"New tab target?", {"_self","_blank","_top","_parent"}, 'B'};
    q[6]  = {"Image alt attribute?", {"alt","title","desc","label"}, 'A'};
    q[7]  = {"Table header cell?", {"td","th","thead","caption"}, 'B'};
    q[8]  = {"Self-closing (void) element?", {"div","p","br","section"}, 'C'};
    q[9]  = {"External CSS tag?", {"link","style","script","meta"}, 'A'};
    
}
void loadCSS(Question q[]) {
    q[0]  = {"Set text color?", {"color","font-size","fill","stroke"}, 'A'};
    q[1]  = {"Bold text property?", {"font-weight","font-style","weight","boldness"}, 'A'};
    q[2]  = {"Select <p> inside .card?", {".card p",".card > p","p.card","#card p"}, 'A'};
    q[3]  = {"Center block horizontally?", {"margin: auto","text-align: center","align:center","justify:center"}, 'A'};
    q[4]  = {"Highest specificity?", {"class","element","id","universal"}, 'C'};
    q[5]  = {"Relative to root font unit?", {"em","rem","vh","px"}, 'B'};
    q[6]  = {"Flex main-axis align?", {"align-items","justify-content","place-items","gap"}, 'B'};
    q[7]  = {"Make abs children anchor?", {"position: relative","display: block","float: left","overflow: auto"}, 'A'};
    q[8]  = {"Media query keyword?", {"@media","@screen","@query","@device"}, 'A'};
    q[9]  = {"Grid columns property?", {"grid-template-columns","grid-columns","columns","grid-cols"}, 'A'};
    
}
void loadPython(Question q[]){
	q[0]= {"Output of print(type(lambda x: x))?",{"func", "lambda", "object", "class"}, 'A'};
    q[1]=    {"Which type is mutable in Python?",{"list", "tuple", "str", "int"}, 'A'};
    q[2]=    {"Which loop has else in Python?",{"for", "while", "both", "none"}, 'C'};
    q[3]=  {"print(bool([])) gives?",{"True", "False", "None", "Error"}, 'B'};
    q[4]=  {"Scope order in Python follows?",{"LEGB", "LEBG", "GELB", "BLEG"}, 'A'};
    q[5]= {"a={1,2,3}; a.add(2) -> result?",{"{1,2,3}", "{1,2}", "Error", "None"}, 'A'};
    q[6]=   {"Keyword-only arg defined using?",{"/", "*", "**", "->"}, 'B'};
    q[7]=    {"Output of print('1'*3)?",{"3", "111", "Error", "[1,1,1]"}, 'B'},
    q[8]=    {"Dict preserves order since?",{"3.6", "3.7", "3.8", "3.9"}, 'B'};
    q[9]=    {"print(type(range(5)))?",{"list", "tuple", "range", "iter"}, 'C'};
    
}

void loadCPP(Question q[]) {
    q[0]  = {"Header for cout?", {"iostream","stdio","fstream","cstdio"}, 'A'};
    q[1]  = {"Dynamic array container?", {"vector","array","deque","list"}, 'A'};
    q[2]  = {"Runs at least once?", {"for","while","do-while","range-for"}, 'C'};
    q[3]  = {"Default class access?", {"public","private","protected","package"}, 'B'};
    q[4]  = {"Make param read-only?", {"const","static","mutable","volatile"}, 'A'};
    q[5]  = {"Overloading depends on?", {"return type","parameters","name only","namespace"}, 'B'};
    q[6]  = {"Allocate on heap?", {"malloc","new","alloc","make"}, 'B'};
    q[7]  = {"Destructor form?", {"Class()","~Class()","delete Class()","!Class()"}, 'B'};
    q[8]  = {"Header guard modern?", {"#pragma once","#ifndef","#protect","#keep"}, 'A'};
    q[9]  = {"Reference symbol?", {"*","&","->","::"}, 'B'};
}

int main() {
    cout << "*** welcome to quiz game ***\n Select the topic for quiz\n";
    cout << "1) HTML\n2) CSS\n3) C++\n4) Python\n";
    cout << "Choose (1/2/3/4): ";
    int choice; 
    cin >> choice;

    const int N = 10;
    Question quiz[N];

    switch (choice) {
        case 1:{
        	cout<<"*** HTML QUIZ ***\n";
        	loadHTML(quiz);
			break;
		}
		case 2:{
			cout<<"*** CSS  QUIZ ***\n";
			 loadCSS(quiz);
			break;
		}
		case 3:{
			cout<<"*** C++ QUIZ ***\n";
			loadCPP(quiz);
			break;
		}
		case 4:{
			cout<<"*** PYTHON QUIZ ***\n";
			loadPython(quiz);
			break;
		}
		default:	
            cout << "Invalid choice. Exiting.\n";
            return 0;
    }

    startQuiz(quiz, N);
    return 0;
}

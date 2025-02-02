#include <iostream>
#include <limits>

int main() {
    std::string questions[] = {
    "What is the name of Subaru's special ability?",
    "Who is the Witch of Envy?",
    "What is the true form of Roswaal's gospel?",
    "Which sin does Petelgeuse Romanée-Conti represent?"
    };
    std::string options[][4] = {
    {"A: Return by Death", 
     "B: Time Leap", 
     "C: Shadow Revival", 
     "D: Reincarnation Loop"},
     
    {"A: Satella", 
     "B: Echidna", 
     "C: Pandora", 
     "D: Minerva"},
     
    {"A: A diary", 
     "B: A book predicting the future", 
     "C: A contract with Echidna", 
     "D: A spellbook for immortality"},
     
    {"A: Wrath", 
     "B: Envy", 
     "C: Sloth", 
     "D: Greed"}
};
    char answers[] = {'A', 'A', 'C', 'C'};

    const int QUESTIONS_NO = sizeof(questions)/sizeof(questions[0]);
    const int OPTIONS_COLUMNS = sizeof(options[0])/sizeof(options[0][0]);
    const int OPTIONS_ROWS = sizeof(options)/sizeof(options[0]);
    int score = 0;
    char answer;

    std::cout << "Welcome to the Re:Zero Quiz!" << "\n";
    std::cout << "Test your knowledge of Subaru's struggles, Emilia's kindness, and the mysteries of Lugunica!\n";
    std::cout << "Do you have what it takes to RETURN BY CORRECT ANSWERS?" << "\n";
    std::cout << "Let's begin!" << "\n";
    
    for (int ques_index = 0; ques_index < QUESTIONS_NO; ques_index++ ) {
        std::cout << (ques_index + 1) << ". " << questions[ques_index] << "\n";
        for (int j = 0; j < OPTIONS_COLUMNS; j++){
            std::cout << options[ques_index][j] << "\n";
        }
        std::cout << "\n";
        std::cout << "Answer : ";
        do {
            std::cin >> answer;
            if (std::cin.fail()){
                std::cin.clear();
                std::cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Enter valid answer\n";
                continue;
            }
            if (answer == 'A' || answer == 'B' || answer == 'C' || answer == 'D' ) {
                break;
            }
            std::cout << "Enter valid answer\n";
        }   while (true);
        if (answer == answers[ques_index]) {
        std::cout << "Correct!\n";
        score++;
        } else {   
        std::cout << "Wrong\n";
        }
    }
    std::cout << "Congratulations! Your Score is: " << score << "/" << QUESTIONS_NO << '\n';
    return 0;
}
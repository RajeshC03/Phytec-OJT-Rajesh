#include<stdio.h>

struct Question {
    char questionText[1000];
    char options[4][250];
    int correctOption;
};

int main() {
    struct Question questionBank[] = {
        {
            "What is the capital of Italy?",
            {"A. Rome",  "B. Paris",  "C. Madrid",  "D. Berlin"},
            1
        },
        {
            "Which planet is known as the Red Planet?",
            {"A. Venus",  "B. Mars",  "C. Jupiter",  "D. Saturn"},
            2
        },
        {
            "What gas do plants absorb from the atmosphere?",
            {"A. Oxygen",  "B. Carbon Dioxide",  "C. Nitrogen",  "D. Hydrogen"},
            2
        },
        {
      	    "How many districts are there in karnataka?",
      	    {"A.23", "B.28", "C.27", "D.30"},
      	    4 
        },
	{
            "Which place receives highest rainfall in Karnataka? ",
            {"A.Mangalore", "B.Udupi", "C.Agumbe", "D.Chikmagaluru"},
            3
        },
	{
            "What is the largest Ocean in the world?",
            {"A.Indian Ocean", "B.Atlantic Ocean", "C.Pacific Ocean", "D.Arctic Ocean"},
            3
        },
        {
            "What is the largest Ocean in the world?",
            {"A.Indian Ocean", "B.Atlantic Ocean", "C.Pacific Ocean", "D.Arctic Ocean"},
            3
        },
        {
            "What is the largest Ocean in the world?",
            {"A.Indian Ocean", "B.Atlantic Ocean", "C.Pacific Ocean", "D.Arctic Ocean"},
            3
        },
        {
            "What is the largest Ocean in the world?",
            {"A.Indian Ocean", "B.Atlantic Ocean", "C.Pacific Ocean", "D.Arctic Ocean"},
            3
        },
        {
            "What is the largest Ocean in the world?",
            {"A.Indian Ocean", "B.Atlantic Ocean", "C.Pacific Ocean", "D.Arctic Ocean"},
            3
        }
        // Add more questions here
    };

    int numQuestions = sizeof(questionBank) / sizeof(struct Question);
    int score = 0;

    printf("@@@WELCOME TO THE QUIZ GAME@@@\n\n");

    for (int i = 0; i < numQuestions; i++) {
        printf("Question %d: %s\n\n", i + 1, questionBank[i].questionText);
        for (int j = 0; j < 4; j++) {
            printf("%s\n", questionBank[i].options[j]);
        }

        int userChoice;
        printf("\nChoose Your Answer (1-4):  ");
        scanf("%d", &userChoice);

        if (userChoice == questionBank[i].correctOption){
            printf("----CORRECT!!----\n");
            score++;
        } else {
            printf("----Incorrect!!----.\nThe correct answer was %s.\n",questionBank[i].options[questionBank[i].correctOption-1]);
        }

        printf("\n");
    }

    printf("#####  QUIZ COMPLETED  ##### \n\nYour Score: %d/%d\n", score, numQuestions);
    

    return 0;
}


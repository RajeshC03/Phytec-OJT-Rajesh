#include<stdio.h>

struct Question {            //Structure named Question
    char questionText[1000]; //1D character array
    char options[4][50];     //2D character array with 4 rows and 50 columns
    int correctOption;
};

int main() {
    struct Question questionBank[] = {
        {
            "What is the capital of Spain?",
            {"A. Rome",  "B. Paris",  "C. Madrid",  "D. Berlin"},
            3
        },
        {
            "Which planet is known as the Dwarf Planet?",
            {"A. Uranus",  "B. Mars",  "C. Pluto",  "D. Saturn"},
            3
        },
        {
            "Which gas is known as Laughing Gas?",
            {"A. Oxygen",  "B. Carbon Dioxide",  "C. Nitrogen Oxide",  "D. Hydrogen Peroxide"},
            3
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
            "What is the deepest ocean in the world?",
            {"A.Indian Ocean", "B.Atlantic Ocean", "C.Pacific Ocean", "D.Arctic Ocean"},
            3
        },
        {
            "Which river is often called the Ganga of the South?",
            {"A.Brahmaputra", "B.Yamuna", "C.Kaveri", "D.Godavari"},
            4
        },
        {
            "Which Indian state is famous for its backwaters and houseboat tours?",
            {"A.Karnataka", "B.Kerala", "C.West Bengal","D.Tamil Nadu"},
            2
        },
        {
            "In which city is the Indian Space Research Organisation (ISRO) headquartered?",
            {"A.Sriharikota", "B.Kolkata", "C.Bangalore", "D.Ahmedabad"},
            3
        },
        {
            "What is the largest state in India by area?",
            {"A.Madhya Pradesh", "B.Rajasthan", "C.Uttar Pradesh", "D.Maharashtra"},
            2
        }
        // Add more questions here
    };

    int numQuestions = sizeof(questionBank) / sizeof(struct Question);//To know the size of structure array
    int score = 0;
    printf("@@@WELCOME TO THE QUIZ GAME@@@\n\n");

    for (int i = 0; i < numQuestions; i++) //loop for displaying questions
    {
        printf("Question %d: %s\n\n", i + 1, questionBank[i].questionText);

        for (int j = 0; j < 4; j++) //loop for displaying options 
	{
            printf("%s\n", questionBank[i].options[j]);
     	}
	int userChoice;
        do {
        	printf("\nChoose Your Answer (1-4):  "); //User input as answer
        	scanf("%d", &userChoice);

        	if (userChoice < 1 || userChoice > 4) // Checks whether user input is correct or not
		{
            	printf("Invalid input. Please try again.\n");
        	}
    	} while (userChoice < 1 || userChoice > 4); //Checking and if true it will again asks to valid option


        if (userChoice == questionBank[i].correctOption) //If opted answer is correct it will print CORRECT
	{
            printf("----CORRECT!!----\n");
            score++;
        }
	else 
	{
            printf("----INCORRECT!!----.\nThe correct answer was %s.\n",questionBank[i].options[questionBank[i].correctOption-1]); //If 		not correct then it will print INCORRECT and display the correct answer to the user
        }

        printf("\n");
    }

    printf("#####  QUIZ COMPLETED  ##### \n\nYour Score: %d/%d\n", score, numQuestions); //Final score will be recorded and displayed
    

    return 0;
}


// Q5 – Functions & Video Boolean
//
// What are Functions? How could functions make the previous programs easier to write? Easier to maintain and require less LoCs (Line of Code)? Rewrite Q3 using Functions
//
// Watch the video and comment. What did Boole contribute?
// https://youtu.be/Hljir_TyTEw?si=7uy6AKe_wxqSId_z



// "Rewrite Q3 using Functions":
//
//    Q3 Boolean
//
//    Research the Boolean And and OR operations.
//
//    Prompt the user to enter a score (1-100). Using the Boolean OR operation, if the # is not within the range then output an "out of range" message and skip the score.
//
//      Using Boolean AND operation, determine and output the Letter grade
//
//    Repeat for 2 more scores.
//
//    Calculate the average score and then the Final Letter Grade



//    Assumptions
//
//    Letter Grade designations:
//    A... 91 - 100
//    B... 81 -  90
//    C... 71 -  80
//    D... 61 -  70
//    F...  0 -  60



#include <iostream>
using namespace std;



int getScore();
bool isValidScore(int);
void displayResult(string, string);
string getLetterGrade(int);
double getAverageScore(int [], const int);



int main()
{
   const int NUMBER_OF_SCORES = 3;
   int scores[NUMBER_OF_SCORES];



   // Prompt the user to enter a score... Repeat for 2 more scores
   for (int whichScore = 0; whichScore < NUMBER_OF_SCORES; whichScore++) {
      scores[whichScore] = getScore();



      // ...output the Letter grade
      displayResult("Letter Grade: ", getLetterGrade(scores[whichScore]));
   }



   // Calculate the average score and then the Final Letter Grade
   displayResult("Average: ", to_string(getAverageScore(scores, NUMBER_OF_SCORES)));
   displayResult("Average/Final Letter Grade: ", getLetterGrade(getAverageScore(scores, NUMBER_OF_SCORES)));



   cout << endl << endl;
   return 0;
}



// Prompt the user to enter a score (1-100) ...if the # is not within the range then output an "out of range" message and skip the score
int getScore() {
   int score = 0;

   while (!isValidScore(score)) {
      cout << "Please enter an integer between 1 - 100: ";
      cin >> score;

      if (!isValidScore(score))
         cout << "out of range" << endl << endl;
   }

   return score;
}



// Using the Boolean OR operation, [determine] if the # is not within the range...
bool isValidScore(int score) {
   bool valid = true;

   if ((score < 1) || (score > 100))
      valid = false;

   return valid;
}



void displayResult(string prefix, string result) {
   cout << prefix << result << endl << endl;
}



// Using Boolean AND operation, determine ... the Letter grade
string getLetterGrade(int score) {
   string grade = "X";

   if ((score >= 91) && (score <= 100))
      grade = "A";
   else if ((score >= 81) && (score <= 90))
      grade = "B";
   else if ((score >= 71) && (score <= 80))
      grade = "C";
   else if ((score >= 61) && (score <= 70))
      grade = "D";
   else if ((score >= 0) && (score <= 60))
      grade = "F";

   return grade;
}



// Calculate the average score...
double getAverageScore(int scores[], const int NUMBER_OF_SCORES) {
   double sum = 0;

   for (int whichScore = 0; whichScore < NUMBER_OF_SCORES; whichScore++) {
      sum += scores[whichScore];
   }

   return (sum / (double) NUMBER_OF_SCORES);
}

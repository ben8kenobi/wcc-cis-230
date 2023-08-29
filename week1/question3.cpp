// Q3 Boolean
//
// Research the Boolean And and OR operations.
//
// Prompt the user to enter a score (1-100). Using the Boolean OR operation, if the # is not within the range then output an "out of range" message and skip the score.
//
//   Using Boolean AND operation, determine and output the Letter grade
//
// Repeat for 2 more scores.
//
// Calculate the average score and then the Final Letter Grade



// Assumptions
//
// Letter Grade designations:
// A... 91 - 100
// B... 81 -  90
// C... 71 -  80
// D... 61 -  70
// F...  0 -  60



#include <iostream>
using namespace std;



int main()
{
   int score = 0;
   int scores[3] = {0, 0, 0};
   int average = 0;
   char grade = 'X';



   // Prompt the user to enter a score... Repeat for 2 more scores
   for (int whichScore = 0; whichScore < 3; whichScore++) {



      // Prompt the user to enter a score (1-100) ...if the # is not within the range then ... skip the score
      score = 0;

      while ((score < 1) || (score > 100)) {
         cout << "Please enter an integer between 1 - 100: ";
         cin >> score;



         // Using the Boolean OR operation ... if the # is not within the range then output an "out of range" message...
         if ((score < 1) || (score > 100))
            cout << "out of range" << endl;
         else {
            scores[whichScore] = score;
         }



         // Using Boolean AND operation, determine and output the Letter grade
         grade = 'X';

         if ((score >= 91) && (score <= 100))
            grade = 'A';
         else if ((score >= 81) && (score <= 90))
            grade = 'B';
         else if ((score >= 71) && (score <= 80))
            grade = 'C';
         else if ((score >= 61) && (score <= 70))
            grade = 'D';
         else if ((score >= 0) && (score <= 60))
            grade = 'F';

         cout << "Letter Grade: " << grade << endl << endl;
      }
   }



   cout << "scores: " << scores[0] << ", " << scores[1] << ", " << scores[2] << endl;



   // Calculate the average score and then the Final Letter Grade
   average = ((scores[0] + scores[1] + scores[2]) / 3);
   cout << "Average: " << average << endl;

   grade = 'X';

   if ((average >= 91) && (average <= 100))
      grade = 'A';
   else if ((average >= 81) && (average <= 90))
      grade = 'B';
   else if ((average >= 71) && (average <= 80))
      grade = 'C';
   else if ((average >= 61) && (average <= 70))
      grade = 'D';
   else if ((average >= 0) && (average <= 60))
      grade = 'F';

   cout << "Average/Final Letter Grade: " << grade << endl;



   cout << endl << endl;
   return 0;
}

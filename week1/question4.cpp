// Q4 – Case Switch
//
// Research Case / Switch. cite your sources
//
// Prompt the user to enter a score (1-100)
//
//   Using switch / case determine and output the Letter grade
//
// Repeat for 3 scores.
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



   // Prompt the user to enter a score... Repeat for 3 scores
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



         //   Using switch / case determine and output the Letter grade
         grade = 'X';

         switch (score) {

            case 100:
            case 99:
            case 98:
            case 97:
            case 96:
            case 95:
            case 94:
            case 93:
            case 92:
            case 91:
               grade = 'A';
               break;

            case 90:
            case 89:
            case 88:
            case 87:
            case 86:
            case 85:
            case 84:
            case 83:
            case 82:
            case 81:
               grade = 'B';
               break;

            case 80:
            case 79:
            case 78:
            case 77:
            case 76:
            case 75:
            case 74:
            case 73:
            case 72:
            case 71:
               grade = 'C';
               break;

            case 70:
            case 69:
            case 68:
            case 67:
            case 66:
            case 65:
            case 64:
            case 63:
            case 62:
            case 61:
               grade = 'D';
               break;

            default:
               grade = 'F';
         }

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

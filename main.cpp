#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  //Declare variables 

  // Menu
  const int circle = 1;
  const int rectangle = 2;
  const int quit = 3;
  int choice;

  // cicle variables
  double radius;
  double circlearea;
  const double pi = 3.14159; 
  double circumference;
  int cchoice;
  // rectangle variables
  double lenght;
  double width;
  double rectarea;
  double perimeter;
  int rchoice;

  // Display
  cout<< "Geometry Calculator\n\n"<< endl;
  cout<<"Select a figure" << endl;
  // the three options 
  cout<<"1. Circle\n";
  cout<< "2. Rectangle\n";
  cout<<"3. Quit\n\n";

  // Enter Choices 


  cout<< "Enter your choice (1-3): " << endl;
  cin >> choice;
// if invalid choices are selected (not 1 2 3)
if (choice <= 0 || choice > 3)
  {// true path
    //informing the user to enter a valid number
  //  program ends 
    cout << "The valid choices are 1 through 3. Run the\n"
         << "program again.\n";
       
  }
  else 
// false path 
  // if the user choices circle
  {
    if (choice == 1)
  {
    // prompt the user to input radius
    cout << "\nEnter the circle's radius: ";
    //user input the radius
cin>> radius;
    // validating the number making sure the user enters a number higher than 0

    if (radius <=0)
    {
      // displaying that the user did not enter a radius greater than 0
      cout <<"\nThe radius must be greater than zero.\n" <<endl;
       cin>> radius;
      return 0;
    }
  
    // prompt the user to pick area or circumference

    //calcualting the area 
    circlearea = pi * pi * radius;

    //calculating the circumference
    circumference =  pi *(radius * radius);

    // prompt user 
    cout << "Enter 1 for area or 2 for circumference: ";
    // save inout 
    cin >> cchoice;
    if (cchoice == 1)
    {
      // displays 3 decmials places
      cout << setprecision(3) << fixed <<showpoint
      << endl;

      //displays the area to the user
      cout <<"\nThe area is " << circlearea<< endl;
      
    }

    // if the user selects 2 for circumference
     if (cchoice == 2)
    {
      // displaying the circumfrence for the user
      cout << "\nThe circumference is " << circumference << endl;
      
    }
    // if the user does not select 1 or 2 display 
    else 
    {
      cout << "Invalid selection"<<endl;
    
    }

    cin >> radius;
  }

  
  

  

//   // if the user selects rectangle 
  else if (choice==2)
  {
//   // prompt the user to enter the length of the rectangle 
  cout << "\nEnter the rectangle's length: ";
//   //store the lenght
  cin >> lenght;

  
  // prompt the user to enter the width 
 cout << "Enter the rectangle's width: ";
 //store the width
 cin >> width;

 //i want user to enter positve values
 if (width < 0 || lenght < 0 ) 
 {
   cout << "\nOnly enter positive values for " << "length and width.\n";
   return 0;
 }
 // calculation for area
 rectarea = width * lenght;
 // calculation for perimeter
 perimeter = 2 * (lenght + width);

 //prompt the user 1 for area or 2 for perimeter
 cout <<"Enter 1 for area or 2 for perimeter"<<endl; 

 cin>> rchoice;
 //if the user choose 1
 if (rchoice==1 )
 {

   //dispalys the area with decimals
   cout<<setprecision(3)<< fixed<<showpoint <<endl;
    cout<< "Area" <<endl;
   cout<<  "\nThe area is " << rectarea << endl;
    return 0;
 }
 // if the user selected 2
else if (rchoice ==2)
 {
 //dsiplays the perimeter
  cout<<setprecision(3)<< fixed<<showpoint;
 cout<<"\nThe perimeter is " <<perimeter<< endl;
 }

 // the user must chooice 1 or 2 or it is invalid


  }
//  // if the user choses to quit
else if (choice == 3)
  {
//    // informs the user the program is ending 
    cout<< "Program ending.\n";
//      return 0;
  }
else 
{
cout<< "Invalid selection"<< endl;
}

//  // if the user selects anything less than 1 or greater than one
  }

  return 0;
}

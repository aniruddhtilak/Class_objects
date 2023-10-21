# Class_objects
**A. Access_spcifier -** calculates the volume of a cube using the dimensions provided by the user. 
Algorithm :

1. Create a class named 'cube':
   a. Declare public member variables 'height', 'width', and 'length' with default values.
   b. These variables represent the dimensions of the cube.

2. In the 'main()' function:
   a. Create an instance of the 'cube' class named 'c1'.
   b. Prompt the user to enter the 'length', 'width', and 'height' of the cube.
   c. Read and store these values in the respective member variables of 'c1'.
   d. Calculate the volume of the cube as 'height * width * length'.
   e. Print the calculated volume.

3. End of the program.


**B.Age calculator-** calculate a person's age based on their date of birth and the current date.
Algorithm:

1. Create a class named 'calender':
   a. Declare public member variables to store the year, month, day, year of birth, month of birth, date of birth, and the user's choice.
   b. In the constructor:
   
      i. Prompt the user to enter the current year, month, and day.
   
      ii. Provide the user with a choice:
   
          - Calculate Age
   
          - Exit
   
      iii. If the user chooses to calculate age:
   
           - Prompt the user to enter the year of birth, month of birth, and date of birth.
   

3. Define a member function 'checker' in the 'calender' class:
4. 
   a. Calculate the age based on the current date and date of birth:
   
      i. Calculate the year difference, considering the month of birth and the current month.
   
      ii. Calculate the month difference.
   
      iii. Calculate the day difference, considering the day of birth and the current day.
   
   b. Print the calculated age in the format "Years Months Days".
   

6. In the 'main()' function:
   a. Create an instance of the 'calender' class named 'c1'.
   b. Check the user's choice:
      - If the user chooses to calculate age, call the 'checker' function to calculate and display the age.
      - If the user chooses to exit, display the current date.

7. End of the program.


**C. Basic class-** calculates and displays the volume of a cube using a class named 'cube' 
Algorithm:

1. Create a class named 'cube':
   a. Declare public member variables 'height', 'width', and 'length' to represent the dimensions of the cube.

2. In the 'main()' function:
   a. Create an instance of the 'cube' class named 'c1.'
   b. Calculate the volume of the cube using the formula: volume = height * width * length.
   c. Print the calculated volume.

3. End of the program.


**D.Calender constructor-** determine whether a given year is a leap year or not. 
Algorithm:

1. Create a class named 'calender':
   a. Declare a public member variable 'year' to store the input year.
   b. Create a constructor to input the year from the user.

2. Define a member function 'checker' in the 'calender' class:
   a. Check if the 'year' is a leap year using the following conditions:
      - If the year is divisible by 4 and not divisible by 100, it's a leap year.
   b. If it's a leap year, display "Year is leap."
   c. If it's not a leap year, display "Year is not leap."

3. In the 'main()' function:
   a. Create an instance of the 'calender' class named 'c1'.
   b. Call the 'checker' function to determine and display whether the input year is a leap year or not.

4. End of the program.


**E.Compare size of cube-** calculates the volume of a cube and then determines whether the cube is "large" or "small" 
Algorithm:

1. Create a class named 'cube':
   a. Declare public member variables 'height', 'width', and 'length' to represent the dimensions of the cube.
   b. Create a constructor to input the dimensions of the cube from the user.

2. Define a member function 'vol_calculator' in the 'cube' class:
   a. Calculate the volume of the cube using the formula: volume = height * width * length.
   b. Display the calculated volume.
   c. Return the calculated volume.

3. In the 'main()' function:
   a. Create an instance of the 'cube' class named 'c1' and initialize its dimensions.
   b. Call the 'vol_calculator' function to calculate the cube's volume.
   c. Check if the calculated volume is greater than 50:
      - If true, display "Cube is large."
      - If false, display "Cube is small."

4. End of the program.

**F.Constructor=**
Same as previous with a constructor included.

**G.Getter-** defines a cube class that represents a cube's dimensions and calculates its volume. 
It also provides methods to update and retrieve the height of the cube. it demonstrates the concept of constructors and destructors. 
Algorithms:

1. Create a class named 'cube':
   a. Declare private member variables 'height', public member variables 'width' and 'length' to represent the dimensions of the cube.
   b. Create a constructor to input the dimensions of the cube from the user and initialize them.
   c. Create a destructor to perform cleanup actions.

2. Define a member function 'vol_calculator' in the 'cube' class:
   a. Calculate the volume of the cube using the formula: volume = height * width * length.
   b. Return the calculated volume.

3. Define a member function 'update' in the 'cube' class:
   a. Input a new height for the cube from the user.
   b. Update the 'height' member variable.
   c. Return 0.

4. Define a member function 'printer' in the 'cube' class:
   a. Return the value of the 'height' member variable.

5. In the 'main()' function:
   a. Create an instance of the 'cube' class named 'c1'.
   b. Call the 'vol_calculator' function to calculate the initial volume of the cube.
   c. Display the initial volume.
   d. Call the 'update' function to change the height of the cube.
   e. Call the 'vol_calculator' function again to calculate the updated volume.
   f. Display the updated volume.
   g. Call the 'printer' function to retrieve the updated height and display it.

6. End of the program.

**H.Leap year checker-** defines a calendar class for date input and leap year checking. 
Algorithm:

1. Create a class named 'calendar':
   a. Declare public member variables 'year', 'month', and 'day' to represent the date.
   b. Create a constructor to input the current date from the user and initialize 'year', 'month', and 'day'.

2. Define a member function 'checker' in the 'calendar' class:
   a. Display the entered date (day, month, and year).
   b. Check if the 'year' is a leap year:
      i. If 'year' is divisible by 4 (but not by 100 unless also by 400), it is a leap year.
   c. Display whether the year is a leap year or not.

3. In the 'main()' function:
   a. Create an instance of the 'calendar' class named 'c1'.
   b. Call the 'checker' function to check if the entered year is a leap year or not.

4. End of the program.














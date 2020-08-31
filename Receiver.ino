// Create an empty string to store the input from the transmitter
String inComingLetter = "";
// Create an empty string to store all the input before the user press the spaceButton
String completeLetter = "";
// Convert completeLetter to integer to start a switch case
int intCompleteLetter = "";

// Set up function
void setup()
{
  // Set up serial data transmission
  Serial.begin(9600);
}

// Main loop function
void loop() 
{
  // Get the number of bytes avaliable for reading from serial port, if there is space, read from the transmitter
  if (Serial.available() > 0)
  {
    // Store the data into inComingLetter variable
    inComingLetter = Serial.read();

    // If inComingLetter is a dot or a dash, then store it in completeLetter
    if (inComingLetter == "46" or inComingLetter == "45")
    {
      // Append the variable to completeLetter
      completeLetter = completeLetter + inComingLetter;
    }
    // If the user input indicates a space, output space onto screen
    else if (inComingLetter == "33")
    {
      // Print space
      Serial.print(" ");
    }
    // If the user input indicates the user finishes inputting the whole letter
    else if (inComingLetter == "95")
    {
      // Convert the result to integer
      intCompleteLetter = completeLetter.toInt();
      // Using switch case to check which letter it matches to
      switch(intCompleteLetter)
      {
        // Case a
        case 4645:
          // Output a
          Serial.print("a");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case b
        case 45464646:
          // Output b
          Serial.print("b");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case c
        case 45464546:
          // Output c
          Serial.print("c");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case d
        case 454646:
          // Output d
          Serial.print("d");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case e
        case 46:
          // Output e
          Serial.print("e");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case f
        case 46464546:
          // Output f
          Serial.print("f");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case g
        case 454546:
          // Output g
          Serial.print("g");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case h
        case 46464646:
          // Output h
          Serial.print("h");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;
          
        // Case i
        case 4646:
          // Output i
          Serial.print("i");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case j
        case 46454545:
          // Output j
          Serial.print("j");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case k
        case 454645:
          // Output k
          Serial.print("k");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case l
        case 46454646:
          // Output l
          Serial.print("l");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case m
        case 4545:
          // Output m
          Serial.print("m");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case n
        case 4546:
          // Output n
          Serial.print("n");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case o
        case 454545:
          // Output o
          Serial.print("o");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case p
        case 46454546:
          Serial.print("p");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case q
        case 45454645:
          // Output q
          Serial.print("q");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case r
        case 464546:
          // Output r
          Serial.print("r");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case s
        case 464646:
          // Output s
          Serial.print("s");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case t
        case 45:
          // Output t
          Serial.print("t");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case u
        case 464645:
          // Output u
          Serial.print("u");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case v
        case 46464645:
          // Output v
          Serial.print("v");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case w
        case 464545:
          // Output w
          Serial.print("w");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case x
        case 45464645:
          // Output x
          Serial.print("x");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case y
        case 45464545:
          // Output y
          Serial.print("y");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case z
        case 45454646:
          // Output z
          Serial.print("z");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case 1
        case 4645454545:
          // Output 1
          Serial.print("1");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case 2
        case 4646454545:
          // Output 2
          Serial.print("2");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;
          
        // Case 3
        case 4646464545:
          // Output 3
          Serial.print("3");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break; 

        // Case 4
        case 4646464645:
          // Output 4
          Serial.print("4");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;     

        // Case 5
        case 4646464646:
          // Output 5
          Serial.print("5");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;     

        // Case 6
        case 4546464646:
          // Output 6
          Serial.print("6");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case 7
        case 4545464646:
          // Output 7
          Serial.print("7");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;

        // Case 8
        case 4545454646:
          // Output 8
          Serial.print("8");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;  

        // Case 9
        case 4545454546:
          // Output 9
          Serial.print("9");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;  
          
        // Case 0
        case 4545454545:
          // Output 0
          Serial.print("0");
          // Reset all the variables
          inComingLetter = "";
          completeLetter = "";
          intCompleteLetter = "";
          break;                                                                                                                                                                                                               
      }
    }
  }
}

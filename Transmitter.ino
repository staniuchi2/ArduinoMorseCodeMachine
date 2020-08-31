// Create a button for user input dots and dashes
int inputButton = 2;
// Create a button for user to use as it indicates it finish inputting a single character
int spaceButton = 3;
// Create a pin for LED
int LED = 10;
// Set a timer to differentiate dots and dashes
int timer = 0;
// Set a pin for piezo
int sound = 13;

// Set up function
void setup() 
{
  // Set up serial data transmission
  Serial.begin(9600);
  // Set the pin for piezo as output
  pinMode(sound, OUTPUT);
  // Set pin for LED as output
  pinMode(LED, OUTPUT);
  // Set pin for inputButton as input
  pinMode(inputButton, INPUT);
  // Set pin for spaceButton as input
  pinMode(spaceButton, INPUT);
  // Using interrupt to monitor inputButton is pressed
  attachInterrupt(0,buttonInterrupt, FALLING);
  // Using interrupt to monitor spaceButton is pressed
  attachInterrupt(1,spaceInterrupt, FALLING);
}

// Main loop function
void loop() 
{
  // Using a while loop to and the timer variable to differentiate user input from dots and dashes
  while (digitalRead(inputButton) == LOW)
  {
    // While button is pressed, turn on the piezo
    tone(sound, 1000);
    // Increment the timer
    timer ++;
    // Use delay function, without affecting the performance of the code, this is easy to count the timer
    delay(100);
  }

  //Call the addMessage function 
  addMessage();

  // Using a while loop to run the code when the inputButton is not pressed
  while (digitalRead(inputButton) == HIGH)
  {
    // Turn off the piezo
    noTone(sound);
    // Turn off the LED
    digitalWrite(LED, LOW);
  }
}

// Interrupt function for inputButton
void buttonInterrupt()
{
  // Turn on the LED
  digitalWrite(LED, HIGH);
}

void spaceInterrupt()
{
  // Write a ASCII character to the receiver and use it as the end of the input letter
  Serial.write("_");
}

// This funtion will send to receiver a dot, a dash or a space between letters or words
void addMessage()
{
  // If the timer is between these variable which means that the user has input a dash
  if (timer > 3 and timer < 13)
  {
    // Write a dash and send it to the receiver
    Serial.write("-");
    // Reset the timer
    timer = 0;
  }
   // If the timer is between these variable which means that the user has input a dash
  else if (timer > 0 and timer < 3)
  {
    // Write a dot and send it to the receiver
    Serial.write(".");
    // Reset the timer
    timer = 0;
  }
   // If the timer is greater than this variable which means that the user has input a dash
  else if (timer > 13)
  {
    // Write a ASCII to represent a space and send it to the receiver
    Serial.write("!");
    // Reset the timer
    timer = 0;
  }
}

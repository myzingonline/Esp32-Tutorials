//Good news, the BOOT button is connected to GPIO0 (which is also a bootstrapping pin to set the boot mode), so pressing it will pull GPIO0 low.

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(0, INPUT);
  // initialize digital pin 2 as an output.
  pinMode(2, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
int Push_button_state = digitalRead(0);
if ( Push_button_state == HIGH )
{ 
  digitalWrite(2,LOW ); 
}
else 
{
  digitalWrite(2, HIGH);
}
        
}

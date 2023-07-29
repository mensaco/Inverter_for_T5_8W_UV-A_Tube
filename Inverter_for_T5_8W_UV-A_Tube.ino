int freq = 35000; // PWM frequency
int PWM_OUT = D5; // PWM output pin

void setup() {  
  analogWriteFreq(freq);      // Set the frequency of the PWM output
  analogWrite(PWM_OUT, 127);  // Set the duty cycle to 50% 
}

void loop() {
  yield(); // 
}

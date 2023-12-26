#define PIN_LM35       A0
int relay_pin = 9;


void setup() {
  Serial.begin(9600);
  pinMode(relay_pin, OUTPUT);
digitalWrite(relay_pin, HIGH);
}

void loop() {
  // get the ADC value from the temperature sensor
  int adcVal = analogRead(PIN_LM35);
  // convert the ADC value to voltage in millivolt
  float milliVolt = adcVal * (ADC_VREF_mV / ADC_RESOLUTION);r 
  // convert the voltage to the temperature in Celsius
  float tempC = milliVolt / 10;
  // convert the Celsius to Fahrenheit
  float tempF = tempC * 9 / 5 + 32;

  // print the temperature in the Serial Monitor:
  Serial.print("Temperature: ");
  Serial.print(tempC);   // print the temperature in Celsius
  Serial.print("°C");
  Serial.print("  ~  "); // separator between Celsius and Fahrenheit
  Serial.print(tempF);   // print the temperature in Fahrenheit
  Serial.println("°F");
if (tempC > 30){
  digitalWrite(relay_pin, LOW);
; 
  delay(10);
}
else{
  digitalWrite(relay_pin, HIGH);

}
  delay(1000);
}
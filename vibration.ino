int led = 13;
int vib = A0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(vib, INPUT);
  Serial.begin(9600);
}

void loop() {
  long measure = pulseIn(vib, HIGH);
  delay(100);
  Serial.println(measure);
}

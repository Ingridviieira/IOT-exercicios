//int led =8;
int led = 13;

// Define os padrões das letras em código Morse
const int morseE[] = {0}; // letra E
const int morseD[] = {1, 1, 1}; // letra D
const int morseU[] = {0, 0, 1}; // letra U
const int morseA[] = {0, 1}; // letra A
const int morseR[] = {0,0}; //letra R

// Função para reproduzir um caractere Morse
void playMorse(const int *morsePattern, int length) {
  for (int i = 0; i < length; i++) {
    digitalWrite(led, HIGH);    // Acende o LED
    delay(morsePattern[i] == 0 ? 150 : 400);
    digitalWrite(led, LOW);     // Apaga o LED
    delay(100);
  }
}

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  // Reproduz o nome "eduarda" em código Morse
  playMorse(morseE, sizeof(morseE)/sizeof(morseE[0])); // E
  delay(200);
  playMorse(morseD, sizeof(morseD)/sizeof(morseD[0])); // D
  delay(200);
  playMorse(morseU, sizeof(morseU)/sizeof(morseU[0])); // U
  delay(200);
  playMorse(morseA, sizeof(morseA)/sizeof(morseA[0])); // A
  delay(200);
  playMorse(morseR, sizeof(morseR)/sizeof(morseR[0])); // R
  delay(200);
  playMorse(morseD, sizeof(morseD)/sizeof(morseD[0])); // D
  delay(200);
  playMorse(morseA, sizeof(morseA)/sizeof(morseA[0])); // A

  // Espera 3 segundos antes de repetir o nome
  delay(3000);
}

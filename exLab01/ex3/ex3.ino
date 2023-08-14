// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// Define os padrões das letras em código Morse
const int morseE[] = {0};         // letra E 
const int morseD[] = {1, 1, 1};   // letra D 
const int morseU[] = {0, 0, 1};   // letra U 
const int morseA[] = {0, 1};      // letra A 
const int morseR[] = {0,0}; //letra R

// Função para reproduzir um caractere Morse
void playMorse(const int *morsePattern, int length) {
  for (int i = 0; i < length; i++) {
    digitalWrite(led, HIGH);    // Acende o LED (ponto ou traço)
    delay(morsePattern[i] == 0 ? 150 : 400); // Duração do ponto ou traço
    digitalWrite(led, LOW);     // Apaga o LED
    delay(100);                  // Espaço entre os sinais
  }
}

// roda uma vez quando resetada:
void setup() {
  // inicializa o pino digital como SAÍDA do microcontrolador
  pinMode(led, OUTPUT);
}

// rotina de loop - roda indefinitivamente:
void loop() {
  // Reproduz o nome "eduarda" em código Morse
  playMorse(morseE, sizeof(morseE)/sizeof(morseE[0])); // E
  delay(200);                                          // Espaço entre letras
  playMorse(morseD, sizeof(morseD)/sizeof(morseD[0])); // D
  delay(200);                                          // Espaço entre letras
  playMorse(morseU, sizeof(morseU)/sizeof(morseU[0])); // U
  delay(200);                                          // Espaço entre letras
  playMorse(morseA, sizeof(morseA)/sizeof(morseA[0])); // A
  delay(200);                                          // Espaço entre letras
  playMorse(morseR, sizeof(morseR)/sizeof(morseR[0])); // R
  delay(200);                                          // Espaço entre letras
  playMorse(morseD, sizeof(morseD)/sizeof(morseD[0])); // D
  delay(200);                                          // Espaço entre letras
  playMorse(morseA, sizeof(morseA)/sizeof(morseA[0])); // A

  // Espera 3 segundos antes de repetir o nome
  delay(3000);
}

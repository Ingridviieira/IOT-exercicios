void setup() {
    Serial.begin(9600);
}

void loop() {
    if (Serial.available()) {
        String mensagem = Serial.readString();
        Serial.println("Recebido: " + mensagem);
    } else {
    
        String mensagem = "";
        while (Serial.available()) {
        char c = Serial.read();
        mensagem += c;
        }
        if (mensagem != "") {
        Serial.println("Mensagem do Arduino 1: " + mensagem);
        }
    }
}

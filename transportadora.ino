const int sensorIR1Pin = 2;
const int sensorIR2Pin = 3;
const int motorPin = 9;

void setup() {
  // Inicializar los pines de los sensores IR como entradas
  pinMode(sensorIR1Pin, INPUT);
  pinMode(sensorIR2Pin, INPUT);
  
  // Inicializar el pin del motor como salida
  pinMode(motorPin, OUTPUT);
  
  // Inicializar el motor apagado
  digitalWrite(motorPin, LOW);
  
  // Inicializar comunicación serial para depuración (opcional)
  Serial.begin(9600);
}

void loop() {
  // Leer el estado de los sensores IR
  int sensorIR1State = digitalRead(sensorIR1Pin);
  int sensorIR2State = digitalRead(sensorIR2Pin);
  
  // Verificar si el primer sensor IR detecta presencia
  if (sensorIR1State == HIGH) {
    // Encender el motor
    digitalWrite(motorPin, HIGH);
    Serial.println("Motor encendido: Sensor IR 1 detecta presencia");
  }

  // Verificar si el segundo sensor IR detecta presencia
  if (sensorIR2State == HIGH) {
    // Apagar el motor
    digitalWrite(motorPin, LOW);
    Serial.println("Motor apagado: Sensor IR 2 detecta presencia");
  }
}

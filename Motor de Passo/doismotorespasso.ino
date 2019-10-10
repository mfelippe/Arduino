/* Marcos Felippe dos Santos Vieira Alves
 * Email: mfelippe.bsb@hotmail.com
 *  
 *  Este código faz dois motores de passo funcionar ao mesmo tempo.
 *  
 *  
 */





int motorA[4]={2,3,4,5}; // Pinos do MOTOR A
int motorB[4]={9,8,7,6}; // Pinos do MOTOR B
int temp = 10; // tempo para rotação entre os pinos reponde melhor para valores acima de 5ms


void setup() {


  
  for(int i = 0; i<4  ; i++){
    pinMode(motorA[i], OUTPUT);
    pinMode(motorB[i],OUTPUT);}
    Serial.begin(9600);
}

void loop() {
 
   for(int i = 3; i>=0; i--){
        Serial.println(motorA[i]);
        Serial.println(motorB[i]);
        digitalWrite(motorA[i], HIGH);
        digitalWrite(motorB[i], HIGH);
        delay(temp);
        digitalWrite(motorA[i], LOW);
        digitalWrite(motorB[i], LOW);
        delay(temp);
    
    }

}

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


  
  for(int i = 0; i<4  ; i++){     // inicializando as entradas dos motores
    pinMode(motorA[i], OUTPUT);
    pinMode(motorB[i],OUTPUT);}
    Serial.begin(9600);
}

void loop() {   //loop para setar os pinos para os motores girarem
  
   for(int i = 3; i>=0; i--){ //alterando i++ ou i-- vc alterna o sentido dos motores
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

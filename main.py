from gpio import * 
from time import * 
 
def main():  
    pinMode(1, IN)  
    pinMode(2, OUT)  
    pinMode(3, OUT)  
    while True:   
        T = analogRead(1);  
        T = ((float(T)/1023)*200-100);   
        if T < 20:    
            digitalWrite(2, LOW); 
            print("AirCooler off");    
            digitalWrite(3, HIGH);    
            print("HeatingElement on");    
            print("Temperature now: " + str(T));    
            delay(3000);   
        elif T > 25:    
            digitalWrite(3, LOW);   
            print("HeatingElement off");    
            digitalWrite(2, HIGH);    
            print("AirCooler on");    
            print("Temperature now: " + str(T));    
            delay(3000);   
        else:
            print("Temperature now: " + str(T));    
            delay(1000); 
 
if __name__ == "__main__":  
    main() 
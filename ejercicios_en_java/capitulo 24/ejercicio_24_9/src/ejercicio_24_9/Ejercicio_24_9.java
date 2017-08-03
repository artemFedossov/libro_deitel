/*  despliegue el mensaje "Introduzca dos numeros" por medio de la clase
    JOptionPane.
    asigne el producto de b y c a la variable a
 */
package ejercicio_24_9;
import javax.swing.JOptionPane; // Importa la clase para tomar datos y mostrar datos en forma de cuadro

public class Ejercicio_24_9 {

    public static void main(String[] args) {
        int numeroB,
            numeroC,
            numeroA;
        String numeroUno,
               numeroDos;
        
        // muestra un mensaje en forma de dialogo y captura un string por teclado asignandolo a una variable
        numeroUno = JOptionPane.showInputDialog("Introduzca el primer entero: ");
        numeroDos = JOptionPane.showInputDialog("Introduzca el segundo numero: ");
    
        //convierte los datos de string a int
        numeroB = Integer.parseInt(numeroUno);
        numeroC = Integer.parseInt(numeroDos);
        
        numeroA = numeroB * numeroC;
        
        //despliega un mensaje en forma de dialogo
        JOptionPane.showMessageDialog(null, "El producto de "+numeroB+" * "+numeroC+" es igual a: "+numeroA, "Resultado", JOptionPane.PLAIN_MESSAGE);
        
        System.exit(0); // termina el programa es necesario para terminar una aplicacion grafica
      
    }// fin del main
    
    
}

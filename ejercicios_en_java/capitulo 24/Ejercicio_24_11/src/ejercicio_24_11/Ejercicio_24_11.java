/*
    Escribir un programa que solicite al usuario dos numeros y imprimir la
    suma, el producto y la diferencia y el cociente de los dos numeros
 */
package ejercicio_24_11;
import javax.swing.JOptionPane;

public class Ejercicio_24_11 {

    public static void main(String[] args) {
        int numeroA,
            numeroB;
        String primerNumero,
               segundoNumero;
        
        primerNumero = JOptionPane.showInputDialog("Introduzca el primer numero");
        segundoNumero = JOptionPane.showInputDialog("introduzca el segundo numero");
        
        numeroA = Integer.parseInt(primerNumero);
        numeroB = Integer.parseInt(segundoNumero);
        
        
        
        JOptionPane.showMessageDialog(null, "la suma es " + (numeroA + numeroB), "Resultado de la suma",JOptionPane.PLAIN_MESSAGE);
        JOptionPane.showMessageDialog(null, "El producto es " + (numeroA * numeroB),"Resultado del producto",JOptionPane.PLAIN_MESSAGE);
        JOptionPane.showMessageDialog(null, "La diferencia es "+ (numeroA - numeroB),"Resultado de la diferencia",JOptionPane.PLAIN_MESSAGE);
        JOptionPane.showMessageDialog(null, "la division es "+((double)numeroA / numeroB),"Resultado del cociente",JOptionPane.PLAIN_MESSAGE);
        
        System.exit(0);
    }
   
    
}

/*
    Desplegar mensajes
 */
package ejercico_24_10;
import javax.swing.JOptionPane; // importa la clase de cuadros de mensaje

public class Ejercico_24_10 {

    public static void main(String[] args) {
        
        int x = 2,
            y = 3;
        
        JOptionPane.showMessageDialog(null, "x = "+x);
        JOptionPane.showMessageDialog(null, "El valor de x + x es: "+(x+x));
        JOptionPane.showMessageDialog(null, "x = ");
        JOptionPane.showMessageDialog(null, (x+y)+" = "+(x+y));
        
        System.exit(0); //cierre de aplicacion grafica
        
    }//fin del main
    
}

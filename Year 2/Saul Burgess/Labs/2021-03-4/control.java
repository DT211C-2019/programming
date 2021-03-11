
/***********************************************************************************************************************
 * @description: Control class
 * @author: Saul Burgess
 * @date: 2021-03-04
***********************************************************************************************************************/

import java.awt.BorderLayout;
import java.awt.event.*;
import javax.lang.model.util.ElementScanner6;
import javax.swing.*;

public class control {

    // Sets the random number, will proc each time the program resets
    static int rand = (int) (Math.random() * 10);
    static int count = 0;
    static String input;

    public static void main(String[] args) {

        // Defines frame and panel
        JFrame frame = new JFrame();
        JPanel panel1 = new JPanel();

        JButton genRanNum = new JButton("Generate the random number");
        panel1.add(genRanNum, BorderLayout.CENTER);
        genRanNum.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                rand = (int) (Math.random() * 100);
                count = 0;
                JOptionPane.showMessageDialog(frame, ("New number generated"));
            }
        });

        JLabel description = new JLabel("Then make a guess..." + rand);
        panel1.add(description, BorderLayout.CENTER);

        JTextField guessNum = new JTextField(5);
        panel1.add(guessNum, BorderLayout.CENTER);
        guessNum.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                input = guessNum.getText();
            }
        });

        JButton checkNum = new JButton("Check your Guess");
        panel1.add(checkNum, BorderLayout.CENTER);
        checkNum.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                try {
                    int num = Integer.parseInt(input);

                    if (num == rand) {
                        JOptionPane.showMessageDialog(frame, ("Your input " + num + " is equal to the random value "
                                + rand + " It took you " + count + " tries."));
                    } else if (num > rand) {
                        JOptionPane.showMessageDialog(frame, ("Your input " + num + " is too high"));
                        count++;
                    } else if (num < rand) {
                        JOptionPane.showMessageDialog(frame, ("Your input " + num + " is too low"));
                        count++;
                    }

                } catch (Exception f) {
                    JOptionPane.showMessageDialog(frame, ("Please enter a whole positive number"));
                }
            }
        });

        frame.add(panel1);
        frame.setSize(250, 150);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }

}

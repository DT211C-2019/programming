
/***********************************************************************************************************************
 * @description: Control class
 * @author: Saul Burgess
 * @date: 2021-02-25
***********************************************************************************************************************/

import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.event.*;
import javax.swing.*;

public class control {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        JPanel panel1 = new JPanel();

        JLabel labelA = new JLabel("these are a few buttons");
        panel1.add(labelA, BorderLayout.CENTER);

        JButton buttonA = new JButton("this is a button");
        panel1.add(buttonA, BorderLayout.LINE_START);
        buttonA.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                JOptionPane.showMessageDialog(frame, "Hello, you just clicked a button!");
            }
        });

        JButton buttonB = new JButton("this is also a button");
        panel1.add(buttonB, BorderLayout.LINE_END);
        buttonB.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                JOptionPane.showMessageDialog(frame, "Hello, you just clicked a button!");
            }
        });

        JCheckBox checkBoxA = new JCheckBox("This is a checkbox");
        panel1.add(checkBoxA, BorderLayout.CENTER);

        JLabel labelB = new JLabel("Finally, here's a text box");
        panel1.add(labelB, BorderLayout.CENTER);

        JTextField textA = new JTextField(5);
        panel1.add(textA, BorderLayout.CENTER);
        textA.setToolTipText("Enter your name and press enter!");
        textA.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                String text = textA.getText();
                JOptionPane.showMessageDialog(frame, ("Hello " + text + "!"));
            }
        });

        JLabel labelC = new JLabel("Hover over me!");
        labelC.setOpaque(true);
        labelC.setBackground(Color.red);
        panel1.add(labelC, BorderLayout.CENTER);
        labelC.addMouseListener(new MouseListener() {
            public void mouseEntered(MouseEvent e) {
                JOptionPane.showMessageDialog(frame, ("Mouse entered the panel"));
            }

            public void mouseReleased(MouseEvent e) {
            }

            public void mousePressed(MouseEvent e) {
            }

            public void mouseClicked(MouseEvent e) {
                JOptionPane.showMessageDialog(frame, ("Mouse clicked the panel"));
            }

            public void mouseExited(MouseEvent e) {
                JOptionPane.showMessageDialog(frame, ("Mouse left the panel"));
            }

        });

        frame.add(panel1);

        frame.setSize(160, 300);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);

    }
}

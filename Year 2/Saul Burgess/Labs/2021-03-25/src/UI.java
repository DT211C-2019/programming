import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class UI implements ActionListener {
    JTextField tf1,tf2,tf3;
    JButton b1,b2;
    UI(){
        JFrame f= new JFrame();
        tf1=new JTextField("First Name");
        tf1.setBounds(50,50,150,20);
        tf2=new JTextField("Last Name");
        tf2.setBounds(50,100,150,20);
        tf3=new JTextField("City");
        tf3.setBounds(50,150,150,20);
        b1=new JButton("Save");
        b1.setBounds(50,200,70,80);
        b2=new JButton("Show");
        b2.setBounds(120,200,80,80);
        b1.addActionListener(this);
        b2.addActionListener(this);
        f.add(tf1);f.add(tf2);f.add(tf3);f.add(b1);f.add(b2);
        f.setSize(300,300);
        f.setLayout(null);
        f.setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        if(e.getSource()==b1){


        }else if(e.getSource()==b2){

        }

    }
}

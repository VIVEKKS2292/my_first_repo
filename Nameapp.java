import java.awt.Color;             //All the awt classes can be replaced by java.awt.*
import java.awt.Dimension;
import java.awt.Font;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.BorderFactory;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;
import javax.swing.SwingConstants;


public class Nameapp extends JFrame implements ActionListener{
	
	private static final long serialVersionUID = 1L;
	private JTextField nameField;
	private JLabel nameLabel;
	private JButton submitButton;
	private JPanel panel;
	
	public Nameapp() {
		super("Name App");
		panel = new JPanel(new GridLayout(2,2,5,5));
		panel.setBorder(BorderFactory.createEmptyBorder(10,10,10,10));
		panel.setPreferredSize(new Dimension(400, 150));
	
		nameField = new JTextField();
		nameField.setFont(new Font("Serif", Font.PLAIN, 18));
		
		nameLabel = new JLabel("Enter Your Name:");
		nameLabel.setFont(new Font("Serif", Font.BOLD, 18));
		nameLabel.setHorizontalAlignment(SwingConstants.RIGHT);
		
		submitButton = new JButton("Submit");
		submitButton.setFont(new Font("Serif", Font.BOLD, 18));
		submitButton.setForeground(Color.YELLOW);
		
		panel.add(nameLabel);
		panel.add(nameField);
		panel.add(new JLabel(""));
		panel.add(submitButton);
		
		submitButton.addActionListener(this);
		
		add(panel);
		
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setSize(500,200);
		setLocationRelativeTo(null);
		setVisible(true);
		
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		if (e.getSource()==submitButton) {
			String name = nameField.getText();
			if(!name.isEmpty()) {
				nameLabel.setText(name);
				nameLabel.setFont(new Font("Serif", Font.BOLD, 24));
				nameLabel.setForeground(Color.RED);
				nameField.setText("");
			}
		}
	}
	
	public static void main(String[] args) {
		new Nameapp();
	}
}
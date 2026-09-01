
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



#include <javax/swing.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "JButton.h"
#include "JTextField.h"
#include "GridLayout.h"
#include "Font.h"

class PropertiesJPanel: public javax::swing::JPanel {

public: PropertiesJPanel(){
this->initComponents();
    
}


    public: void set(JPanel panel){
this->workAreaPropertiesJPanel.add(panel);
    
this->repaint();
    
}


    private: void initComponents(){
this->workAreaPropertiesJPanel= javax::swing::JPanel();
    
this->modifierJPanel= javax::swing::JPanel();
    
this->copyVerticalJButton= javax::swing::JButton();
    
this->copyHorizontalJButton= javax::swing::JButton();
    
this->rotateJPanel= javax::swing::JPanel();
    
this->rotateJButton= javax::swing::JButton();
    
this->angleJTextField= javax::swing::JTextField();
    
this->jPanel7= javax::swing::JPanel();
    
this->upJButton= javax::swing::JButton();
    
this->downJButton= javax::swing::JButton();
    
this->jPanel8= javax::swing::JPanel();
    
this->leftJButton= javax::swing::JButton();
    
this->rightJButton= javax::swing::JButton();
    
setLayout(java::awt::GridLayout(2, 1));
    
this->workAreaPropertiesJPanel.setLayout(java::awt::GridLayout());
    
add(this->workAreaPropertiesJPanel);
    
this->modifierJPanel.setLayout(java::awt::GridLayout(6, 0));
    
this->copyVerticalJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->copyVerticalJButton.setText("Copy Vertical");
    
this->modifierJPanel.add(this->copyVerticalJButton);
    
this->copyHorizontalJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->copyHorizontalJButton.setText("Copy Horizontal");
    
this->modifierJPanel.add(this->copyHorizontalJButton);
    
this->rotateJPanel.setLayout(java::awt::GridLayout(1, 2));
    
this->rotateJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->rotateJButton.setText("Rotate");
    
this->rotateJPanel.add(this->rotateJButton);
    
this->angleJTextField.setText("Angle");
    
this->rotateJPanel.add(this->angleJTextField);
    
this->modifierJPanel.add(this->rotateJPanel);
    
this->jPanel7.setLayout(java::awt::GridLayout(1, 2));
    
this->upJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->upJButton.setText("Up");
    
this->jPanel7.add(this->upJButton);
    
this->downJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->downJButton.setText("Down");
    
this->jPanel7.add(this->downJButton);
    
this->modifierJPanel.add(this->jPanel7);
    
this->jPanel8.setLayout(java::awt::GridLayout(1, 2));
    
this->leftJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->leftJButton.setText("Left");
    
this->jPanel8.add(this->leftJButton);
    
this->rightJButton.setFont(java::awt::Font("Dialog", 0, 10));
    
this->rightJButton.setText("Right");
    
this->jPanel8.add(this->rightJButton);
    
this->modifierJPanel.add(this->jPanel8);
    
add(this->modifierJPanel);
    
}


    private: javax::swing::JButton rotateJButton;

    private: javax::swing::JButton copyVerticalJButton;

    private: javax::swing::JButton leftJButton;

    private: javax::swing::JPanel rotateJPanel;

    private: javax::swing::JTextField angleJTextField;

    private: javax::swing::JPanel workAreaPropertiesJPanel;

    private: javax::swing::JPanel modifierJPanel;

    private: javax::swing::JButton upJButton;

    private: javax::swing::JPanel jPanel8;

    private: javax::swing::JButton downJButton;

    private: javax::swing::JPanel jPanel7;

    private: javax::swing::JButton rightJButton;

    private: javax::swing::JButton copyHorizontalJButton;

};

            



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
        



            #include <vector>
        
#include <org/allbinary/thread/ARunnable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JDialog.h"
#include "CloseJDialogListenerInterface.h"
#include "Frame.h"
#include "JButton.h"
#include "JLabel.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"
#include "EventQueue.h"
#include "JFrame.h"

class BasicTextJDialog: public javax::swing::JDialog {

    public: static void main(std::vector<std::string> args){
java.awt.EventQueue.invokeLater(class extends ARunnable
                                {
                                
    public: void run(){
BasicTextJDialog(javax::swing::JFrame(), true, "Test").setVisible(true);
    
}

                                }
                            );
    
}


    private: CloseJDialogListenerInterface closeListenerInterface;

public: BasicTextJDialog(java::awt::Frame parent, bool modal, std::string text) : javax::swing::JDialog(parent, modal){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initComponents();
    
this->setText(text);
    
}


    public: void setText(std::string text){
this->textJLabel.setText(text);
    
}


    public: void addCloseListener(CloseJDialogListenerInterface closeListenerInterface){
this->closeListenerInterface= closeListenerInterface;
    
}


public: BasicTextJDialog(std::string text){
this->initComponents();
    
this->textJLabel.setText(text);
    
}


    private: void initComponents(){
this->jButton1= javax::swing::JButton();
    
this->textJLabel= javax::swing::JLabel();
    
setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);
    
this->jButton1.setText("OK");
    
jButton1.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
jButton1ActionPerformed(evt);
    
}

                                }
                            );
    
this->textJLabel.setText("No Text Set");
    

    javax::swing::GroupLayout layout = javax::swing::GroupLayout(getContentPane());;
    
getContentPane().setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addGap(80, 80, 80).addComponent(jButton1)).addGroup(layout.createSequentialGroup().addContainerGap().addComponent(textJLabel, javax.swing.GroupLayout.DEFAULT_SIZE, 184, Short::MAX_VALUE))).addContainerGap()));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addGap(20, 20, 20).addComponent(textJLabel, javax.swing.GroupLayout.PREFERRED_SIZE, 20, javax.swing.GroupLayout.PREFERRED_SIZE).addGap(30, 30, 30).addComponent(jButton1)));
    
pack();
    
}


    private: void jButton1ActionPerformed(java::awt::event::ActionEvent evt){
this->setVisible(false);
    

                        if(this->closeListenerInterface != 
                                    nullptr
                                )
                        
                                    {
                                    this->closeListenerInterface.onClose();
    

                                    }
                                
}


    private: javax::swing::JButton jButton1;

    private: javax::swing::JLabel textJLabel;

};

            


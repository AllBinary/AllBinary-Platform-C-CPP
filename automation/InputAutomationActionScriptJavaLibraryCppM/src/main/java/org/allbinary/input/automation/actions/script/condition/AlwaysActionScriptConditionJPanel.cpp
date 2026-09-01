
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
        



#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "AlwaysActionScriptConditionInterface.h"
#include "JDialog.h"
#include "JLabel.h"
#include "JButton.h"
#include "JComboBox.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "DefaultComboBoxModel.h"
#include "GroupLayout.h"
#include "Short.h"

class AlwaysActionScriptConditionJPanel: public javax::swing::JPanel {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: AlwaysActionScriptConditionInterface alwaysActionScriptConditionInterface;

public: AlwaysActionScriptConditionJPanel(AlwaysActionScriptConditionInterface alwaysActionScriptConditionInterface){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    
this->initComponents();
    
this->alwaysActionScriptConditionInterface= alwaysActionScriptConditionInterface;
    
this->set();
    
}


    private: void set(){

                        if(this->alwaysActionScriptConditionInterface.isIsOn())
                        
                                    {
                                    this->alwaysJComboBox.setSelectedIndex(0);
    

                                    }
                                
                        else {
                            this->alwaysJComboBox.setSelectedIndex(1);
    

                        }
                            
this->alwaysActionScriptConditionInterface.log();
    
}


    private: void update(){

                        if(this->alwaysJComboBox.getSelectedIndex() == 0)
                        
                                    {
                                    this->alwaysActionScriptConditionInterface.setIsOn(true);
    

                                    }
                                
                        else {
                            this->alwaysActionScriptConditionInterface.setIsOn(false);
    

                        }
                            
this->alwaysActionScriptConditionInterface.log();
    
}


    public: javax::swing::JDialog getAlwaysActionJDialog(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->alwaysActionJDialog;
    
}


    public: void setAlwaysActionJDialog(javax::swing::JDialog alwaysActionJDialog){
this->alwaysActionJDialog= alwaysActionJDialog;
    
}


    private: void initComponents(){
this->alwaysActionJDialog= javax::swing::JDialog();
    
this->titleJLabel= javax::swing::JLabel();
    
this->okJButton= javax::swing::JButton();
    
this->jLabel2= javax::swing::JLabel();
    
this->alwaysJComboBox= javax::swing::JComboBox();
    
this->alwaysActionJButton= javax::swing::JButton();
    
this->jLabel1= javax::swing::JLabel();
    
this->alwaysActionJDialog.setMinimumSize(java::awt::Dimension(250, 150));
    
this->titleJLabel.setText("Always Condition Options");
    
this->okJButton.setText("OK");
    
this->okJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
okJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel2.setText("On:");
    
this->alwaysJComboBox.setModel(javax::swing::DefaultComboBoxModel(
                                                {
                                                    "true","false"
                                                }));
    

    javax::swing::GroupLayout alwaysActionJDialogLayout = javax::swing::GroupLayout(this->alwaysActionJDialog.getContentPane());;
    
this->alwaysActionJDialog.getContentPane().setLayout(alwaysActionJDialogLayout);
    
alwaysActionJDialogLayout.setHorizontalGroup(alwaysActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(alwaysActionJDialogLayout.createSequentialGroup().addGroup(alwaysActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(alwaysActionJDialogLayout.createSequentialGroup().addGap(47, 47, 47).addGroup(alwaysActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false).addGroup(javax.swing.GroupLayout.Alignment.TRAILING, alwaysActionJDialogLayout.createSequentialGroup().addComponent(jLabel2).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE).addComponent(alwaysJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addComponent(titleJLabel))).addGroup(alwaysActionJDialogLayout.createSequentialGroup().addGap(79, 79, 79).addComponent(okJButton))).addContainerGap(45, Short::MAX_VALUE)));
    
alwaysActionJDialogLayout.setVerticalGroup(alwaysActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(alwaysActionJDialogLayout.createSequentialGroup().addContainerGap().addComponent(titleJLabel).addGap(20, 20, 20).addGroup(alwaysActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(alwaysJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(jLabel2)).addGap(15, 15, 15).addComponent(okJButton).addContainerGap()));
    
setMinimumSize(java::awt::Dimension(100, 0));
    
this->alwaysActionJButton.setText("Edit");
    
this->alwaysActionJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
alwaysActionJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel1.setText("Always:");
    

    javax::swing::GroupLayout layout = javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addComponent(jLabel1).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 33, Short::MAX_VALUE).addComponent(alwaysActionJButton)));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel1).addComponent(alwaysActionJButton)));
    
}


    private: void okJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->update();
    
this->getAlwaysActionJDialog().setVisible(false);
    
}


    private: void alwaysActionJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->getAlwaysActionJDialog().setVisible(true);
    
}


    private: javax::swing::JButton alwaysActionJButton;

    private: javax::swing::JDialog alwaysActionJDialog;

    private: javax::swing::JComboBox alwaysJComboBox;

    private: javax::swing::JLabel jLabel1;

    private: javax::swing::JLabel jLabel2;

    private: javax::swing::JButton okJButton;

    private: javax::swing::JLabel titleJLabel;

};

            


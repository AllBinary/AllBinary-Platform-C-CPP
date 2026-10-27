
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/JPanel.h"
#include "org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptConditionInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/JTextField.h"
#include "org/allbinary/input/automation/actions/script/condition/JDialog.h"
#include "org/allbinary/input/automation/actions/script/condition/JLabel.h"
#include "org/allbinary/input/automation/actions/script/condition/JButton.h"
#include "org/allbinary/input/automation/actions/script/condition/Dimension.h"
#include "org/allbinary/input/automation/actions/script/condition/ActionListener.h"
#include "org/allbinary/input/automation/actions/script/condition/ActionEvent.h"
#include "org/allbinary/input/automation/actions/script/condition/GroupLayout.h"
#include "org/allbinary/input/automation/actions/script/condition/Short.h"

class TimeIntervalActionScriptConditionJPanel: public javax::swing::JPanel {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: TimeIntervalActionScriptConditionInterface* timeIntervalActionScriptConditionInterface;

public: TimeIntervalActionScriptConditionJPanel(TimeIntervalActionScriptConditionInterface* timeIntervalActionScriptConditionInterface){
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->initComponents();
    
this->timeIntervalActionScriptConditionInterface= timeIntervalActionScriptConditionInterface;
    
this->set();
    
}


    private: void set(){
this->getTimeIntervalJTextField()->setText(std::to_string(delay));
    
this->timeIntervalActionScriptConditionInterface->log();
    
}


    private: void update(){
this->timeIntervalActionScriptConditionInterface->getTimeDelayHelper()->delay= Integer.valueOf(this->getTimeIntervalJTextField()->getText());
    
this->timeIntervalActionScriptConditionInterface->log();
    
}


    public: javax::swing::JTextField* getTimeIntervalJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeIntervalJTextField;
    
}


    public: void setTimeIntervalJTextField(javax::swing::JTextField* timeIntervalJTextField){
this->timeIntervalJTextField= timeIntervalJTextField;
    
}


    public: javax::swing::JDialog* getTimeIntervalActionJDialog(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeIntervalActionJDialog;
    
}


    public: void setTimeIntervalActionJDialog(javax::swing::JDialog* timeIntervalActionJDialog){
this->timeIntervalActionJDialog= timeIntervalActionJDialog;
    
}


    private: void initComponents(){
this->timeIntervalActionJDialog= new javax::swing::JDialog();
    
this->titleJLabel= new javax::swing::JLabel();
    
this->okJButton= new javax::swing::JButton();
    
this->jLabel2= new javax::swing::JLabel();
    
this->timeIntervalJTextField= new javax::swing::JTextField();
    
this->timeIntervalActionJButton= new javax::swing::JButton();
    
this->jLabel1= new javax::swing::JLabel();
    
this->timeIntervalActionJDialog->setMinimumSize(new java::awt::Dimension(250, 150));
    
this->titleJLabel->setText("Time Interval Condition Options");
    
this->okJButton->setText("OK");
    
this->okJButton->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
okJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel2->setText("Time (ms):");
    

    javax::swing::GroupLayout* timeIntervalActionJDialogLayout = new javax::swing::GroupLayout(this->timeIntervalActionJDialog->getContentPane());;
    
this->timeIntervalActionJDialog->getContentPane()->setLayout(timeIntervalActionJDialogLayout);
    
timeIntervalActionJDialogLayout->setHorizontalGroup(timeIntervalActionJDialogLayout->createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)->addGroup(timeIntervalActionJDialogLayout->createSequentialGroup()->addGroup(timeIntervalActionJDialogLayout->createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)->addGroup(javax.swing.GroupLayout.Alignment.LEADING, timeIntervalActionJDialogLayout->createSequentialGroup()->addGap(82, 82, 82)->addComponent(okJButton))->addGroup(javax.swing.GroupLayout.Alignment.LEADING, timeIntervalActionJDialogLayout->createSequentialGroup()->addGap(32, 32, 32)->addGroup(timeIntervalActionJDialogLayout->createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)->addGroup(timeIntervalActionJDialogLayout->createSequentialGroup()->addComponent(jLabel2)->addGap(16, 16, 16)->addComponent(timeIntervalJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 85, Short::MAX_VALUE))->addComponent(titleJLabel))))->addContainerGap(36, Short::MAX_VALUE)));
    
timeIntervalActionJDialogLayout->setVerticalGroup(timeIntervalActionJDialogLayout->createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)->addGroup(timeIntervalActionJDialogLayout->createSequentialGroup()->addContainerGap()->addComponent(titleJLabel)->addGap(20, 20, 20)->addGroup(timeIntervalActionJDialogLayout->createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)->addComponent(jLabel2)->addComponent(timeIntervalJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))->addGap(15, 15, 15)->addComponent(okJButton)->addContainerGap()));
    
setMinimumSize(new java::awt::Dimension(100, 0));
    
this->timeIntervalActionJButton->setText("Edit");
    
this->timeIntervalActionJButton->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
timeIntervalActionJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel1->setText("Time Interval:");
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)->addGroup(layout->createSequentialGroup()->addComponent(jLabel1)->addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)->addComponent(timeIntervalActionJButton)));
    
layout->setVerticalGroup(layout->createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)->addGroup(layout->createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)->addComponent(jLabel1)->addComponent(timeIntervalActionJButton)));
    
}


    private: void okJButtonActionPerformed(java::awt::event::ActionEvent* evt){
this->update();
    
this->getTimeIntervalActionJDialog()->setVisible(false);
    
}


    private: void timeIntervalActionJButtonActionPerformed(java::awt::event::ActionEvent* evt){
this->getTimeIntervalActionJDialog()->setVisible(true);
    
}


    private: javax::swing::JLabel* jLabel1;

    private: javax::swing::JLabel* jLabel2;

    private: javax::swing::JButton* okJButton;

    private: javax::swing::JButton* timeIntervalActionJButton;

    private: javax::swing::JDialog* timeIntervalActionJDialog;

    private: javax::swing::JTextField* timeIntervalJTextField;

    private: javax::swing::JLabel* titleJLabel;

};

            


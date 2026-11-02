
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_TIMEINTERVALACTIONSCRIPTCONDITIONJPANEL_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_TIMEINTERVALACTIONSCRIPTCONDITIONJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptConditionJPanel.h"
        

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


TimeIntervalActionScriptConditionJPanel::TimeIntervalActionScriptConditionJPanel(TimeIntervalActionScriptConditionInterface* timeIntervalActionScriptConditionInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->initComponents();
    
this->timeIntervalActionScriptConditionInterface= timeIntervalActionScriptConditionInterface;
    
this->set();
    
}


    auto TimeIntervalActionScriptConditionJPanel::set() -> void{
this->getTimeIntervalJTextField()->setText(std::to_string(delay));
    
this->timeIntervalActionScriptConditionInterface->log();
    
}


    auto TimeIntervalActionScriptConditionJPanel::update() -> void{
this->timeIntervalActionScriptConditionInterface->getTimeDelayHelper()->delay= Integer.valueOf(this->getTimeIntervalJTextField()->getText());
    
this->timeIntervalActionScriptConditionInterface->log();
    
}


    auto TimeIntervalActionScriptConditionJPanel::getTimeIntervalJTextField() -> javax::swing::JTextField*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeIntervalJTextField;
    
}


    auto TimeIntervalActionScriptConditionJPanel::setTimeIntervalJTextField(javax::swing::JTextField* timeIntervalJTextField) -> void{
this->timeIntervalJTextField= timeIntervalJTextField;
    
}


    auto TimeIntervalActionScriptConditionJPanel::getTimeIntervalActionJDialog() -> javax::swing::JDialog*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeIntervalActionJDialog;
    
}


    auto TimeIntervalActionScriptConditionJPanel::setTimeIntervalActionJDialog(javax::swing::JDialog* timeIntervalActionJDialog) -> void{
this->timeIntervalActionJDialog= timeIntervalActionJDialog;
    
}


    auto TimeIntervalActionScriptConditionJPanel::initComponents() -> void{
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
    
this->okJButton->addActionListener([&]() {
    static thread_local TimeIntervalActionScriptConditionJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    TimeIntervalActionScriptConditionJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->okJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel2->setText("Time (ms):");
    

    javax::swing::GroupLayout* timeIntervalActionJDialogLayout = new javax::swing::GroupLayout(this->timeIntervalActionJDialog->getContentPane());;
    
this->timeIntervalActionJDialog->getContentPane()->setLayout(timeIntervalActionJDialogLayout);
    
timeIntervalActionJDialogLayout->setHorizontalGroup(timeIntervalActionJDialogLayout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(timeIntervalActionJDialogLayout->createSequentialGroup()->addGroup(timeIntervalActionJDialogLayout->createParallelGroup(javax.swing->GroupLayout->Alignment->TRAILING)->addGroup(javax.swing->GroupLayout->Alignment->LEADING, timeIntervalActionJDialogLayout->createSequentialGroup()->addGap(82, 82, 82)->addComponent(okJButton))->addGroup(javax.swing->GroupLayout->Alignment->LEADING, timeIntervalActionJDialogLayout->createSequentialGroup()->addGap(32, 32, 32)->addGroup(timeIntervalActionJDialogLayout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(timeIntervalActionJDialogLayout->createSequentialGroup()->addComponent(jLabel2)->addGap(16, 16, 16)->addComponent(timeIntervalJTextField, javax.swing->GroupLayout->DEFAULT_SIZE, 85, Short::MAX_VALUE))->addComponent(titleJLabel))))->addContainerGap(36, Short::MAX_VALUE)));
    
timeIntervalActionJDialogLayout->setVerticalGroup(timeIntervalActionJDialogLayout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(timeIntervalActionJDialogLayout->createSequentialGroup()->addContainerGap()->addComponent(titleJLabel)->addGap(20, 20, 20)->addGroup(timeIntervalActionJDialogLayout->createParallelGroup(javax.swing->GroupLayout->Alignment->BASELINE)->addComponent(jLabel2)->addComponent(timeIntervalJTextField, javax.swing->GroupLayout->PREFERRED_SIZE, javax.swing->GroupLayout->DEFAULT_SIZE, javax.swing->GroupLayout->PREFERRED_SIZE))->addGap(15, 15, 15)->addComponent(okJButton)->addContainerGap()));
    
setMinimumSize(new java::awt::Dimension(100, 0));
    
this->timeIntervalActionJButton->setText("Edit");
    
this->timeIntervalActionJButton->addActionListener([&]() {
    static thread_local TimeIntervalActionScriptConditionJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    TimeIntervalActionScriptConditionJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->timeIntervalActionJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel1->setText("Time Interval:");
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addComponent(jLabel1)->addPreferredGap(javax.swing->LayoutStyle->ComponentPlacement->RELATED, javax.swing->GroupLayout->DEFAULT_SIZE, Short::MAX_VALUE)->addComponent(timeIntervalActionJButton)));
    
layout->setVerticalGroup(layout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(layout->createParallelGroup(javax.swing->GroupLayout->Alignment->BASELINE)->addComponent(jLabel1)->addComponent(timeIntervalActionJButton)));
    
}


    auto TimeIntervalActionScriptConditionJPanel::okJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->update();
    
this->getTimeIntervalActionJDialog()->setVisible(false);
    
}


    auto TimeIntervalActionScriptConditionJPanel::timeIntervalActionJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->getTimeIntervalActionJDialog()->setVisible(true);
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_TIMEINTERVALACTIONSCRIPTCONDITIONJPANEL_CPP

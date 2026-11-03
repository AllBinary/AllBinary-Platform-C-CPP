
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_ALWAYSACTIONSCRIPTCONDITIONJPANEL_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_ALWAYSACTIONSCRIPTCONDITIONJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptConditionJPanel.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/JPanel.h"
#include "org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptConditionInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/JDialog.h"
#include "org/allbinary/input/automation/actions/script/condition/JLabel.h"
#include "org/allbinary/input/automation/actions/script/condition/JButton.h"
#include "org/allbinary/input/automation/actions/script/condition/JComboBox.h"
#include "org/allbinary/input/automation/actions/script/condition/Dimension.h"
#include "org/allbinary/input/automation/actions/script/condition/ActionListener.h"
#include "org/allbinary/input/automation/actions/script/condition/ActionEvent.h"
#include "org/allbinary/input/automation/actions/script/condition/DefaultComboBoxModel.h"
#include "org/allbinary/input/automation/actions/script/condition/GroupLayout.h"
#include "org/allbinary/input/automation/actions/script/condition/Short.h"


AlwaysActionScriptConditionJPanel::AlwaysActionScriptConditionJPanel(AlwaysActionScriptConditionInterface* alwaysActionScriptConditionInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->initComponents();
    
this->alwaysActionScriptConditionInterface= alwaysActionScriptConditionInterface;
    
this->set();
    
}


    auto AlwaysActionScriptConditionJPanel::set() -> void{

                        if(this->alwaysActionScriptConditionInterface->isIsOn())
                        
                                    {
                                    this->alwaysJComboBox->setSelectedIndex(0);
    

                                    }
                                
                        else {
                            this->alwaysJComboBox->setSelectedIndex(1);
    

                        }
                            
this->alwaysActionScriptConditionInterface->log();
    
}


    auto AlwaysActionScriptConditionJPanel::update() -> void{

                        if(this->alwaysJComboBox->getSelectedIndex() == 0)
                        
                                    {
                                    this->alwaysActionScriptConditionInterface->setIsOn(true);
    

                                    }
                                
                        else {
                            this->alwaysActionScriptConditionInterface->setIsOn(false);
    

                        }
                            
this->alwaysActionScriptConditionInterface->log();
    
}


    auto AlwaysActionScriptConditionJPanel::getAlwaysActionJDialog() -> javax::swing::JDialog*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->alwaysActionJDialog;
    
}


    auto AlwaysActionScriptConditionJPanel::setAlwaysActionJDialog(javax::swing::JDialog* alwaysActionJDialog) -> void{
this->alwaysActionJDialog= alwaysActionJDialog;
    
}


    auto AlwaysActionScriptConditionJPanel::initComponents() -> void{
this->alwaysActionJDialog= new javax::swing::JDialog();
    
this->titleJLabel= new javax::swing::JLabel();
    
this->okJButton= new javax::swing::JButton();
    
this->jLabel2= new javax::swing::JLabel();
    
this->alwaysJComboBox= new javax::swing::JComboBox();
    
this->alwaysActionJButton= new javax::swing::JButton();
    
this->jLabel1= new javax::swing::JLabel();
    
this->alwaysActionJDialog->setMinimumSize(new java::awt::Dimension(250, 150));
    
this->titleJLabel->setText("Always Condition Options");
    
this->okJButton->setText("OK");
    
this->okJButton->addActionListener([&]() {
    static thread_local AlwaysActionScriptConditionJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    AlwaysActionScriptConditionJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->okJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel2->setText("On:");
    
this->alwaysJComboBox->setModel(new javax::swing::DefaultComboBoxModel(
                                                {
                                                    "true","false"
                                                }));
    

    javax::swing::GroupLayout* alwaysActionJDialogLayout = new javax::swing::GroupLayout(this->alwaysActionJDialog->getContentPane());;
    
this->alwaysActionJDialog->getContentPane()->setLayout(alwaysActionJDialogLayout);
    
alwaysActionJDialogLayout->setHorizontalGroup(alwaysActionJDialogLayout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(alwaysActionJDialogLayout->createSequentialGroup()->addGroup(alwaysActionJDialogLayout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(alwaysActionJDialogLayout->createSequentialGroup()->addGap(47, 47, 47)->addGroup(alwaysActionJDialogLayout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING, false)->addGroup(javax.swing->GroupLayout->Alignment->TRAILING, alwaysActionJDialogLayout->createSequentialGroup()->addComponent(jLabel2)->addPreferredGap(javax.swing->LayoutStyle->ComponentPlacement->RELATED, javax.swing->GroupLayout->DEFAULT_SIZE, Short::MAX_VALUE)->addComponent(alwaysJComboBox, javax.swing->GroupLayout->PREFERRED_SIZE, javax.swing->GroupLayout->DEFAULT_SIZE, javax.swing->GroupLayout->PREFERRED_SIZE))->addComponent(titleJLabel)))->addGroup(alwaysActionJDialogLayout->createSequentialGroup()->addGap(79, 79, 79)->addComponent(okJButton)))->addContainerGap(45, Short::MAX_VALUE)));
    
alwaysActionJDialogLayout->setVerticalGroup(alwaysActionJDialogLayout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(alwaysActionJDialogLayout->createSequentialGroup()->addContainerGap()->addComponent(titleJLabel)->addGap(20, 20, 20)->addGroup(alwaysActionJDialogLayout->createParallelGroup(javax.swing->GroupLayout->Alignment->BASELINE)->addComponent(alwaysJComboBox, javax.swing->GroupLayout->PREFERRED_SIZE, javax.swing->GroupLayout->DEFAULT_SIZE, javax.swing->GroupLayout->PREFERRED_SIZE)->addComponent(jLabel2))->addGap(15, 15, 15)->addComponent(okJButton)->addContainerGap()));
    
setMinimumSize(new java::awt::Dimension(100, 0));
    
this->alwaysActionJButton->setText("Edit");
    
this->alwaysActionJButton->addActionListener([&]() {
    static thread_local AlwaysActionScriptConditionJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    AlwaysActionScriptConditionJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->alwaysActionJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jLabel1->setText("Always:");
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addComponent(jLabel1)->addPreferredGap(javax.swing->LayoutStyle->ComponentPlacement->RELATED, 33, Short::MAX_VALUE)->addComponent(alwaysActionJButton)));
    
layout->setVerticalGroup(layout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(layout->createParallelGroup(javax.swing->GroupLayout->Alignment->BASELINE)->addComponent(jLabel1)->addComponent(alwaysActionJButton)));
    
}


    auto AlwaysActionScriptConditionJPanel::okJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->update();
    
this->getAlwaysActionJDialog()->setVisible(false);
    
}


    auto AlwaysActionScriptConditionJPanel::alwaysActionJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->getAlwaysActionJDialog()->setVisible(true);
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_ALWAYSACTIONSCRIPTCONDITIONJPANEL_CPP

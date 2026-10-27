
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_INPUTAUTOMATIONTYPEJPANEL_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_INPUTAUTOMATIONTYPEJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/InputAutomationTypeJPanel.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/JPanel.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JComboBox.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JLabel.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/DefaultComboBoxModel.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/GroupLayout.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/Short.h"


InputAutomationTypeJPanel::InputAutomationTypeJPanel(){
this->initComponents();
    
}


    auto InputAutomationTypeJPanel::getInputAutomationTypeJComboBox() -> javax::swing::JComboBox*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inputAutomationTypeJComboBox;
    
}


    auto InputAutomationTypeJPanel::setInputAutomationTypeJComboBox(javax::swing::JComboBox* inputAutomationTypeJComboBox) -> void{
this->inputAutomationTypeJComboBox= inputAutomationTypeJComboBox;
    
}


    auto InputAutomationTypeJPanel::initComponents() -> void{
this->inputAutomationTypeJComboBox= new javax::swing::JComboBox();
    
this->jLabel1= new javax::swing::JLabel();
    
this->inputAutomationTypeJComboBox->setModel(new javax::swing::DefaultComboBoxModel(
                                                {
                                                    "DirectX","DirectX 8","Low Level","Java Robot"
                                                }));
    
this->jLabel1->setText("Input Type:");
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addComponent(jLabel1)->addPreferredGap(javax.swing->LayoutStyle->ComponentPlacement->RELATED)->addComponent(inputAutomationTypeJComboBox, 0, 98, Short::MAX_VALUE)));
    
layout->setVerticalGroup(layout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(layout->createParallelGroup(javax.swing->GroupLayout->Alignment->BASELINE)->addComponent(jLabel1)->addComponent(inputAutomationTypeJComboBox, javax.swing->GroupLayout->PREFERRED_SIZE, javax.swing->GroupLayout->DEFAULT_SIZE, javax.swing->GroupLayout->PREFERRED_SIZE)));
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_INPUTAUTOMATIONTYPEJPANEL_CPP

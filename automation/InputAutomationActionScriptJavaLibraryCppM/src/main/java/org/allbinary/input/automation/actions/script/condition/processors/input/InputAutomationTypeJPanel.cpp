
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

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/JPanel.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JComboBox.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JLabel.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/DefaultComboBoxModel.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/GroupLayout.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/Short.h"

class InputAutomationTypeJPanel: public javax::swing::JPanel {

public: InputAutomationTypeJPanel(){
this->initComponents();
    
}


    public: javax::swing::JComboBox* getInputAutomationTypeJComboBox(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inputAutomationTypeJComboBox;
    
}


    public: void setInputAutomationTypeJComboBox(javax::swing::JComboBox* inputAutomationTypeJComboBox){
this->inputAutomationTypeJComboBox= inputAutomationTypeJComboBox;
    
}


    private: void initComponents(){
this->inputAutomationTypeJComboBox= new javax::swing::JComboBox();
    
this->jLabel1= new javax::swing::JLabel();
    
this->inputAutomationTypeJComboBox->setModel(new javax::swing::DefaultComboBoxModel(
                                                {
                                                    "DirectX","DirectX 8","Low Level","Java Robot"
                                                }));
    
this->jLabel1->setText("Input Type:");
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)->addGroup(layout->createSequentialGroup()->addComponent(jLabel1)->addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)->addComponent(inputAutomationTypeJComboBox, 0, 98, Short::MAX_VALUE)));
    
layout->setVerticalGroup(layout->createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)->addGroup(layout->createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)->addComponent(jLabel1)->addComponent(inputAutomationTypeJComboBox, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)));
    
}


    private: javax::swing::JComboBox* inputAutomationTypeJComboBox;

    private: javax::swing::JLabel* jLabel1;

};

            



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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_BLANKMODULECONFIGURATIONJPANEL_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_BLANKMODULECONFIGURATIONJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/configuration/BlankModuleConfigurationJPanel.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/configuration/JPanel.h"
#include "org/allbinary/input/automation/module/configuration/JLabel.h"
#include "org/allbinary/input/automation/module/configuration/GroupLayout.h"
#include "org/allbinary/input/automation/module/configuration/Short.h"


BlankModuleConfigurationJPanel::BlankModuleConfigurationJPanel(){
this->initComponents();
    
}


    auto BlankModuleConfigurationJPanel::initComponents() -> void{
this->jLabel1= new javax::swing::JLabel();
    
this->jLabel1->setText("No Configuration Available");
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(javax.swing->GroupLayout->Alignment->TRAILING, layout->createSequentialGroup()->addContainerGap(231, Short::MAX_VALUE)->addComponent(jLabel1)->addGap(225, 225, 225)));
    
layout->setVerticalGroup(layout->createParallelGroup(javax.swing->GroupLayout->Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addContainerGap()->addComponent(jLabel1)->addContainerGap(362, Short::MAX_VALUE)));
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_BLANKMODULECONFIGURATIONJPANEL_CPP

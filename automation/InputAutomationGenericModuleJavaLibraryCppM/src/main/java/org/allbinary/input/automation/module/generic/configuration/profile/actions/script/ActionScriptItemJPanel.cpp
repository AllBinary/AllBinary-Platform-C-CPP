
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_ACTIONSCRIPTITEMJPANEL_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_ACTIONSCRIPTITEMJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/ActionScriptItemJPanel.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JPanel.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GridLayout.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GroupLayout.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/Short.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/Dimension.h"


ActionScriptItemJPanel::ActionScriptItemJPanel(){
this->initComponents();
    
}


    auto ActionScriptItemJPanel::getNewActionScriptInputJPanel() -> javax::swing::JPanel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->newActionScriptInputJPanel;
    
}


    auto ActionScriptItemJPanel::setNewActionScriptInputJPanel(javax::swing::JPanel* newActionScriptInputJPanel) -> void{
this->newActionScriptInputJPanel= newActionScriptInputJPanel;
    
}


    auto ActionScriptItemJPanel::getRemoveJPanel() -> javax::swing::JPanel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->removeJPanel;
    
}


    auto ActionScriptItemJPanel::setRemoveJPanel(javax::swing::JPanel* removeJPanel) -> void{
this->removeJPanel= removeJPanel;
    
}


    auto ActionScriptItemJPanel::getScriptItemJPanel() -> javax::swing::JPanel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->scriptItemJPanel;
    
}


    auto ActionScriptItemJPanel::setScriptItemJPanel(javax::swing::JPanel* scriptItemJPanel) -> void{
this->scriptItemJPanel= scriptItemJPanel;
    
}


    auto ActionScriptItemJPanel::getNewActionScriptConditionJPanel() -> javax::swing::JPanel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->newActionScriptConditionJPanel;
    
}


    auto ActionScriptItemJPanel::setNewActionScriptConditionJPanel(javax::swing::JPanel* newActionScriptConditionJPanel) -> void{
this->newActionScriptConditionJPanel= newActionScriptConditionJPanel;
    
}


    auto ActionScriptItemJPanel::getChildActionScriptConditionJPanel() -> javax::swing::JPanel*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->childActionScriptConditionJPanel;
    
}


    auto ActionScriptItemJPanel::setChildActionScriptConditionJPanel(javax::swing::JPanel* childActionScriptConditionJPanel) -> void{
this->childActionScriptConditionJPanel= childActionScriptConditionJPanel;
    
}


    auto ActionScriptItemJPanel::initComponents() -> void{
this->newActionScriptInputJPanel= new javax::swing::JPanel();
    
this->childActionScriptConditionJPanel= new javax::swing::JPanel();
    
this->newActionScriptConditionJPanel= new javax::swing::JPanel();
    
this->scriptItemJPanel= new javax::swing::JPanel();
    
this->removeJPanel= new javax::swing::JPanel();
    
this->newActionScriptInputJPanel->setLayout(new java::awt::GridLayout(1, 0));
    

    javax::swing::GroupLayout* childActionScriptConditionJPanelLayout = new javax::swing::GroupLayout(this->childActionScriptConditionJPanel);;
    
this->childActionScriptConditionJPanel->setLayout(childActionScriptConditionJPanelLayout);
    
childActionScriptConditionJPanelLayout->setHorizontalGroup(childActionScriptConditionJPanelLayout->createParallelGroup(swing->GroupLayout->Alignment->LEADING)->addGap(0, 229, Short::MAX_VALUE));
    
childActionScriptConditionJPanelLayout->setVerticalGroup(childActionScriptConditionJPanelLayout->createParallelGroup(swing->GroupLayout->Alignment->LEADING)->addGap(0, 8, Short::MAX_VALUE));
    
this->newActionScriptConditionJPanel->setLayout(new java::awt::GridLayout(1, 0));
    
this->scriptItemJPanel->setLayout(new java::awt::GridLayout(1, 1));
    
this->removeJPanel->setLayout(new java::awt::GridLayout(1, 1));
    
this->removeJPanel->setMinimumSize(new java::awt::Dimension(30, 20));
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(swing->GroupLayout->Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addComponent(scriptItemJPanel, swing->GroupLayout->PREFERRED_SIZE, 167, swing->GroupLayout->PREFERRED_SIZE)->addPreferredGap(swing->LayoutStyle->ComponentPlacement->RELATED)->addComponent(removeJPanel, swing->GroupLayout->DEFAULT_SIZE, 56, Short::MAX_VALUE))->addComponent(newActionScriptInputJPanel, swing->GroupLayout->DEFAULT_SIZE, 229, Short::MAX_VALUE)->addComponent(newActionScriptConditionJPanel, swing->GroupLayout->DEFAULT_SIZE, 229, Short::MAX_VALUE)->addComponent(childActionScriptConditionJPanel, swing->GroupLayout->DEFAULT_SIZE, swing->GroupLayout->DEFAULT_SIZE, Short::MAX_VALUE));
    
layout->setVerticalGroup(layout->createParallelGroup(swing->GroupLayout->Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addGroup(layout->createParallelGroup(swing->GroupLayout->Alignment->LEADING)->addComponent(scriptItemJPanel, swing->GroupLayout->DEFAULT_SIZE, 31, Short::MAX_VALUE)->addComponent(removeJPanel, swing->GroupLayout->Alignment->TRAILING, swing->GroupLayout->DEFAULT_SIZE, 31, Short::MAX_VALUE))->addPreferredGap(swing->LayoutStyle->ComponentPlacement->RELATED)->addComponent(childActionScriptConditionJPanel, swing->GroupLayout->PREFERRED_SIZE, swing->GroupLayout->DEFAULT_SIZE, swing->GroupLayout->PREFERRED_SIZE)->addPreferredGap(swing->LayoutStyle->ComponentPlacement->RELATED)->addComponent(newActionScriptConditionJPanel, swing->GroupLayout->PREFERRED_SIZE, 28, swing->GroupLayout->PREFERRED_SIZE)->addPreferredGap(swing->LayoutStyle->ComponentPlacement->RELATED)->addComponent(newActionScriptInputJPanel, swing->GroupLayout->PREFERRED_SIZE, 30, swing->GroupLayout->PREFERRED_SIZE)));
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_ACTIONSCRIPTITEMJPANEL_CPP

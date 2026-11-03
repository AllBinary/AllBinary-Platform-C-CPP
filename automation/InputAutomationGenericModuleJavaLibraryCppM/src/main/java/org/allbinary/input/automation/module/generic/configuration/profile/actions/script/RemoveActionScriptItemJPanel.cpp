
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_REMOVEACTIONSCRIPTITEMJPANEL_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_REMOVEACTIONSCRIPTITEMJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/RemoveActionScriptItemJPanel.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionJPanel.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/Panel.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JButton.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GridLayout.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/ActionListener.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/ActionEvent.h"


RemoveActionScriptItemJPanel::RemoveActionScriptItemJPanel(GenericProfileActionJPanel* genericProfileActionJPanel, ProfileActionScriptConditionInterface* profileActionScriptConditionInterface) : logUtil(LogUtil::getInstance()){
this->initComponents();
    
this->genericProfileActionJPanel= genericProfileActionJPanel;
    
this->profileActionScriptConditionInterface= profileActionScriptConditionInterface;
    
}


    auto RemoveActionScriptItemJPanel::initComponents() -> void{
this->removeJButton= new javax::swing::JButton();
    
setLayout(new java::awt::GridLayout());
    
this->removeJButton->setText("Remove");
    
this->removeJButton->addActionListener([&]() {
    static thread_local RemoveActionScriptItemJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    RemoveActionScriptItemJPanel* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->removeJButtonActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
add(this->removeJButton);
    
}


    auto RemoveActionScriptItemJPanel::removeJButtonActionPerformed(java::awt::event::ActionEvent* evt) -> void{

    GenericProfileAction* genericProfileAction = this->genericProfileActionJPanel->getGenericProfileAction();;
    

                        if(genericProfileAction == 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil->putF("GenericProfileAction was null", this, "removeJButtonActionPerformed");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                
genericProfileAction->getGenericProfileActionScript()->removeCondition(this->profileActionScriptConditionInterface);
    
this->genericProfileActionJPanel->updateProfileActionUI();
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_REMOVEACTIONSCRIPTITEMJPANEL_CPP

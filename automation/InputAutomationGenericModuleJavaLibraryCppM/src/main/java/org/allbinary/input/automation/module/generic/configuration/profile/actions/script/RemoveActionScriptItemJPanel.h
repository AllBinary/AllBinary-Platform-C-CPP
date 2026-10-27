
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_REMOVEACTIONSCRIPTITEMJPANEL_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_REMOVEACTIONSCRIPTITEMJPANEL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class ProfileActionScriptConditionInterface;
class GenericProfileAction;
class GenericProfileActionJPanel;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/Panel.h"
class JButton;
class GridLayout;
class ActionListener;
class ActionEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RemoveActionScriptItemJPanel: public java::awt::Panel {

    /*protected*/ public: LogUtil* logUtil;

    private: GenericProfileActionJPanel* genericProfileActionJPanel;

    private: ProfileActionScriptConditionInterface* profileActionScriptConditionInterface;

public: RemoveActionScriptItemJPanel(GenericProfileActionJPanel* genericProfileActionJPanel, ProfileActionScriptConditionInterface* profileActionScriptConditionInterface);

    private: void initComponents();

    private: void removeJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: javax::swing::JButton* removeJButton;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_REMOVEACTIONSCRIPTITEMJPANEL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_REMOVEACTIONSCRIPTITEMJPANEL_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_REMOVEACTIONSCRIPTITEMJPANEL_H_COMPLETE
        #if __has_include(<org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>)
#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h>)
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionJPanel.h>)
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionJPanel.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/script/Panel.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/Panel.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JButton.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JButton.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GridLayout.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GridLayout.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/script/ActionListener.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/ActionListener.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/script/ActionEvent.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/ActionEvent.h"
#endif

        #endif
    

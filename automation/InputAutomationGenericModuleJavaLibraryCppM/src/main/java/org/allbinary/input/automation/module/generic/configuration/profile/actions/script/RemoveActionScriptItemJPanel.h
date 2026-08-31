
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

#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionJPanel.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Panel.h"
#include "JButton.h"
#include "GridLayout.h"
#include "ActionListener.h"
#include "ActionEvent.h"

class RemoveActionScriptItemJPanel: public java.awt.Panel {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: genericProfileActionJPanel: GenericProfileActionJPanel;

    private: profileActionScriptConditionInterface: ProfileActionScriptConditionInterface;

public constructor (GenericProfileActionJPanel genericProfileActionJPanel, ProfileActionScriptConditionInterface profileActionScriptConditionInterface);

    initComponents();

    removeJButtonActionPerformed(java.awt.event.ActionEvent evt);

    private: removeJButton: javax.swing.JButton;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_REMOVEACTIONSCRIPTITEMJPANEL_H


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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONJPANEL_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONJPANEL_H

#include <org/allbinary/input/automation/actions/script/JTreeInterfaceFactory.h>

      
#include <org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptCondition.h>

      
#include <org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptCondition.h>

      
#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>

      
#include <org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptCondition.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScriptJPanel.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "GenericProfileAction.h"
#include "GroupLayout.h"
#include "Short.h"
#include "JScrollPane.h"
#include "JLabel.h"
#include "JButton.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"

class GenericProfileActionJPanel: public javax::swing::JPanel {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: GenericProfileAction genericProfileAction;

    private: GenericProfileActionScriptJPanel genericProfileActionScriptJPanel;

public: GenericProfileActionJPanel();

    public: void updateProfileActionUI();

    public: GenericProfileAction getGenericProfileAction();

    public: void setGenericProfileAction(GenericProfileAction genericProfileAction);

    public: GenericProfileActionScriptJPanel getGenericProfileActionScriptJPanel();

    public: void setGenericProfileActionScriptJPanel(GenericProfileActionScriptJPanel genericProfileActionScriptJPanel);

    private: void initComponents();

    private: void newTimeIntervalJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void newAlwaysJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void newColorAtJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: javax::swing::JPanel blankProfileActionScriptJPanel;

    private: javax::swing::JScrollPane genericProfileActionScriptJScrollPane;

    private: javax::swing::JLabel ifJLabel;

    private: javax::swing::JButton newAlwaysJButton;

    private: javax::swing::JButton newColorAtJButton;

    private: javax::swing::JButton newTimeIntervalJButton;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONJPANEL_H

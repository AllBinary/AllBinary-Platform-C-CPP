
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class JTreeInterfaceFactory;
class AlwaysActionScriptCondition;
class ColorAtActionScriptCondition;
class ProfileActionScriptConditionInterface;
class TimeIntervalActionScriptCondition;
class GenericProfileActionScriptJPanel;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JPanel.h"
class GenericProfileAction;
class GroupLayout;
class Short;
class JScrollPane;
class JLabel;
class JButton;
class Dimension;
class ActionListener;
class ActionEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GenericProfileActionJPanel: public javax::swing::JPanel {

    /*protected*/ public: LogUtil* logUtil;

    private: GenericProfileAction* genericProfileAction;

    private: GenericProfileActionScriptJPanel* genericProfileActionScriptJPanel;

public: GenericProfileActionJPanel();

    public: void updateProfileActionUI();

    public: GenericProfileAction* getGenericProfileAction();

    public: void setGenericProfileAction(GenericProfileAction* genericProfileAction);

    public: GenericProfileActionScriptJPanel* getGenericProfileActionScriptJPanel();

    public: void setGenericProfileActionScriptJPanel(GenericProfileActionScriptJPanel* genericProfileActionScriptJPanel);

    private: void initComponents();

    private: void newTimeIntervalJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void newAlwaysJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void newColorAtJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: javax::swing::JPanel* blankProfileActionScriptJPanel;

    private: javax::swing::JScrollPane* genericProfileActionScriptJScrollPane;

    private: javax::swing::JLabel* ifJLabel;

    private: javax::swing::JButton* newAlwaysJButton;

    private: javax::swing::JButton* newColorAtJButton;

    private: javax::swing::JButton* newTimeIntervalJButton;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONJPANEL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONJPANEL_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_GENERICPROFILEACTIONJPANEL_H_COMPLETE
        #if __has_include(<org/allbinary/input/automation/actions/script/JTreeInterfaceFactory.h>)
#include <org/allbinary/input/automation/actions/script/JTreeInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptCondition.h>)
#include <org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptCondition.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptCondition.h>)
#include <org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptCondition.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>)
#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptCondition.h>)
#include <org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptCondition.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScriptJPanel.h>)
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScriptJPanel.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/JPanel.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JPanel.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/GroupLayout.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/GroupLayout.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/Short.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/Short.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/JScrollPane.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JScrollPane.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/JLabel.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JLabel.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/JButton.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/JButton.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/Dimension.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/Dimension.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/ActionListener.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/ActionListener.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/ActionEvent.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/ActionEvent.h"
#endif

        #endif
    


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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_TIMEINTERVALACTIONSCRIPTCONDITIONJPANEL_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_TIMEINTERVALACTIONSCRIPTCONDITIONJPANEL_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/JPanel.h"
#include "org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptConditionInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/JTextField.h"
#include "org/allbinary/input/automation/actions/script/condition/JDialog.h"
#include "org/allbinary/input/automation/actions/script/condition/JLabel.h"
#include "org/allbinary/input/automation/actions/script/condition/JButton.h"
#include "org/allbinary/input/automation/actions/script/condition/Dimension.h"
#include "org/allbinary/input/automation/actions/script/condition/ActionListener.h"
#include "org/allbinary/input/automation/actions/script/condition/ActionEvent.h"
#include "org/allbinary/input/automation/actions/script/condition/GroupLayout.h"
#include "org/allbinary/input/automation/actions/script/condition/Short.h"

class TimeIntervalActionScriptConditionJPanel: public javax::swing::JPanel {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: TimeIntervalActionScriptConditionInterface* timeIntervalActionScriptConditionInterface;

public: TimeIntervalActionScriptConditionJPanel(TimeIntervalActionScriptConditionInterface* timeIntervalActionScriptConditionInterface);

    private: void set();

    private: void update();

    public: javax::swing::JTextField* getTimeIntervalJTextField();

    public: void setTimeIntervalJTextField(javax::swing::JTextField* timeIntervalJTextField);

    public: javax::swing::JDialog* getTimeIntervalActionJDialog();

    public: void setTimeIntervalActionJDialog(javax::swing::JDialog* timeIntervalActionJDialog);

    private: void initComponents();

    private: void okJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void timeIntervalActionJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: javax::swing::JLabel* jLabel1;

    private: javax::swing::JLabel* jLabel2;

    private: javax::swing::JButton* okJButton;

    private: javax::swing::JButton* timeIntervalActionJButton;

    private: javax::swing::JDialog* timeIntervalActionJDialog;

    private: javax::swing::JTextField* timeIntervalJTextField;

    private: javax::swing::JLabel* titleJLabel;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_TIMEINTERVALACTIONSCRIPTCONDITIONJPANEL_H

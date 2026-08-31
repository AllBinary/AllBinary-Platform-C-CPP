
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

            #include "../../../../../../../java/lang/Integer.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "TimeIntervalActionScriptConditionInterface.h"
#include "JTextField.h"
#include "JDialog.h"
#include "JLabel.h"
#include "JButton.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"

class TimeIntervalActionScriptConditionJPanel: public javax.swing.JPanel {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: timeIntervalActionScriptConditionInterface: TimeIntervalActionScriptConditionInterface;

public constructor (TimeIntervalActionScriptConditionInterface timeIntervalActionScriptConditionInterface);

    set();

    update();

    public javax.swing.JTextField getTimeIntervalJTextField();

    public setTimeIntervalJTextField(javax.swing.JTextField timeIntervalJTextField);

    public javax.swing.JDialog getTimeIntervalActionJDialog();

    public setTimeIntervalActionJDialog(javax.swing.JDialog timeIntervalActionJDialog);

    initComponents();

    okJButtonActionPerformed(java.awt.event.ActionEvent evt);

    timeIntervalActionJButtonActionPerformed(java.awt.event.ActionEvent evt);

    private: jLabel1: javax.swing.JLabel;

    private: jLabel2: javax.swing.JLabel;

    private: okJButton: javax.swing.JButton;

    private: timeIntervalActionJButton: javax.swing.JButton;

    private: timeIntervalActionJDialog: javax.swing.JDialog;

    private: timeIntervalJTextField: javax.swing.JTextField;

    private: titleJLabel: javax.swing.JLabel;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_TIMEINTERVALACTIONSCRIPTCONDITIONJPANEL_H

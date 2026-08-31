
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_ALWAYSACTIONSCRIPTCONDITIONJPANEL_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_ALWAYSACTIONSCRIPTCONDITIONJPANEL_H

#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "AlwaysActionScriptConditionInterface.h"
#include "JDialog.h"
#include "JLabel.h"
#include "JButton.h"
#include "JComboBox.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "DefaultComboBoxModel.h"
#include "GroupLayout.h"
#include "Short.h"

class AlwaysActionScriptConditionJPanel: public javax.swing.JPanel {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: alwaysActionScriptConditionInterface: AlwaysActionScriptConditionInterface;

public constructor (AlwaysActionScriptConditionInterface alwaysActionScriptConditionInterface);

    set();

    update();

    public javax.swing.JDialog getAlwaysActionJDialog();

    public setAlwaysActionJDialog(javax.swing.JDialog alwaysActionJDialog);

    initComponents();

    okJButtonActionPerformed(java.awt.event.ActionEvent evt);

    alwaysActionJButtonActionPerformed(java.awt.event.ActionEvent evt);

    private: alwaysActionJButton: javax.swing.JButton;

    private: alwaysActionJDialog: javax.swing.JDialog;

    private: alwaysJComboBox: javax.swing.JComboBox;

    private: jLabel1: javax.swing.JLabel;

    private: jLabel2: javax.swing.JLabel;

    private: okJButton: javax.swing.JButton;

    private: titleJLabel: javax.swing.JLabel;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_ALWAYSACTIONSCRIPTCONDITIONJPANEL_H

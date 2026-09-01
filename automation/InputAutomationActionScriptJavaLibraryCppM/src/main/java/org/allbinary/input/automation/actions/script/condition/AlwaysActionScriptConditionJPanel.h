
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

class AlwaysActionScriptConditionJPanel: public javax::swing::JPanel {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: AlwaysActionScriptConditionInterface alwaysActionScriptConditionInterface;

public: AlwaysActionScriptConditionJPanel(AlwaysActionScriptConditionInterface alwaysActionScriptConditionInterface);

    private: void set();

    private: void update();

    public: javax::swing::JDialog getAlwaysActionJDialog();

    public: void setAlwaysActionJDialog(javax::swing::JDialog alwaysActionJDialog);

    private: void initComponents();

    private: void okJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void alwaysActionJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: javax::swing::JButton alwaysActionJButton;

    private: javax::swing::JDialog alwaysActionJDialog;

    private: javax::swing::JComboBox alwaysJComboBox;

    private: javax::swing::JLabel jLabel1;

    private: javax::swing::JLabel jLabel2;

    private: javax::swing::JButton okJButton;

    private: javax::swing::JLabel titleJLabel;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_ALWAYSACTIONSCRIPTCONDITIONJPANEL_H

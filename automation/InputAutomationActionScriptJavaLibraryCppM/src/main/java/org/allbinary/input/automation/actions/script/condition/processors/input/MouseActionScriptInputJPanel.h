
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUTJPANEL_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUTJPANEL_H

            #include "../../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../../java/lang/Integer.h"
        
#include <java/awt/event/InputEvent.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/input/automation/robot/InputRobot.h>

      
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>

      
#include <org/allbinary/input/automation/robot/TempInputRobotNames.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "MouseActionScriptInputInterface.h"
#include "DefaultComboBoxModel.h"
#include "ComboBoxModel.h"
#include "JDialog.h"
#include "JLabel.h"
#include "JButton.h"
#include "JCheckBox.h"
#include "JTextField.h"
#include "JComboBox.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "Insets.h"
#include "GroupLayout.h"
#include "Short.h"

class MouseActionScriptInputJPanel: public javax.swing.JPanel {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: mouseActionScriptInputInterface: MouseActionScriptInputInterface;

public constructor (MouseActionScriptInputInterface mouseActionScriptInputInterface);

    set();

                //@Throws(Exception.constructor)
            
    updateInputType();

                //@Throws(Exception.constructor)
            
    update();

    public javax.swing.JDialog getMouseActionJDialog();

    public setMouseActionJDialog(javax.swing.JDialog mouseActionJDialog);

    initComponents();

    button2JCheckBoxActionPerformed(java.awt.event.ActionEvent evt);

    okJButtonActionPerformed(java.awt.event.ActionEvent evt);

    mouseActionJButtonActionPerformed(java.awt.event.ActionEvent evt);

    private: button1JCheckBox: javax.swing.JCheckBox;

    private: button2JCheckBox: javax.swing.JCheckBox;

    private: inputAutomationTypeJComboBox: javax.swing.JComboBox;

    private: inputTypeJLabel: javax.swing.JLabel;

    private: jLabel1: javax.swing.JLabel;

    private: jLabel2: javax.swing.JLabel;

    private: jLabel3: javax.swing.JLabel;

    private: jLabel4: javax.swing.JLabel;

    private: jLabel5: javax.swing.JLabel;

    private: jLabel6: javax.swing.JLabel;

    private: mouseActionJButton: javax.swing.JButton;

    private: mouseActionJDialog: javax.swing.JDialog;

    private: mouseDelayJTextField: javax.swing.JTextField;

    private: mouseXJTextField: javax.swing.JTextField;

    private: mouseYJTextField: javax.swing.JTextField;

    private: okJButton: javax.swing.JButton;

    private: titleJLabel: javax.swing.JLabel;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUTJPANEL_H

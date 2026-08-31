
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYBOARDACTIONSCRIPTINPUTJPANEL_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYBOARDACTIONSCRIPTINPUTJPANEL_H

            #include "../../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../../java/lang/Integer.h"
        
#include <javax/swing.h>

      
#include <org/allbinary/input/KeySingletonFactory.h>

      
#include <org/allbinary/input/automation/robot/InputRobot.h>

      
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>

      
#include <org/allbinary/input/automation/robot/TempInputRobotNames.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "KeyboardActionScriptInputInterface.h"
#include "DefaultComboBoxModel.h"
#include "KeyNameDefaultComboBoxModelFactory.h"
#include "KeyCharDefaultComboBoxModelFactory.h"
#include "ComboBoxModel.h"
#include "JDialog.h"
#include "JLabel.h"
#include "JComboBox.h"
#include "JTextField.h"
#include "JRadioButton.h"
#include "JButton.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "Insets.h"
#include "GroupLayout.h"
#include "Short.h"

class KeyboardActionScriptInputJPanel: public javax.swing.JPanel {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: keyActionScriptInputInterface: KeyboardActionScriptInputInterface;

public constructor (KeyboardActionScriptInputInterface keyActionScriptInputInterface);

    set();

                //@Throws(Exception.constructor)
            
    updateInputType();

    Integer getSelectedKey();

    updateKeys();

                //@Throws(Exception.constructor)
            
    update();

    public javax.swing.JDialog getKeyActionJDialog();

    public setKeyActionJDialog(javax.swing.JDialog keyActionJDialog);

    initComponents();

    prependText(Integer integer);

    keyIntegerJComboBoxActionPerformed(java.awt.event.ActionEvent evt);

    sequenceJRadioButtonActionPerformed(java.awt.event.ActionEvent evt);

    simultaneousJRadioButtonActionPerformed(java.awt.event.ActionEvent evt);

    keyNameJComboBoxActionPerformed(java.awt.event.ActionEvent evt);

    okJButtonActionPerformed(java.awt.event.ActionEvent evt);

    keyActionJButtonActionPerformed(java.awt.event.ActionEvent evt);

    normalJRadioButtonActionPerformed(java.awt.event.ActionEvent evt);

    releaseJRadioButtonActionPerformed(java.awt.event.ActionEvent evt);

    pressJRadioButtonActionPerformed(java.awt.event.ActionEvent evt);

    private: addKeyJLabel: javax.swing.JLabel;

    private: delayBetweenJLabel: javax.swing.JLabel;

    private: delayJTextField: javax.swing.JTextField;

    private: holdTimeJLabel: javax.swing.JLabel;

    private: inputAutomationTypeJComboBox: javax.swing.JComboBox;

    private: inputTypeJLabel: javax.swing.JLabel;

    private: jLabel1: javax.swing.JLabel;

    private: jPanel1: javax.swing.JPanel;

    private: keyActionJButton: javax.swing.JButton;

    private: keyActionJDialog: javax.swing.JDialog;

    private: keyIntegerJComboBox: javax.swing.JComboBox;

    private: keyNameJComboBox: javax.swing.JComboBox;

    private: normalJRadioButton: javax.swing.JRadioButton;

    private: okJButton: javax.swing.JButton;

    private: pressJRadioButton: javax.swing.JRadioButton;

    private: releaseJRadioButton: javax.swing.JRadioButton;

    private: sequenceJRadioButton: javax.swing.JRadioButton;

    private: simultaneousJRadioButton: javax.swing.JRadioButton;

    private: testJLabel: javax.swing.JLabel;

    private: textJTextField: javax.swing.JTextField;

    private: timeJTextField: javax.swing.JTextField;

    private: titleJLabel: javax.swing.JLabel;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYBOARDACTIONSCRIPTINPUTJPANEL_H

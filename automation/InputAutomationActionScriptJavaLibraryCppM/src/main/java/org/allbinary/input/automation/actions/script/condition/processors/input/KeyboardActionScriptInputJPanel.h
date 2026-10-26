
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

            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
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

class KeyboardActionScriptInputJPanel: public javax::swing::JPanel {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: KeyboardActionScriptInputInterface keyActionScriptInputInterface;

public: KeyboardActionScriptInputJPanel(KeyboardActionScriptInputInterface keyActionScriptInputInterface);

    private: void set();

                //@Throws(Exception.constructor)
            
    private: void updateInputType();

    private: Integer getSelectedKey();

    private: void updateKeys();

                //@Throws(Exception.constructor)
            
    private: void update();

    public: javax::swing::JDialog getKeyActionJDialog();

    public: void setKeyActionJDialog(javax::swing::JDialog keyActionJDialog);

    private: void initComponents();

    private: void prependText(Integer integer);

    private: void keyIntegerJComboBoxActionPerformed(java::awt::event::ActionEvent evt);

    private: void sequenceJRadioButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void simultaneousJRadioButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void keyNameJComboBoxActionPerformed(java::awt::event::ActionEvent evt);

    private: void okJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void keyActionJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void normalJRadioButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void releaseJRadioButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void pressJRadioButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: javax::swing::JLabel addKeyJLabel;

    private: javax::swing::JLabel delayBetweenJLabel;

    private: javax::swing::JTextField delayJTextField;

    private: javax::swing::JLabel holdTimeJLabel;

    private: javax::swing::JComboBox inputAutomationTypeJComboBox;

    private: javax::swing::JLabel inputTypeJLabel;

    private: javax::swing::JLabel jLabel1;

    private: javax::swing::JPanel jPanel1;

    private: javax::swing::JButton keyActionJButton;

    private: javax::swing::JDialog keyActionJDialog;

    private: javax::swing::JComboBox keyIntegerJComboBox;

    private: javax::swing::JComboBox keyNameJComboBox;

    private: javax::swing::JRadioButton normalJRadioButton;

    private: javax::swing::JButton okJButton;

    private: javax::swing::JRadioButton pressJRadioButton;

    private: javax::swing::JRadioButton releaseJRadioButton;

    private: javax::swing::JRadioButton sequenceJRadioButton;

    private: javax::swing::JRadioButton simultaneousJRadioButton;

    private: javax::swing::JLabel testJLabel;

    private: javax::swing::JTextField textJTextField;

    private: javax::swing::JTextField timeJTextField;

    private: javax::swing::JLabel titleJLabel;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYBOARDACTIONSCRIPTINPUTJPANEL_H

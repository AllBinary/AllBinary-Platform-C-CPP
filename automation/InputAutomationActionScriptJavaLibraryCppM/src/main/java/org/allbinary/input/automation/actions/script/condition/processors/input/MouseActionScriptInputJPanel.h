
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

            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
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

class MouseActionScriptInputJPanel: public javax::swing::JPanel {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: MouseActionScriptInputInterface mouseActionScriptInputInterface;

public: MouseActionScriptInputJPanel(MouseActionScriptInputInterface mouseActionScriptInputInterface);

    private: void set();

                //@Throws(Exception.constructor)
            
    private: void updateInputType();

                //@Throws(Exception.constructor)
            
    private: void update();

    public: javax::swing::JDialog getMouseActionJDialog();

    public: void setMouseActionJDialog(javax::swing::JDialog mouseActionJDialog);

    private: void initComponents();

    private: void button2JCheckBoxActionPerformed(java::awt::event::ActionEvent evt);

    private: void okJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void mouseActionJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: javax::swing::JCheckBox button1JCheckBox;

    private: javax::swing::JCheckBox button2JCheckBox;

    private: javax::swing::JComboBox inputAutomationTypeJComboBox;

    private: javax::swing::JLabel inputTypeJLabel;

    private: javax::swing::JLabel jLabel1;

    private: javax::swing::JLabel jLabel2;

    private: javax::swing::JLabel jLabel3;

    private: javax::swing::JLabel jLabel4;

    private: javax::swing::JLabel jLabel5;

    private: javax::swing::JLabel jLabel6;

    private: javax::swing::JButton mouseActionJButton;

    private: javax::swing::JDialog mouseActionJDialog;

    private: javax::swing::JTextField mouseDelayJTextField;

    private: javax::swing::JTextField mouseXJTextField;

    private: javax::swing::JTextField mouseYJTextField;

    private: javax::swing::JButton okJButton;

    private: javax::swing::JLabel titleJLabel;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUTJPANEL_H

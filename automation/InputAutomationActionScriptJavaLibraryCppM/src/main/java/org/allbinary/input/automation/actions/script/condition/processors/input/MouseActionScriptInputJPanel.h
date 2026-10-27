
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt/event/InputEvent.h>
#include <javax/swing.h>
class InputRobot;
class InputRobotFactory;
class TempInputRobotNames;
class LogUtil;
class StringValidationUtil;
class CommonLabels;
class CommonPhoneStrings;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/JPanel.h"
class MouseActionScriptInputInterface;
class DefaultComboBoxModel;
class ComboBoxModel;
class JDialog;
class JLabel;
class JButton;
class JCheckBox;
class JTextField;
class JComboBox;
class Dimension;
class ActionListener;
class ActionEvent;
class Insets;
class GroupLayout;
class Short;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MouseActionScriptInputJPanel: public javax::swing::JPanel {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: MouseActionScriptInputInterface* mouseActionScriptInputInterface;

public: MouseActionScriptInputJPanel(MouseActionScriptInputInterface* mouseActionScriptInputInterface);

    private: void set();

                //@Throws(Exception.constructor)
            
    private: void updateInputType();

                //@Throws(Exception.constructor)
            
    private: void update();

    public: javax::swing::JDialog* getMouseActionJDialog();

    public: void setMouseActionJDialog(javax::swing::JDialog* mouseActionJDialog);

    private: void initComponents();

    private: void button2JCheckBoxActionPerformed(java::awt::event::ActionEvent* evt);

    private: void okJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void mouseActionJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: javax::swing::JCheckBox* button1JCheckBox;

    private: javax::swing::JCheckBox* button2JCheckBox;

    private: javax::swing::JComboBox* inputAutomationTypeJComboBox;

    private: javax::swing::JLabel* inputTypeJLabel;

    private: javax::swing::JLabel* jLabel1;

    private: javax::swing::JLabel* jLabel2;

    private: javax::swing::JLabel* jLabel3;

    private: javax::swing::JLabel* jLabel4;

    private: javax::swing::JLabel* jLabel5;

    private: javax::swing::JLabel* jLabel6;

    private: javax::swing::JButton* mouseActionJButton;

    private: javax::swing::JDialog* mouseActionJDialog;

    private: javax::swing::JTextField* mouseDelayJTextField;

    private: javax::swing::JTextField* mouseXJTextField;

    private: javax::swing::JTextField* mouseYJTextField;

    private: javax::swing::JButton* okJButton;

    private: javax::swing::JLabel* titleJLabel;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUTJPANEL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUTJPANEL_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUTJPANEL_H_COMPLETE
        #if __has_include(<java/awt/event/InputEvent.h>)
#include <java/awt/event/InputEvent.h>
#endif
#if __has_include(<javax/swing.h>)
#include <javax/swing.h>
#endif
#if __has_include(<org/allbinary/input/automation/robot/InputRobot.h>)
#include <org/allbinary/input/automation/robot/InputRobot.h>
#endif
#if __has_include(<org/allbinary/input/automation/robot/InputRobotFactory.h>)
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>
#endif
#if __has_include(<org/allbinary/input/automation/robot/TempInputRobotNames.h>)
#include <org/allbinary/input/automation/robot/TempInputRobotNames.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/JPanel.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JPanel.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInputInterface.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInputInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/DefaultComboBoxModel.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/DefaultComboBoxModel.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/ComboBoxModel.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/ComboBoxModel.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/JDialog.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JDialog.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/JLabel.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JLabel.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/JButton.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JButton.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/JCheckBox.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JCheckBox.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/JTextField.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JTextField.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/JComboBox.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/JComboBox.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/Dimension.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/Dimension.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/ActionListener.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/ActionListener.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/ActionEvent.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/ActionEvent.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/Insets.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/Insets.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/GroupLayout.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/GroupLayout.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/Short.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/Short.h"
#endif

        #endif
    

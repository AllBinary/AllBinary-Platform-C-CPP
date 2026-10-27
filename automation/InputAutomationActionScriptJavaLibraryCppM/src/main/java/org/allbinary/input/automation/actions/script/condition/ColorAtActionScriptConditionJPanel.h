
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_COLORATACTIONSCRIPTCONDITIONJPANEL_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_COLORATACTIONSCRIPTCONDITIONJPANEL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Integer.h"
        
class LogUtil;
class StringValidationUtil;
class ColorRangeInterface;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/JPanel.h"
class ColorAtActionScriptConditionInterface;
class JTextField;
class JLabel;
class JDialog;
class JButton;
class Dimension;
class ActionListener;
class ActionEvent;
class GroupLayout;
class Short;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ColorAtActionScriptConditionJPanel: public javax::swing::JPanel {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: ColorAtActionScriptConditionInterface* colorAtActionScriptConditionInterface;

public: ColorAtActionScriptConditionJPanel(ColorAtActionScriptConditionInterface* colorAtActionScriptConditionInterface);

    private: void set();

    private: void update();

    public: javax::swing::JTextField* getColorAtXJTextField();

    public: void setColorAtXJTextField(javax::swing::JTextField* colorAtXJTextField);

    public: javax::swing::JTextField* getColorAtYJTextField();

    public: void setColorAtYJTextField(javax::swing::JTextField* colorAtYJTextField);

    public: javax::swing::JTextField* getMaxBlueJTextField();

    public: void setMaxBlueJTextField(javax::swing::JTextField* maxBlueJTextField);

    public: javax::swing::JTextField* getMaxGreenJTextField();

    public: void setMaxGreenJTextField(javax::swing::JTextField* maxGreenJTextField);

    public: javax::swing::JTextField* getMaxRedJTextField();

    public: void setMaxRedJTextField(javax::swing::JTextField* maxRedJTextField);

    public: javax::swing::JTextField* getMinBlueJTextField();

    public: void setMinBlueJTextField(javax::swing::JTextField* minBlueJTextField);

    public: javax::swing::JTextField* getMinGreenJTextField();

    public: void setMinGreenJTextField(javax::swing::JTextField* minGreenJTextField);

    public: javax::swing::JTextField* getMinRedJTextField();

    public: void setMinRedJTextField(javax::swing::JTextField* minRedJTextField);

    public: javax::swing::JLabel* getYJLabel();

    public: void setYJLabel(javax::swing::JLabel* yJLabel);

    public: javax::swing::JDialog* getColorAtActionJDialog();

    public: void setColorAtActionJDialog(javax::swing::JDialog* colorAtActionJDialog);

    private: void initComponents();

    private: void okJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void colorAtActionJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: javax::swing::JLabel* blueJLabel;

    private: javax::swing::JButton* colorAtActionJButton;

    private: javax::swing::JDialog* colorAtActionJDialog;

    private: javax::swing::JTextField* colorAtXJTextField;

    private: javax::swing::JTextField* colorAtYJTextField;

    private: javax::swing::JLabel* colorRangeJLabel;

    private: javax::swing::JLabel* greenJLabel;

    private: javax::swing::JLabel* jLabel1;

    private: javax::swing::JLabel* locationJLabel;

    private: javax::swing::JTextField* maxBlueJTextField;

    private: javax::swing::JTextField* maxGreenJTextField;

    private: javax::swing::JLabel* maxJLabel;

    private: javax::swing::JTextField* maxRedJTextField;

    private: javax::swing::JTextField* minBlueJTextField;

    private: javax::swing::JTextField* minGreenJTextField;

    private: javax::swing::JLabel* minJLabel;

    private: javax::swing::JTextField* minRedJTextField;

    private: javax::swing::JButton* okJButton;

    private: javax::swing::JLabel* redJLabel;

    private: javax::swing::JLabel* titleJLabel;

    private: javax::swing::JLabel* xJLabel;

    private: javax::swing::JLabel* yJLabel;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_COLORATACTIONSCRIPTCONDITIONJPANEL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_COLORATACTIONSCRIPTCONDITIONJPANEL_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_COLORATACTIONSCRIPTCONDITIONJPANEL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include(<org/allbinary/media/image/analysis/ColorRangeInterface.h>)
#include <org/allbinary/media/image/analysis/ColorRangeInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/JPanel.h")
#include "org/allbinary/input/automation/actions/script/condition/JPanel.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptConditionInterface.h")
#include "org/allbinary/input/automation/actions/script/condition/ColorAtActionScriptConditionInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/JTextField.h")
#include "org/allbinary/input/automation/actions/script/condition/JTextField.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/JLabel.h")
#include "org/allbinary/input/automation/actions/script/condition/JLabel.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/JDialog.h")
#include "org/allbinary/input/automation/actions/script/condition/JDialog.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/JButton.h")
#include "org/allbinary/input/automation/actions/script/condition/JButton.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/Dimension.h")
#include "org/allbinary/input/automation/actions/script/condition/Dimension.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/ActionListener.h")
#include "org/allbinary/input/automation/actions/script/condition/ActionListener.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/ActionEvent.h")
#include "org/allbinary/input/automation/actions/script/condition/ActionEvent.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/GroupLayout.h")
#include "org/allbinary/input/automation/actions/script/condition/GroupLayout.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/Short.h")
#include "org/allbinary/input/automation/actions/script/condition/Short.h"
#endif

        #endif
    

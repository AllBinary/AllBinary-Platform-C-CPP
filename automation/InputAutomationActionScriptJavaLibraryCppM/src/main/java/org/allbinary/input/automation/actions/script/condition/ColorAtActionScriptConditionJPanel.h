
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

            #include "java/lang/Integer.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/media/image/analysis/ColorRangeInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "ColorAtActionScriptConditionInterface.h"
#include "JTextField.h"
#include "JLabel.h"
#include "JDialog.h"
#include "JButton.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"

class ColorAtActionScriptConditionJPanel: public javax::swing::JPanel {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: ColorAtActionScriptConditionInterface colorAtActionScriptConditionInterface;

public: ColorAtActionScriptConditionJPanel(ColorAtActionScriptConditionInterface colorAtActionScriptConditionInterface);

    private: void set();

    private: void update();

    public: javax::swing::JTextField getColorAtXJTextField();

    public: void setColorAtXJTextField(javax::swing::JTextField colorAtXJTextField);

    public: javax::swing::JTextField getColorAtYJTextField();

    public: void setColorAtYJTextField(javax::swing::JTextField colorAtYJTextField);

    public: javax::swing::JTextField getMaxBlueJTextField();

    public: void setMaxBlueJTextField(javax::swing::JTextField maxBlueJTextField);

    public: javax::swing::JTextField getMaxGreenJTextField();

    public: void setMaxGreenJTextField(javax::swing::JTextField maxGreenJTextField);

    public: javax::swing::JTextField getMaxRedJTextField();

    public: void setMaxRedJTextField(javax::swing::JTextField maxRedJTextField);

    public: javax::swing::JTextField getMinBlueJTextField();

    public: void setMinBlueJTextField(javax::swing::JTextField minBlueJTextField);

    public: javax::swing::JTextField getMinGreenJTextField();

    public: void setMinGreenJTextField(javax::swing::JTextField minGreenJTextField);

    public: javax::swing::JTextField getMinRedJTextField();

    public: void setMinRedJTextField(javax::swing::JTextField minRedJTextField);

    public: javax::swing::JLabel getYJLabel();

    public: void setYJLabel(javax::swing::JLabel yJLabel);

    public: javax::swing::JDialog getColorAtActionJDialog();

    public: void setColorAtActionJDialog(javax::swing::JDialog colorAtActionJDialog);

    private: void initComponents();

    private: void okJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void colorAtActionJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: javax::swing::JLabel blueJLabel;

    private: javax::swing::JButton colorAtActionJButton;

    private: javax::swing::JDialog colorAtActionJDialog;

    private: javax::swing::JTextField colorAtXJTextField;

    private: javax::swing::JTextField colorAtYJTextField;

    private: javax::swing::JLabel colorRangeJLabel;

    private: javax::swing::JLabel greenJLabel;

    private: javax::swing::JLabel jLabel1;

    private: javax::swing::JLabel locationJLabel;

    private: javax::swing::JTextField maxBlueJTextField;

    private: javax::swing::JTextField maxGreenJTextField;

    private: javax::swing::JLabel maxJLabel;

    private: javax::swing::JTextField maxRedJTextField;

    private: javax::swing::JTextField minBlueJTextField;

    private: javax::swing::JTextField minGreenJTextField;

    private: javax::swing::JLabel minJLabel;

    private: javax::swing::JTextField minRedJTextField;

    private: javax::swing::JButton okJButton;

    private: javax::swing::JLabel redJLabel;

    private: javax::swing::JLabel titleJLabel;

    private: javax::swing::JLabel xJLabel;

    private: javax::swing::JLabel yJLabel;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_COLORATACTIONSCRIPTCONDITIONJPANEL_H

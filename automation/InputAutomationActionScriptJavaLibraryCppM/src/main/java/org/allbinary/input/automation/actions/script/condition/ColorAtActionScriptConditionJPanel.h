
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

            #include "../../../../../../../java/lang/Integer.h"
        
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

class ColorAtActionScriptConditionJPanel: public javax.swing.JPanel {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: colorAtActionScriptConditionInterface: ColorAtActionScriptConditionInterface;

public constructor (ColorAtActionScriptConditionInterface colorAtActionScriptConditionInterface);

    set();

    update();

    public javax.swing.JTextField getColorAtXJTextField();

    public setColorAtXJTextField(javax.swing.JTextField colorAtXJTextField);

    public javax.swing.JTextField getColorAtYJTextField();

    public setColorAtYJTextField(javax.swing.JTextField colorAtYJTextField);

    public javax.swing.JTextField getMaxBlueJTextField();

    public setMaxBlueJTextField(javax.swing.JTextField maxBlueJTextField);

    public javax.swing.JTextField getMaxGreenJTextField();

    public setMaxGreenJTextField(javax.swing.JTextField maxGreenJTextField);

    public javax.swing.JTextField getMaxRedJTextField();

    public setMaxRedJTextField(javax.swing.JTextField maxRedJTextField);

    public javax.swing.JTextField getMinBlueJTextField();

    public setMinBlueJTextField(javax.swing.JTextField minBlueJTextField);

    public javax.swing.JTextField getMinGreenJTextField();

    public setMinGreenJTextField(javax.swing.JTextField minGreenJTextField);

    public javax.swing.JTextField getMinRedJTextField();

    public setMinRedJTextField(javax.swing.JTextField minRedJTextField);

    public javax.swing.JLabel getYJLabel();

    public setYJLabel(javax.swing.JLabel yJLabel);

    public javax.swing.JDialog getColorAtActionJDialog();

    public setColorAtActionJDialog(javax.swing.JDialog colorAtActionJDialog);

    initComponents();

    okJButtonActionPerformed(java.awt.event.ActionEvent evt);

    colorAtActionJButtonActionPerformed(java.awt.event.ActionEvent evt);

    private: blueJLabel: javax.swing.JLabel;

    private: colorAtActionJButton: javax.swing.JButton;

    private: colorAtActionJDialog: javax.swing.JDialog;

    private: colorAtXJTextField: javax.swing.JTextField;

    private: colorAtYJTextField: javax.swing.JTextField;

    private: colorRangeJLabel: javax.swing.JLabel;

    private: greenJLabel: javax.swing.JLabel;

    private: jLabel1: javax.swing.JLabel;

    private: locationJLabel: javax.swing.JLabel;

    private: maxBlueJTextField: javax.swing.JTextField;

    private: maxGreenJTextField: javax.swing.JTextField;

    private: maxJLabel: javax.swing.JLabel;

    private: maxRedJTextField: javax.swing.JTextField;

    private: minBlueJTextField: javax.swing.JTextField;

    private: minGreenJTextField: javax.swing.JTextField;

    private: minJLabel: javax.swing.JLabel;

    private: minRedJTextField: javax.swing.JTextField;

    private: okJButton: javax.swing.JButton;

    private: redJLabel: javax.swing.JLabel;

    private: titleJLabel: javax.swing.JLabel;

    private: xJLabel: javax.swing.JLabel;

    private: yJLabel: javax.swing.JLabel;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_COLORATACTIONSCRIPTCONDITIONJPANEL_H

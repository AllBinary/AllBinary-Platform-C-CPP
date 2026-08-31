
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUTJPANEL_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUTJPANEL_H

            #include "../../../../../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/input/media/image/InputImageType.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "ImageActionScriptOutputInterface.h"
#include "ImageTypes.h"
#include "DefaultListModel.h"
#include "JDialog.h"
#include "JLabel.h"
#include "JButton.h"
#include "JCheckBox.h"
#include "JScrollPane.h"
#include "JList.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "Insets.h"
#include "AbstractListModel.h"
#include "GroupLayout.h"
#include "Short.h"

class ImageActionScriptOutputJPanel: public javax.swing.JPanel {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: capturedImageActionScriptOutputInterface: ImageActionScriptOutputInterface;

public constructor (ImageActionScriptOutputInterface capturedImageActionScriptOutputInterface);

    set();

    update();

    setImageTypeJlistModel();

    public javax.swing.JDialog getCapturedImageActionJDialog();

    public setCapturedImageActionJDialog(javax.swing.JDialog capturedImageActionJDialog);

    initComponents();

    displayJCheckBoxActionPerformed(java.awt.event.ActionEvent evt);

    okJButtonActionPerformed(java.awt.event.ActionEvent evt);

    capturedImageActionJButtonActionPerformed(java.awt.event.ActionEvent evt);

    private: capturedImageActionJButton: javax.swing.JButton;

    private: capturedImageActionJDialog: javax.swing.JDialog;

    private: displayJCheckBox: javax.swing.JCheckBox;

    private: itemTypesJList: javax.swing.JList;

    private: jLabel1: javax.swing.JLabel;

    private: jScrollPane1: javax.swing.JScrollPane;

    private: okJButton: javax.swing.JButton;

    private: saveJCheckBox: javax.swing.JCheckBox;

    private: titleJLabel: javax.swing.JLabel;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUTJPANEL_H


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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/input/media/image/InputImageType.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JPanel.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputInterface.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageTypes.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/DefaultListModel.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JDialog.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JLabel.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JButton.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JCheckBox.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JScrollPane.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JList.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/Dimension.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ActionListener.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ActionEvent.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/Insets.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/AbstractListModel.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/GroupLayout.h"
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/Short.h"

class ImageActionScriptOutputJPanel: public javax::swing::JPanel {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: ImageActionScriptOutputInterface* capturedImageActionScriptOutputInterface;

public: ImageActionScriptOutputJPanel(ImageActionScriptOutputInterface* capturedImageActionScriptOutputInterface);

    private: void set();

    private: void update();

    private: void setImageTypeJlistModel();

    public: javax::swing::JDialog* getCapturedImageActionJDialog();

    public: void setCapturedImageActionJDialog(javax::swing::JDialog* capturedImageActionJDialog);

    private: void initComponents();

    private: void displayJCheckBoxActionPerformed(java::awt::event::ActionEvent* evt);

    private: void okJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: void capturedImageActionJButtonActionPerformed(java::awt::event::ActionEvent* evt);

    private: javax::swing::JButton* capturedImageActionJButton;

    private: javax::swing::JDialog* capturedImageActionJDialog;

    private: javax::swing::JCheckBox* displayJCheckBox;

    private: javax::swing::JList* itemTypesJList;

    private: javax::swing::JLabel* jLabel1;

    private: javax::swing::JScrollPane* jScrollPane1;

    private: javax::swing::JButton* okJButton;

    private: javax::swing::JCheckBox* saveJCheckBox;

    private: javax::swing::JLabel* titleJLabel;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUTJPANEL_H

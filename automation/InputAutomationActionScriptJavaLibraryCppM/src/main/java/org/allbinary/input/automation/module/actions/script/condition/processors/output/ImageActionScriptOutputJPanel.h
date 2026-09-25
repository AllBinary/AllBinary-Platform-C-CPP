
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
        
            #include "../../../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
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

class ImageActionScriptOutputJPanel: public javax::swing::JPanel {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: ImageActionScriptOutputInterface capturedImageActionScriptOutputInterface;

public: ImageActionScriptOutputJPanel(ImageActionScriptOutputInterface capturedImageActionScriptOutputInterface);

    private: void set();

    private: void update();

    private: void setImageTypeJlistModel();

    public: javax::swing::JDialog getCapturedImageActionJDialog();

    public: void setCapturedImageActionJDialog(javax::swing::JDialog capturedImageActionJDialog);

    private: void initComponents();

    private: void displayJCheckBoxActionPerformed(java::awt::event::ActionEvent evt);

    private: void okJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: void capturedImageActionJButtonActionPerformed(java::awt::event::ActionEvent evt);

    private: javax::swing::JButton capturedImageActionJButton;

    private: javax::swing::JDialog capturedImageActionJDialog;

    private: javax::swing::JCheckBox displayJCheckBox;

    private: javax::swing::JList itemTypesJList;

    private: javax::swing::JLabel jLabel1;

    private: javax::swing::JScrollPane jScrollPane1;

    private: javax::swing::JButton okJButton;

    private: javax::swing::JCheckBox saveJCheckBox;

    private: javax::swing::JLabel titleJLabel;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUTJPANEL_H

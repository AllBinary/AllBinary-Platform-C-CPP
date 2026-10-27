
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;

#include <javax/swing.h>
class InputImageType;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JPanel.h"
class ImageActionScriptOutputInterface;
class ImageTypes;
class DefaultListModel;
class JDialog;
class JLabel;
class JButton;
class JCheckBox;
class JScrollPane;
class JList;
class Dimension;
class ActionListener;
class ActionEvent;
class Insets;
class AbstractListModel;
class GroupLayout;
class Short;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageActionScriptOutputJPanel: public javax::swing::JPanel {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUTJPANEL_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUTJPANEL_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<javax/swing.h>)
#include <javax/swing.h>
#endif
#if __has_include(<org/allbinary/input/media/image/InputImageType.h>)
#include <org/allbinary/input/media/image/InputImageType.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/JPanel.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JPanel.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputInterface.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageActionScriptOutputInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageTypes.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ImageTypes.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/DefaultListModel.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/DefaultListModel.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/JDialog.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JDialog.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/JLabel.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JLabel.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/JButton.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JButton.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/JCheckBox.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JCheckBox.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/JScrollPane.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JScrollPane.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/JList.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/JList.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/Dimension.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/Dimension.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/ActionListener.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ActionListener.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/ActionEvent.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/ActionEvent.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/Insets.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/Insets.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/AbstractListModel.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/AbstractListModel.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/GroupLayout.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/GroupLayout.h"
#endif
#if __has_include("org/allbinary/input/automation/module/actions/script/condition/processors/output/Short.h")
#include "org/allbinary/input/automation/module/actions/script/condition/processors/output/Short.h"
#endif

        #endif
    

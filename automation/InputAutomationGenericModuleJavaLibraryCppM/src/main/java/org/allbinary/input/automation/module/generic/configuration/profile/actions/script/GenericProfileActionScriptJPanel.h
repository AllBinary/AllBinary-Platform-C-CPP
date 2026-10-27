
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_GENERICPROFILEACTIONSCRIPTJPANEL_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_GENERICPROFILEACTIONSCRIPTJPANEL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/awt/event/MouseEvent.h>
#include <javax/swing.h>
class DefaultMutableTreeNode;
class DefaultTreeModel;
class TreePath;
#include <org/allbinary/input/automation/actions/script/JTreeInterface.h>
class CustomTreeNodeInterface;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JPanel.h"
class GenericProfileActionScript;
class JTree;
class JScrollPane;
class GridLayout;
class Dimension;
class MouseAdapter;
class JPopupMenu;
class JComponent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GenericProfileActionScriptJPanel: public javax::swing::JPanel, public JTreeInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: DefaultMutableTreeNode* defaultMutableTreeNode;

    private: GenericProfileActionScript* genericProfileActionScript;

public: GenericProfileActionScriptJPanel();

    public: void updateJTree();

    public: GenericProfileActionScript* getGenericProfileActionScript();

    public: void setGenericProfileActionScript(GenericProfileActionScript* genericProfileActionScript);

    public: javax::swing::JTree* getActionScriptJTree();

    public: void setActionScriptJTree(javax::swing::JTree* actionScriptJTree);

    private: void initComponents();

    private: void actionScriptJTreeMouseReleased(java::awt::event::MouseEvent* evt);

    private: void actionScriptJTreeMouseClicked(java::awt::event::MouseEvent* evt);

    private: javax::swing::JTree* actionScriptJTree;

    private: javax::swing::JScrollPane* jScrollPane1;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_GENERICPROFILEACTIONSCRIPTJPANEL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_GENERICPROFILEACTIONSCRIPTJPANEL_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_GENERICPROFILEACTIONSCRIPTJPANEL_H_COMPLETE
        #if __has_include(<java/awt/event/MouseEvent.h>)
#include <java/awt/event/MouseEvent.h>
#endif
#if __has_include(<javax/swing.h>)
#include <javax/swing.h>
#endif
#if __has_include(<javax/swing/tree/DefaultMutableTreeNode.h>)
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#endif
#if __has_include(<javax/swing/tree/DefaultTreeModel.h>)
#include <javax/swing/tree/DefaultTreeModel.h>
#endif
#if __has_include(<javax/swing/tree/TreePath.h>)
#include <javax/swing/tree/TreePath.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/JTreeInterface.h>)
#include <org/allbinary/input/automation/actions/script/JTreeInterface.h>
#endif
#if __has_include(<org/allbinary/input/automation/actions/script/condition/CustomTreeNodeInterface.h>)
#include <org/allbinary/input/automation/actions/script/condition/CustomTreeNodeInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JPanel.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JPanel.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScript.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScript.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JTree.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JTree.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JScrollPane.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JScrollPane.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GridLayout.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GridLayout.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/script/Dimension.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/Dimension.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/script/MouseAdapter.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/MouseAdapter.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JPopupMenu.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JPopupMenu.h"
#endif
#if __has_include("org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JComponent.h")
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JComponent.h"
#endif

        #endif
    

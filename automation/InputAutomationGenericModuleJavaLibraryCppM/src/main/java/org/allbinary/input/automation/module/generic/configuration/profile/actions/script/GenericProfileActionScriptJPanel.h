
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

#include <java/awt/event/MouseEvent.h>

      
#include <javax/swing.h>

      
#include <javax/swing/tree/DefaultMutableTreeNode.h>

      
#include <javax/swing/tree/DefaultTreeModel.h>

      
#include <javax/swing/tree/TreePath.h>

      
#include <org/allbinary/input/automation/actions/script/JTreeInterface.h>

      
#include <org/allbinary/input/automation/actions/script/condition/CustomTreeNodeInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "GenericProfileActionScript.h"
#include "JTree.h"
#include "JScrollPane.h"
#include "GridLayout.h"
#include "Dimension.h"
#include "MouseAdapter.h"
#include "JPopupMenu.h"
#include "JComponent.h"

class GenericProfileActionScriptJPanel: public javax.swing.JPanel: public JTreeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: defaultMutableTreeNode: DefaultMutableTreeNode = new DefaultMutableTreeNode("Root");

    private: genericProfileActionScript: GenericProfileActionScript;

public constructor ();

    public updateJTree();

    public GenericProfileActionScript getGenericProfileActionScript();

    public setGenericProfileActionScript(GenericProfileActionScript genericProfileActionScript);

    public javax.swing.JTree getActionScriptJTree();

    public setActionScriptJTree(javax.swing.JTree actionScriptJTree);

    initComponents();

    actionScriptJTreeMouseReleased(java.awt.event.MouseEvent evt);

    actionScriptJTreeMouseClicked(java.awt.event.MouseEvent evt);

    private: actionScriptJTree: javax.swing.JTree;

    private: jScrollPane1: javax.swing.JScrollPane;

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_GENERICPROFILEACTIONSCRIPTJPANEL_H

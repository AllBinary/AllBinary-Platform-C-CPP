
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

public constructor (){

            super();
        this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    
this.initComponents();
    
}


    public updateJTree(){

    defaultTreeModel: DefaultTreeModel = new DefaultTreeModel(this.getGenericProfileActionScript());;
    
this.getActionScriptJTree()!.setModel(defaultTreeModel);
    
this.repaint();
    
this.logUtil!.putF("Updated UI", this, "updateJTree");
    
}


    public GenericProfileActionScript getGenericProfileActionScript(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.genericProfileActionScript;
    
}


    public setGenericProfileActionScript(GenericProfileActionScript genericProfileActionScript){
this.genericProfileActionScript= genericProfileActionScript;
    
}


    public javax.swing.JTree getActionScriptJTree(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.actionScriptJTree;
    
}


    public setActionScriptJTree(javax.swing.JTree actionScriptJTree){
this.actionScriptJTree= actionScriptJTree;
    
}


    initComponents(){
this.jScrollPane1= new javax.swing.JScrollPane();
    
this.actionScriptJTree= new javax.swing.JTree();
    
setLayout(new java.awt.GridLayout(1, 0));
    
this.actionScriptJTree!.setPreferredSize(new java.awt.Dimension(500, 500));
    
this.actionScriptJTree!.addMouseListener(new class extends java.awt.event.MouseAdapter
                                {
                                
    public mouseClicked(java.awt.event.MouseEvent evt){
actionScriptJTreeMouseClicked(evt);
    
}

    public mouseReleased(java.awt.event.MouseEvent evt){
actionScriptJTreeMouseReleased(evt);
    
}

                                }
                            );
    
this.jScrollPane1!.setViewportView(this.actionScriptJTree);
    
add(this.jScrollPane1);
    
}


    actionScriptJTreeMouseReleased(java.awt.event.MouseEvent evt){

    button: int32_t = evt.getButton()!;;
    

                        if(button == MouseEvent.BUTTON3)
                        
                                    {
                                    
    treePath: TreePath = this.getActionScriptJTree()!.getSelectionPath()!;;
    

                        if(treePath != 
                                    null
                                )
                        
                                    {
                                    
    anyType: any = treePath!.getLastPathComponent()!;;
    

                        if(anyType instanceof CustomTreeNodeInterface)
                        
                                    {
                                    
    customTreeNodeInterface: CustomTreeNodeInterface = anyType as CustomTreeNodeInterface;;
    

    jPopupMenu: JPopupMenu = customTreeNodeInterface!.getJPopupMenu()!;;
    
jPopupMenu!.show(evt.getSource() as JComponent, evt.getX(), evt.getY());
    

                                    }
                                

                                    }
                                

                                    }
                                
}


    actionScriptJTreeMouseClicked(java.awt.event.MouseEvent evt){
}


    private: actionScriptJTree: javax.swing.JTree;

    private: jScrollPane1: javax.swing.JScrollPane;

};

            


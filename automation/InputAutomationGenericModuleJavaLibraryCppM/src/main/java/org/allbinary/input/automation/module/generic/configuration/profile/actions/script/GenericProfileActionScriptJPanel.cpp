
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
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
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JPanel.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScript.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JTree.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JScrollPane.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GridLayout.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/Dimension.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/MouseAdapter.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JPopupMenu.h"
#include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/JComponent.h"

class GenericProfileActionScriptJPanel: public javax::swing::JPanel, public JTreeInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: DefaultMutableTreeNode* defaultMutableTreeNode = new DefaultMutableTreeNode("Root");

    private: GenericProfileActionScript* genericProfileActionScript;

public: GenericProfileActionScriptJPanel(){
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->initComponents();
    
}


    public: void updateJTree(){

    DefaultTreeModel* defaultTreeModel = new DefaultTreeModel(this->getGenericProfileActionScript());;
    
this->getActionScriptJTree()->setModel(defaultTreeModel);
    
this->repaint();
    
this->logUtil->putF("Updated UI", this, "updateJTree");
    
}


    public: GenericProfileActionScript* getGenericProfileActionScript(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->genericProfileActionScript;
    
}


    public: void setGenericProfileActionScript(GenericProfileActionScript* genericProfileActionScript){
this->genericProfileActionScript= genericProfileActionScript;
    
}


    public: javax::swing::JTree* getActionScriptJTree(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->actionScriptJTree;
    
}


    public: void setActionScriptJTree(javax::swing::JTree* actionScriptJTree){
this->actionScriptJTree= actionScriptJTree;
    
}


    private: void initComponents(){
this->jScrollPane1= new javax::swing::JScrollPane();
    
this->actionScriptJTree= new javax::swing::JTree();
    
setLayout(new java::awt::GridLayout(1, 0));
    
this->actionScriptJTree->setPreferredSize(new java::awt::Dimension(500, 500));
    
this->actionScriptJTree->addMouseListener(class extends java::awt::event::MouseAdapter
                                {
                                
    public: void mouseClicked(java::awt::event::MouseEvent* evt){
actionScriptJTreeMouseClicked(evt);
    
}

    public: void mouseReleased(java::awt::event::MouseEvent* evt){
actionScriptJTreeMouseReleased(evt);
    
}

                                }
                            );
    
this->jScrollPane1->setViewportView(this->actionScriptJTree);
    
add(this->jScrollPane1);
    
}


    private: void actionScriptJTreeMouseReleased(java::awt::event::MouseEvent* evt){

    int32_t button = evt->getButton();;
    

                        if(button == MouseEvent::BUTTON3)
                        
                                    {
                                    
    TreePath* treePath = this->getActionScriptJTree()->getSelectionPath();;
    

                        if(treePath != 
                                    nullptr
                                )
                        
                                    {
                                    
    Object* anyType = treePath->getLastPathComponent();;
    

                        if(
                                        (dynamic_cast<const CustomTreeNodeInterface*>(anyType) != nullptr)
                                    )
                        
                                    {
                                    
    CustomTreeNodeInterface* customTreeNodeInterface = dynamic_cast<CustomTreeNodeInterface*>(anyType);;
    

    JPopupMenu* jPopupMenu = customTreeNodeInterface->getJPopupMenu();;
    
jPopupMenu->show(dynamic_cast<JComponent*>(evt->getSource()), evt->getX(), evt->getY());
    

                                    }
                                

                                    }
                                

                                    }
                                
}


    private: void actionScriptJTreeMouseClicked(java::awt::event::MouseEvent* evt){
}


    private: javax::swing::JTree* actionScriptJTree;

    private: javax::swing::JScrollPane* jScrollPane1;

};

            


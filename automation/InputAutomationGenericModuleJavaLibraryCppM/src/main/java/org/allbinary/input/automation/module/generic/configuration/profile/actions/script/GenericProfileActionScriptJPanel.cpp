
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_GENERICPROFILEACTIONSCRIPTJPANEL_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_GENERICPROFILEACTIONSCRIPTJPANEL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/generic/configuration/profile/actions/script/GenericProfileActionScriptJPanel.h"
        

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


GenericProfileActionScriptJPanel::GenericProfileActionScriptJPanel() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), defaultMutableTreeNode(new DefaultMutableTreeNode("Root")){
this->logUtil->putF(this->commonStrings->START, this, this->commonStrings->CONSTRUCTOR);
    
this->initComponents();
    
}


    auto GenericProfileActionScriptJPanel::updateJTree() -> void{

    DefaultTreeModel* defaultTreeModel = new DefaultTreeModel(this->getGenericProfileActionScript());;
    
this->getActionScriptJTree()->setModel(defaultTreeModel);
    
this->repaint();
    
this->logUtil->putF("Updated UI", this, "updateJTree");
    
}


    auto GenericProfileActionScriptJPanel::getGenericProfileActionScript() -> GenericProfileActionScript*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->genericProfileActionScript;
    
}


    auto GenericProfileActionScriptJPanel::setGenericProfileActionScript(GenericProfileActionScript* genericProfileActionScript) -> void{
this->genericProfileActionScript= genericProfileActionScript;
    
}


    auto GenericProfileActionScriptJPanel::getActionScriptJTree() -> javax::swing::JTree*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->actionScriptJTree;
    
}


    auto GenericProfileActionScriptJPanel::setActionScriptJTree(javax::swing::JTree* actionScriptJTree) -> void{
this->actionScriptJTree= actionScriptJTree;
    
}


    auto GenericProfileActionScriptJPanel::initComponents() -> void{
this->jScrollPane1= new javax::swing::JScrollPane();
    
this->actionScriptJTree= new javax::swing::JTree();
    
setLayout(new java::awt::GridLayout(1, 0));
    
this->actionScriptJTree->setPreferredSize(new java::awt::Dimension(500, 500));
    
this->actionScriptJTree->addMouseListener([&]() {
    static thread_local GenericProfileActionScriptJPanel* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::MouseAdapter {
    public:
    using java::awt::event::MouseAdapter::MouseAdapter;
    GenericProfileActionScriptJPanel* outer = anonymousOuter0;

    public: void mouseClicked(java::awt::event::MouseEvent* evt){
outer->actionScriptJTreeMouseClicked(evt);
    
}

    public: void mouseReleased(java::awt::event::MouseEvent* evt){
outer->actionScriptJTreeMouseReleased(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->jScrollPane1->setViewportView(this->actionScriptJTree);
    
add(this->jScrollPane1);
    
}


    auto GenericProfileActionScriptJPanel::actionScriptJTreeMouseReleased(java::awt::event::MouseEvent* evt) -> void{

    int32_t button = evt->getButton();;
    

                        if(button == MouseEvent::BUTTON3)
                        
                                    {
                                    
    TreePath* treePath = this->getActionScriptJTree()->getSelectionPath();;
    

                        if(treePath != 
                                    nullptr
                                )
                        
                                    {
                                    
    Object* anyType = JavaBoxes::toObject(treePath->getLastPathComponent());;
    

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


    auto GenericProfileActionScriptJPanel::actionScriptJTreeMouseClicked(java::awt::event::MouseEvent* evt) -> void{
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_GENERIC_CONFIGURATION_PROFILE_ACTIONS_SCRIPT_GENERICPROFILEACTIONSCRIPTJPANEL_CPP

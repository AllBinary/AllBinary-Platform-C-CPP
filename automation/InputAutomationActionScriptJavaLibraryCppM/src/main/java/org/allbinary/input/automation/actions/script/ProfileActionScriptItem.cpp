
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_PROFILEACTIONSCRIPTITEM_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_PROFILEACTIONSCRIPTITEM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/ProfileActionScriptItem.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt/event/ActionEvent.h>

      
#include <java/awt/event/ActionListener.h>

      
#include <javax/swing.h>

      
#include <javax/swing/tree/DefaultMutableTreeNode.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/ProfileActionScriptItemInterface.h"
#include "org/allbinary/input/automation/actions/script/JPopupMenu.h"
#include "org/allbinary/input/automation/actions/script/JMenuItem.h"


ProfileActionScriptItem::ProfileActionScriptItem(std::string label, Node* node) : DefaultMutableTreeNode(label), logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->init();
    
this->logUtil->putF(JavaString::valueOf("Label: ") +JavaString::valueOf(label), this, this->commonStrings->CONSTRUCTOR);
    
}


ProfileActionScriptItem::ProfileActionScriptItem(std::string label) : DefaultMutableTreeNode(label), logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->init();
    
this->logUtil->putF(JavaString::valueOf("Label: ") +JavaString::valueOf(label), this, this->commonStrings->CONSTRUCTOR);
    
}


    auto ProfileActionScriptItem::init() -> void{
this->setJPopupMenu(new JPopupMenu());
    

    JMenuItem* jMenuItemEdit = new JMenuItem(EDIT);;
    

    JMenuItem* jMenuItemDelete = new JMenuItem(DELETE);;
    
jMenuItemEdit->addActionListener(this);
    
jMenuItemDelete->addActionListener(this);
    
this->getJPopupMenu()->add(jMenuItemEdit);
    
this->getJPopupMenu()->add(jMenuItemDelete);
    
}


                //@Throws(Exception.constructor)
            
    auto ProfileActionScriptItem::process(int64_t frame) -> void{



                            throw RuntimeException();
                    
}


    auto ProfileActionScriptItem::getJPopupMenu() -> JPopupMenu*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->jPopupMenu;
    
}


    auto ProfileActionScriptItem::showDialog() -> void{



                            throw RuntimeException();
                    
}


    auto ProfileActionScriptItem::actionPerformed(ActionEvent* actionEvent) -> void{

                        if(actionEvent->getActionCommand()->compareTo(ProfileActionScriptItem::EDIT) == 0)
                        
                                    {
                                    this->showDialog();
    

                                    }
                                
}


    auto ProfileActionScriptItem::setJPopupMenu(JPopupMenu* jPopupMenu) -> void{
this->jPopupMenu= jPopupMenu;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_PROFILEACTIONSCRIPTITEM_CPP

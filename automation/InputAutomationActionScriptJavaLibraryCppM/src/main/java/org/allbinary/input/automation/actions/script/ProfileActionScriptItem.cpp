
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
        



            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/RuntimeException.h"
        
            #include "../../../../../../java/lang/Long.h"
        
#include <java/awt/event/ActionEvent.h>

      
#include <java/awt/event/ActionListener.h>

      
#include <javax/swing.h>

      
#include <javax/swing/tree/DefaultMutableTreeNode.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProfileActionScriptItemInterface.h"
#include "JPopupMenu.h"
#include "JMenuItem.h"

class ProfileActionScriptItem: public DefaultMutableTreeNode, public ProfileActionScriptItemInterface, public ActionListener {

    private: static const std::string EDIT = "Edit";

    protected: static const std::string DELETE = "Delete";

    protected: static const std::string NEW_CONDITION = "New Condition";

    protected: static const std::string NEW_INPUT = "New Input";

    protected: static const std::string NEW_OUTPUT = "New Output";

    protected: static const std::string NEW_COLOR_AT = "Color At";

    protected: static const std::string NEW_TIME_INTERVAL = "Time Interval";

    protected: static const std::string NEW_ALWAYS = "Always On/Off";

    protected: static const std::string NEW_KEY_INPUT = "Key";

    protected: static const std::string NEW_MOUSE_INPUT = "Mouse";

    protected: static const std::string NEW_JOYSTICK_INPUT = "Joystick";

    protected: static const std::string NEW_IMAGE_OUTPUT = "Image";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: JPopupMenu jPopupMenu;

public: ProfileActionScriptItem(std::string label, Node node){
            super(label);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->init();
    
this->logUtil.putF("Label: " +label, this, this->commonStrings.CONSTRUCTOR);
    
}


public: ProfileActionScriptItem(std::string label){
            super(label);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->init();
    
this->logUtil.putF("Label: " +label, this, this->commonStrings.CONSTRUCTOR);
    
}


    private: void init(){
this->setJPopupMenu(JPopupMenu());
    

    JMenuItem jMenuItemEdit = JMenuItem(EDIT);;
    

    JMenuItem jMenuItemDelete = JMenuItem(DELETE);;
    
jMenuItemEdit.addActionListener(this);
    
jMenuItemDelete.addActionListener(this);
    
this->getJPopupMenu().add(jMenuItemEdit);
    
this->getJPopupMenu().add(jMenuItemDelete);
    
}


                //@Throws(Exception.constructor)
            
    public: void process(Long frame){



                            throw RuntimeException();
                    
}


    public: JPopupMenu getJPopupMenu(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->jPopupMenu;
    
}


    public: void showDialog(){



                            throw RuntimeException();
                    
}


    public: void actionPerformed(ActionEvent actionEvent){

                        if(actionEvent.getActionCommand().compareTo(ProfileActionScriptItem::EDIT) == 0)
                        
                                    {
                                    this->showDialog();
    

                                    }
                                
}


    public: void setJPopupMenu(JPopupMenu jPopupMenu){
this->jPopupMenu= jPopupMenu;
    
}


};

            


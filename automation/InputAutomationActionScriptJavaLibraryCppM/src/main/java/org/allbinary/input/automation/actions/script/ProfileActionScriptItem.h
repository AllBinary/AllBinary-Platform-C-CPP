
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_PROFILEACTIONSCRIPTITEM_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_PROFILEACTIONSCRIPTITEM_H

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

public: ProfileActionScriptItem(std::string label, Node node);

public: ProfileActionScriptItem(std::string label);

    private: void init();

                //@Throws(Exception.constructor)
            
    public: void process(Long frame);

    public: JPopupMenu getJPopupMenu();

    public: void showDialog();

    public: void actionPerformed(ActionEvent actionEvent);

    public: void setJPopupMenu(JPopupMenu jPopupMenu);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_PROFILEACTIONSCRIPTITEM_H

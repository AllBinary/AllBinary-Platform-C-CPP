
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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
class LogUtil;
class CommonStrings;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/ProfileActionScriptItemInterface.h"
class JPopupMenu;
class JMenuItem;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ProfileActionScriptItem: public DefaultMutableTreeNode, public ProfileActionScriptItemInterface, public ActionListener {

    private: static inline const std::string EDIT = "Edit";

    /*protected*/ public: static inline const std::string DELETE = "Delete";

    /*protected*/ public: static inline const std::string NEW_CONDITION = "New Condition";

    /*protected*/ public: static inline const std::string NEW_INPUT = "New Input";

    /*protected*/ public: static inline const std::string NEW_OUTPUT = "New Output";

    /*protected*/ public: static inline const std::string NEW_COLOR_AT = "Color At";

    /*protected*/ public: static inline const std::string NEW_TIME_INTERVAL = "Time Interval";

    /*protected*/ public: static inline const std::string NEW_ALWAYS = "Always On/Off";

    /*protected*/ public: static inline const std::string NEW_KEY_INPUT = "Key";

    /*protected*/ public: static inline const std::string NEW_MOUSE_INPUT = "Mouse";

    /*protected*/ public: static inline const std::string NEW_JOYSTICK_INPUT = "Joystick";

    /*protected*/ public: static inline const std::string NEW_IMAGE_OUTPUT = "Image";

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: JPopupMenu* jPopupMenu;

public: ProfileActionScriptItem(std::string label, Node* node);

public: ProfileActionScriptItem(std::string label);

    private: void init();

                //@Throws(Exception.constructor)
            
    public: void process(int64_t frame);

    public: JPopupMenu* getJPopupMenu();

    public: void showDialog();

    public: void actionPerformed(ActionEvent* actionEvent);

    public: void setJPopupMenu(JPopupMenu* jPopupMenu);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_PROFILEACTIONSCRIPTITEM_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_PROFILEACTIONSCRIPTITEM_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_PROFILEACTIONSCRIPTITEM_H_COMPLETE
        #if __has_include(<java/awt/event/ActionEvent.h>)
#include <java/awt/event/ActionEvent.h>
#endif
#if __has_include(<java/awt/event/ActionListener.h>)
#include <java/awt/event/ActionListener.h>
#endif
#if __has_include(<javax/swing.h>)
#include <javax/swing.h>
#endif
#if __has_include(<javax/swing/tree/DefaultMutableTreeNode.h>)
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/input/automation/actions/script/ProfileActionScriptItemInterface.h")
#include "org/allbinary/input/automation/actions/script/ProfileActionScriptItemInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/JPopupMenu.h")
#include "org/allbinary/input/automation/actions/script/JPopupMenu.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/JMenuItem.h")
#include "org/allbinary/input/automation/actions/script/JMenuItem.h"
#endif

        #endif
    


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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUT_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt.h>
#include <java/awt/event/InputEvent.h>
#include <java/util/HashMap.h>
class DomNodeHelper;
class DomSearchHelper;
class ModDomHelper;
class StdUtil;
class LogUtil;
class BooleanFactory;
class StringMaker;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/BasicProfileActionScriptInput.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInputInterface.h"
class Point;
class MouseActionScriptInputJPanel;
class MouseActionScriptInputData;
class MouseInputAutomationProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MouseActionScriptInput: public BasicProfileActionScriptInput, public virtual MouseActionScriptInputInterface {

    private: static inline const std::string NAME = "Mouse";

    /*protected*/ public: LogUtil* logUtil;

    private: Point* point;

    private: int32_t buttons= 0;

    private: MouseActionScriptInputJPanel* mouseActionScriptInputJPanel;

public: MouseActionScriptInput(Node* node);

public: MouseActionScriptInput();

    public: void setPoint(Point* point);

    public: Point* getPoint();

    public: int32_t getButtonClicks();

    public: void setButtonClicks(int32_t buttons);

    public: void showDialog();

    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

                //@Throws(Exception.constructor)
            
    public: void process(int64_t frame);

    public: void log();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUT_H_COMPLETE
        #if __has_include(<java/awt.h>)
#include <java/awt.h>
#endif
#if __has_include(<java/awt/event/InputEvent.h>)
#include <java/awt/event/InputEvent.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeHelper.h>)
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/java/bool/BooleanFactory.h>)
#include <org/allbinary/logic/java/bool/BooleanFactory.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<org/w3c/dom/NodeList.h>)
#include <org/w3c/dom/NodeList.h>
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/BasicProfileActionScriptInput.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/BasicProfileActionScriptInput.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInputInterface.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInputInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/Point.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/Point.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInputJPanel.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInputJPanel.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInputData.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseActionScriptInputData.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/MouseInputAutomationProcessor.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/MouseInputAutomationProcessor.h"
#endif

        #endif
    

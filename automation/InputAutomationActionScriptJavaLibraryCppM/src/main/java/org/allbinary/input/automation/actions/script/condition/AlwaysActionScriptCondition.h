
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_ALWAYSACTIONSCRIPTCONDITION_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_ALWAYSACTIONSCRIPTCONDITION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/HashMap.h>
class DomNodeHelper;
class DomSearchHelper;
class ModDomHelper;
class StdUtil;
class LogUtil;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/BasicProfileActionScriptCondition.h"
#include "org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptConditionInterface.h"
class AlwaysActionScriptConditionJPanel;
class AlwaysActionScriptConditionData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AlwaysActionScriptCondition: public BasicProfileActionScriptCondition, public virtual AlwaysActionScriptConditionInterface {

    private: static inline const std::string NAME = "Always On/Off";

    /*protected*/ public: LogUtil* logUtil;

    private: AlwaysActionScriptConditionJPanel* alwaysActionScriptConditionJPanel;

    private: bool isOn= false;

public: AlwaysActionScriptCondition(Node* node);

public: AlwaysActionScriptCondition();

    private: void init();

    public: bool isIsOn();

    public: void setIsOn(bool isOn);

    public: void showDialog();

    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

                //@Throws(Exception.constructor)
            
    public: bool shouldProcess(int64_t frame);

    public: void log();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_ALWAYSACTIONSCRIPTCONDITION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_ALWAYSACTIONSCRIPTCONDITION_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_ALWAYSACTIONSCRIPTCONDITION_H_COMPLETE
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
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<org/w3c/dom/NodeList.h>)
#include <org/w3c/dom/NodeList.h>
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/BasicProfileActionScriptCondition.h")
#include "org/allbinary/input/automation/actions/script/condition/BasicProfileActionScriptCondition.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptConditionInterface.h")
#include "org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptConditionInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptConditionJPanel.h")
#include "org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptConditionJPanel.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptConditionData.h")
#include "org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptConditionData.h"
#endif

        #endif
    

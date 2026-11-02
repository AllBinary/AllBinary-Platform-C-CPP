
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_BASICPROFILEACTIONSCRIPTINPUT_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_BASICPROFILEACTIONSCRIPTINPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
class DomNodeHelper;
class DomSearchHelper;
class ModDomHelper;
#include <org/allbinary/input/automation/actions/script/condition/processors/BasicProfileActionScriptProcessor.h>
class InputRobotFactory;
class InputRobotInterface;
class StdUtil;
class LogUtil;
class StringMaker;
class StringUtil;
template<typename T1, typename T2> class ABHashtable;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/ProfileActionScriptInputInterface.h"
class GenericProfileActionScriptInputData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BasicProfileActionScriptInput: public BasicProfileActionScriptProcessor, public ProfileActionScriptInputInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: InputRobotInterface* inputRobotInterface;

    private: int32_t time= 0;

public: BasicProfileActionScriptInput(std::string label, Node* node);

public: BasicProfileActionScriptInput(std::string label);

    public: int32_t getTime();

    public: void setTime(int32_t time);

    public: HashMap<Object*, Object*>* BasicProfileActionScriptInput_toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

    public: void setInputRobotInterface(InputRobotInterface* inputRobotInterface);

    public: InputRobotInterface* getInputRobotInterface();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_BASICPROFILEACTIONSCRIPTINPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_BASICPROFILEACTIONSCRIPTINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_BASICPROFILEACTIONSCRIPTINPUT_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Iterator.h>)
#include <java/util/Iterator.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
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
#if __has_include(<org/allbinary/input/automation/actions/script/condition/processors/BasicProfileActionScriptProcessor.h>)
#include <org/allbinary/input/automation/actions/script/condition/processors/BasicProfileActionScriptProcessor.h>
#endif
#if __has_include(<org/allbinary/input/automation/robot/InputRobotFactory.h>)
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>
#endif
#if __has_include(<org/allbinary/input/automation/robot/InputRobotInterface.h>)
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/ProfileActionScriptInputInterface.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/ProfileActionScriptInputInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/GenericProfileActionScriptInputData.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/GenericProfileActionScriptInputData.h"
#endif

        #endif
    

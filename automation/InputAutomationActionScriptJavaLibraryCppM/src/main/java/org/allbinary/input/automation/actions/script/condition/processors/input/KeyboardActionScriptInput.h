
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYBOARDACTIONSCRIPTINPUT_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYBOARDACTIONSCRIPTINPUT_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
#include <java/awt/event/KeyEvent.h>
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class DomNodeHelper;
class DomSearchHelper;
class ModDomHelper;
class KeySingletonFactory;
class KeyUtil;
class StdUtil;
class LogUtil;
class StringMaker;
class CommonLabels;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/BasicProfileActionScriptInput.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInputInterface.h"
class KeyboardActionScriptInputJPanel;
class KeyboardActionScriptInputData;
class KeyboardInputAutomationProcessor;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class KeyboardActionScriptInput: public BasicProfileActionScriptInput, public virtual KeyboardActionScriptInputInterface {

    private: static inline const std::string NAME = "Keyboard";

    private: static std::string getText(std::vector<int32_t> integerArray);

    /*protected*/ public: LogUtil* logUtil;

    private: std::vector<int32_t> keyArray;

    private: KeyboardActionScriptInputJPanel* keyboardActionScriptInputJPanel;

    private: bool press= false;

    private: bool release= false;

    private: int32_t delayBetweenKeys= 0;

public: KeyboardActionScriptInput(Node* node);

public: KeyboardActionScriptInput();

    public: int32_t getDelayBetweenKeys();

    public: void setDelayBetweenKeys(int32_t delayBetweenKeys);

    public: bool isPress();

    public: void setPress(bool press);

    public: bool isRelease();

    public: void setRelease(bool release);

    public: bool isNormal();

    public: void setNormal();

    public: std::vector<int32_t> getKeyArray();

    public: void setKeyArray(std::vector<int32_t> keyArray);

    public: void showDialog();

    public: std::string getText();

    public: void setText(std::string text);

    private: std::vector<int32_t> integerArrayValue(std::string text);

    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

                //@Throws(Exception.constructor)
            
    public: void process(int64_t frame);

    public: void log();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYBOARDACTIONSCRIPTINPUT_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYBOARDACTIONSCRIPTINPUT_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYBOARDACTIONSCRIPTINPUT_H_COMPLETE
        #if __has_include(<java/awt/event/KeyEvent.h>)
#include <java/awt/event/KeyEvent.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
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
#if __has_include(<org/allbinary/input/KeySingletonFactory.h>)
#include <org/allbinary/input/KeySingletonFactory.h>
#endif
#if __has_include(<org/allbinary/input/KeyUtil.h>)
#include <org/allbinary/input/KeyUtil.h>
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
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
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
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInputInterface.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInputInterface.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInputJPanel.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInputJPanel.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInputData.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardActionScriptInputData.h"
#endif
#if __has_include("org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardInputAutomationProcessor.h")
#include "org/allbinary/input/automation/actions/script/condition/processors/input/KeyboardInputAutomationProcessor.h"
#endif

        #endif
    

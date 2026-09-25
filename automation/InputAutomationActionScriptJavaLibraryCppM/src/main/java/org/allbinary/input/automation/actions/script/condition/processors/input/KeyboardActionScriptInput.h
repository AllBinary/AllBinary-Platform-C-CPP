
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

            #include <vector>
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../../../../java/lang/Long.h"
        
#include <java/awt/event/KeyEvent.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/KeySingletonFactory.h>

      
#include <org/allbinary/input/KeyUtil.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicProfileActionScriptInput.h"
#include "KeyboardActionScriptInputInterface.h"
#include "KeyboardActionScriptInputJPanel.h"
#include "KeyboardActionScriptInputData.h"
#include "KeyboardInputAutomationProcessor.h"

class KeyboardActionScriptInput: public BasicProfileActionScriptInput, public KeyboardActionScriptInputInterface {

    private: static const std::string NAME = "Keyboard";

    private: static std::string getText(std::vector<Integer> integerArray);

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::vector<Integer> keyArray = 
                                                        {
                                                            KeySingletonFactory::getInstance(KeyEvent::VK_0)
                                                        };

    private: KeyboardActionScriptInputJPanel keyboardActionScriptInputJPanel;

    private: bool press= false;

    private: bool release= false;

    private: int32_t delayBetweenKeys= 0;

public: KeyboardActionScriptInput(Node node);

public: KeyboardActionScriptInput();

    public: int32_t getDelayBetweenKeys();

    public: void setDelayBetweenKeys(int32_t delayBetweenKeys);

    public: bool isPress();

    public: void setPress(bool press);

    public: bool isRelease();

    public: void setRelease(bool release);

    public: bool isNormal();

    public: void setNormal();

    public: std::vector<Integer> getKeyArray();

    public: void setKeyArray(std::vector<Integer> keyArray);

    public: void showDialog();

    public: std::string getText();

    public: void setText(std::string text);

    private: std::vector<Integer> integerArrayValue(std::string text);

    public: HashMap<any, any> toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

                //@Throws(Exception.constructor)
            
    public: void process(Long frame);

    public: void log();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_KEYBOARDACTIONSCRIPTINPUT_H

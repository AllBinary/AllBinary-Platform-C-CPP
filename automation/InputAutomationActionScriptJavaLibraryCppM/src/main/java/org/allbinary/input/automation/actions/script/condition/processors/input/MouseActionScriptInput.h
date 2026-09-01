
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

            #include "../../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../../java/lang/Integer.h"
        
            #include "../../../../../../../../../java/lang/Long.h"
        
#include <java/awt.h>

      
#include <java/awt/event/InputEvent.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/java/bool/BooleanFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicProfileActionScriptInput.h"
#include "MouseActionScriptInputInterface.h"
#include "Point.h"
#include "MouseActionScriptInputJPanel.h"
#include "MouseActionScriptInputData.h"
#include "MouseInputAutomationProcessor.h"

class MouseActionScriptInput: public BasicProfileActionScriptInput, public MouseActionScriptInputInterface {

    private: static const std::string NAME = "Mouse";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: Point point;

    private: int32_t buttons= 0;

    private: MouseActionScriptInputJPanel mouseActionScriptInputJPanel;

public: MouseActionScriptInput(Node node);

public: MouseActionScriptInput();

    public: void setPoint(Point point);

    public: Point getPoint();

    public: int32_t getButtonClicks();

    public: void setButtonClicks(int32_t buttons);

    public: void showDialog();

    public: HashMap<any, any> toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

                //@Throws(Exception.constructor)
            
    public: void process(Long frame);

    public: void log();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_MOUSEACTIONSCRIPTINPUT_H

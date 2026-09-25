
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

            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicProfileActionScriptCondition.h"
#include "AlwaysActionScriptConditionInterface.h"
#include "AlwaysActionScriptConditionJPanel.h"
#include "AlwaysActionScriptConditionData.h"

class AlwaysActionScriptCondition: public BasicProfileActionScriptCondition, public AlwaysActionScriptConditionInterface {

    private: static const std::string NAME = "Always On/Off";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: AlwaysActionScriptConditionJPanel alwaysActionScriptConditionJPanel;

    private: bool isOn= false;

public: AlwaysActionScriptCondition(Node node);

public: AlwaysActionScriptCondition();

    private: void init();

    public: bool isIsOn();

    public: void setIsOn(bool isOn);

    public: void showDialog();

    public: HashMap<any, any> toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document);

                //@Throws(Exception.constructor)
            
    public: bool shouldProcess(Long frame);

    public: void log();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_ALWAYSACTIONSCRIPTCONDITION_H

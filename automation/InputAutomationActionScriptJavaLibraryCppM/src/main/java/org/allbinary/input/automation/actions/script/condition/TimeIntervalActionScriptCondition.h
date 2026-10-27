
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_TIMEINTERVALACTIONSCRIPTCONDITION_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_TIMEINTERVALACTIONSCRIPTCONDITION_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/time/TimeDelayHelper.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/BasicProfileActionScriptCondition.h"
#include "org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptConditionInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptConditionJPanel.h"
#include "org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptConditionData.h"

class TimeIntervalActionScriptCondition: public BasicProfileActionScriptCondition, public TimeIntervalActionScriptConditionInterface {

    private: static inline const std::string NAME = "Time Interval";

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: TimeIntervalActionScriptConditionJPanel* timeIntervalActionScriptConditionJPanel;

    private: TimeDelayHelper* timeHelper;

public: TimeIntervalActionScriptCondition(Node* node);

public: TimeIntervalActionScriptCondition();

    private: void init();

    public: void showDialog();

    public: HashMap<Object*, Object*>* toHashMap();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

    public: void log();

    public: TimeDelayHelper* getTimeDelayHelper();

    public: void setTimeDelayHelper(TimeDelayHelper* timeHelper);

                //@Throws(Exception.constructor)
            
    public: bool shouldProcess(int64_t frame);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_TIMEINTERVALACTIONSCRIPTCONDITION_H

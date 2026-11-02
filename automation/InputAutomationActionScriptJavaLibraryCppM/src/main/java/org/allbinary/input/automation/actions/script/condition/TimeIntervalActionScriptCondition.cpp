
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_TIMEINTERVALACTIONSCRIPTCONDITION_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_TIMEINTERVALACTIONSCRIPTCONDITION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/condition/TimeIntervalActionScriptCondition.h"
        

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


TimeIntervalActionScriptCondition::TimeIntervalActionScriptCondition(Node* node) : BasicProfileActionScriptCondition(TimeIntervalActionScriptCondition::NAME, node), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    Node* actionNode = DomSearchHelper::getNode(TimeIntervalActionScriptConditionData::NAME, node->getChildNodes());;
    

                        if(actionNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    NodeList* nodeList = actionNode->getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* childNode = nodeList->item(index);;
    

                        if(childNode->getNodeName()->compareTo(TimeIntervalActionScriptConditionData::TIME) == 0)
                        
                                    {
                                    
    std::string interval = DomNodeHelper::getTextNodeValue(childNode);;
    
this->setTimeDelayHelper(new TimeDelayHelper(Integer.valueOf(interval)));
    

                                    }
                                
                        else {
                            


                            throw Exception("Time Interval Action Script Condition Unknown Node");
                    

                        }
                            
}


                                    }
                                
                        else {
                            


                            throw Exception("Time Interval Action Script Condition Node Null");
                    

                        }
                            
this->init();
    
}


TimeIntervalActionScriptCondition::TimeIntervalActionScriptCondition() : BasicProfileActionScriptCondition(TimeIntervalActionScriptCondition::NAME), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTimeDelayHelper(new TimeDelayHelper(0));
    
this->init();
    
}


    auto TimeIntervalActionScriptCondition::init() -> void{
this->timeIntervalActionScriptConditionJPanel= new TimeIntervalActionScriptConditionJPanel(this);
    
}


    auto TimeIntervalActionScriptCondition::showDialog() -> void{
this->timeIntervalActionScriptConditionJPanel->getTimeIntervalActionJDialog()->setVisible(true);
    
}


    auto TimeIntervalActionScriptCondition::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(TimeIntervalActionScriptConditionData::TIME, std::to_string(this->timeHelper->delay));
    
this->logUtil->putF(JavaString::valueOf("HashMap: ") +JavaString::valueOf(hashMap->toString()), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto TimeIntervalActionScriptCondition::toXmlNode(Document* document) -> Node*{

    Node* node = BasicProfileActionScriptCondition::toXmlNode(document);;
    
node->appendChild(ModDomHelper::createNodeWithValueNodes(document, TimeIntervalActionScriptConditionData::NAME, this->toHashMap()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    auto TimeIntervalActionScriptCondition::log() -> void{
this->logUtil->putF(JavaString::valueOf("Time Interval: ") +JavaString::valueOf(this->timeHelper->delay), this, "log");
    
}


    auto TimeIntervalActionScriptCondition::getTimeDelayHelper() -> TimeDelayHelper*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeHelper;
    
}


    auto TimeIntervalActionScriptCondition::setTimeDelayHelper(TimeDelayHelper* timeHelper) -> void{
this->timeHelper= timeHelper;
    
}


                //@Throws(Exception.constructor)
            
    auto TimeIntervalActionScriptCondition::shouldProcess(int64_t frame) -> bool{

    TimeDelayHelper* timeHelper = this->getTimeDelayHelper();;
    

                        if(timeHelper->isTimeTNT())
                        
                                    {
                                    timeHelper->setStartTimeTNT();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicProfileActionScriptCondition::shouldProcess(frame);;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_TIMEINTERVALACTIONSCRIPTCONDITION_CPP

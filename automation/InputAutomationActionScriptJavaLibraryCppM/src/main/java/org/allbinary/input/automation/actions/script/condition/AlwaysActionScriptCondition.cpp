
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_ALWAYSACTIONSCRIPTCONDITION_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_ALWAYSACTIONSCRIPTCONDITION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptCondition.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
            #include "java/lang/Boolean.h"
        
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
        #include "org/allbinary/input/automation/actions/script/condition/BasicProfileActionScriptCondition.h"
#include "org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptConditionInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptConditionJPanel.h"
#include "org/allbinary/input/automation/actions/script/condition/AlwaysActionScriptConditionData.h"


AlwaysActionScriptCondition::AlwaysActionScriptCondition(Node* node) : BasicProfileActionScriptCondition(AlwaysActionScriptCondition::NAME, node), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    Node* actionNode = DomSearchHelper::getNode(AlwaysActionScriptConditionData::NAME, node->getChildNodes());;
    

                        if(actionNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    NodeList* nodeList = actionNode->getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList->getLength(); index++)
        {

    Node* childNode = nodeList->item(index);;
    

                        if(childNode->getNodeName()->compareTo(AlwaysActionScriptConditionData::IS_ON) == 0)
                        
                                    {
                                    
    std::string booleanString = DomNodeHelper::getTextNodeValue(childNode);;
    
this->setIsOn(());
    

                                    }
                                
                        else {
                            


                            throw Exception("Action Script Condition Unknown Node");
                    

                        }
                            
}


                                    }
                                
                        else {
                            


                            throw Exception("Action Script Condition Node Null");
                    

                        }
                            
this->init();
    
}


AlwaysActionScriptCondition::AlwaysActionScriptCondition() : BasicProfileActionScriptCondition(AlwaysActionScriptCondition::NAME), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->init();
    
}


    auto AlwaysActionScriptCondition::init() -> void{
this->alwaysActionScriptConditionJPanel= new AlwaysActionScriptConditionJPanel(this);
    
}


    auto AlwaysActionScriptCondition::isIsOn() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->isOn;
    
}


    auto AlwaysActionScriptCondition::setIsOn(bool isOn) -> void{
this->isOn= isOn;
    
}


    auto AlwaysActionScriptCondition::showDialog() -> void{
this->alwaysActionScriptConditionJPanel->getAlwaysActionJDialog()->setVisible(true);
    
}


    auto AlwaysActionScriptCondition::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(AlwaysActionScriptConditionData::IS_ON, Boolean::toString(this->isIsOn()));
    
this->logUtil->putF(JavaString::valueOf("HashMap: ") +JavaString::valueOf(JavaString::valueOf(hashMap)), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto AlwaysActionScriptCondition::toXmlNode(Document* document) -> Node*{

    Node* node = BasicProfileActionScriptCondition::toXmlNode(document);;
    
node->appendChild(ModDomHelper::createNodeWithValueNodes(document, AlwaysActionScriptConditionData::NAME, this->toHashMap()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    auto AlwaysActionScriptCondition::shouldProcess(int64_t frame) -> bool{

                        if(this->isIsOn())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return BasicProfileActionScriptCondition::shouldProcess(frame);;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto AlwaysActionScriptCondition::log() -> void{
this->logUtil->putF(JavaString::valueOf("Is On: ") +JavaString::valueOf(this->isIsOn()), this, "log");
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_ALWAYSACTIONSCRIPTCONDITION_CPP

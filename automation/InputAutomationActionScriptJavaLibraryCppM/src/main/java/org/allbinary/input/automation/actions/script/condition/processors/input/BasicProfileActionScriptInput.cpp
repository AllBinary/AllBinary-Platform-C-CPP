
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_BASICPROFILEACTIONSCRIPTINPUT_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_BASICPROFILEACTIONSCRIPTINPUT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/BasicProfileActionScriptInput.h"
        

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

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/automation/actions/script/condition/processors/BasicProfileActionScriptProcessor.h>

      
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>

      
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/actions/script/condition/processors/input/ProfileActionScriptInputInterface.h"
#include "org/allbinary/input/automation/actions/script/condition/processors/input/GenericProfileActionScriptInputData.h"


BasicProfileActionScriptInput::BasicProfileActionScriptInput(std::string label, Node* node) : BasicProfileActionScriptProcessor(label, node), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil->putF(JavaString::valueOf(this->commonStrings->START) +JavaString::valueOf(label), this, this->commonStrings->CONSTRUCTOR);
    

    Node* actionNode = DomSearchHelper::getNode(GenericProfileActionScriptInputData::TYPE, node->getChildNodes());;
    

    std::string inputTypeString = DomNodeHelper::getTextNodeValue(actionNode);;
    

    Node* timeNode = DomSearchHelper::getNodeNoThrow(GenericProfileActionScriptInputData::DELAY, node->getChildNodes());;
    

                        if(timeNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string delayString = DomNodeHelper::getTextNodeValue(timeNode);;
    
this->setTime(JavaBoxes::value<int32_t>(Integer.valueOf(delayString)));
    

                                    }
                                
                        else {
                            this->setTime(0);
    

                        }
                            
this->setInputRobotInterface(InputRobotFactory::getInstance()->get(inputTypeString));
    
}


BasicProfileActionScriptInput::BasicProfileActionScriptInput(std::string label) : BasicProfileActionScriptProcessor(label), logUtil(LogUtil::getInstance()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil->putF(JavaString::valueOf(this->commonStrings->START) +JavaString::valueOf(label), this, this->commonStrings->CONSTRUCTOR);
    

    InputRobotFactory* inputRobotFactory = InputRobotFactory::getInstance();;
    

    ABHashtable<Object*, Object*>* hashtable = dynamic_cast<ABHashtable<Object*, Object*>*>(inputRobotFactory->get());;
    

    Set* set = hashtable->keys();;
    

    Iterator* iterator = set->iterator();;
    
this->setInputRobotInterface(inputRobotFactory->get(JavaBoxes::unbox<std::string>(iterator->next())));
    
this->setTime(0);
    
}


    auto BasicProfileActionScriptInput::getTime() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->time;
    
}


    auto BasicProfileActionScriptInput::setTime(int32_t time) -> void{
this->time= time;
    
}


    auto BasicProfileActionScriptInput::BasicProfileActionScriptInput_toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(GenericProfileActionScriptInputData::TYPE, this->getInputRobotInterface()->getName());
    
hashMap->put(GenericProfileActionScriptInputData::DELAY, std::to_string(this->getTime()));
    
this->logUtil->putF(JavaString::valueOf("HashMap: ") +JavaString::valueOf(JavaString::valueOf(hashMap)), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    auto BasicProfileActionScriptInput::toXmlNode(Document* document) -> Node*{

    Node* node = ModDomHelper::createNodeWithValueNodes(document, GenericProfileActionScriptInputData::NAME, this->BasicProfileActionScriptInput_toHashMap());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}


    auto BasicProfileActionScriptInput::setInputRobotInterface(InputRobotInterface* inputRobotInterface) -> void{
this->inputRobotInterface= inputRobotInterface;
    
}


    auto BasicProfileActionScriptInput::getInputRobotInterface() -> InputRobotInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->inputRobotInterface;
    
}


    auto BasicProfileActionScriptInput::toString() -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(BasicProfileActionScriptProcessor::toString());
    
stringBuffer->append(" Input Type: ");
    

                        if(this->getInputRobotInterface() != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer->append(this->getInputRobotInterface()->getName());
    

                                    }
                                
                        else {
                            stringBuffer->append(StringUtil::getInstance()->NULL_STRING);
    

                        }
                            
stringBuffer->append(" Time: ");
    
stringBuffer->appendlong(this->getTime());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_ACTIONS_SCRIPT_CONDITION_PROCESSORS_INPUT_BASICPROFILEACTIONSCRIPTINPUT_CPP

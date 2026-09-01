
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
        



            #include "../../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Hashtable.h>

      
#include <java/util/Iterator.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/automation/actions/script/condition/processors/BasicProfileActionScriptProcessor.h>

      
#include <org/allbinary/input/automation/robot/InputRobotFactory.h>

      
#include <org/allbinary/input/automation/robot/InputRobotInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProfileActionScriptInputInterface.h"
#include "GenericProfileActionScriptInputData.h"

class BasicProfileActionScriptInput: public BasicProfileActionScriptProcessor, public ProfileActionScriptInputInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: InputRobotInterface inputRobotInterface;

    private: int32_t time= 0;

public: BasicProfileActionScriptInput(std::string label, Node node){
            super(label, node);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil.putF(this->commonStrings.START +label, this, this->commonStrings.CONSTRUCTOR);
    

    Node actionNode = DomSearchHelper::getNode(GenericProfileActionScriptInputData::TYPE, node.getChildNodes());;
    

    std::string inputTypeString = DomNodeHelper::getTextNodeValue(actionNode);;
    

    Node timeNode = DomSearchHelper::getNodeNoThrow(GenericProfileActionScriptInputData::DELAY, node.getChildNodes());;
    

                        if(timeNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string delayString = DomNodeHelper::getTextNodeValue(timeNode);;
    
this->setTime(Integer::valueOf(delayString).intValue());
    

                                    }
                                
                        else {
                            this->setTime(0);
    

                        }
                            
this->setInputRobotInterface(InputRobotFactory::getInstance().get(inputTypeString));
    
}


public: BasicProfileActionScriptInput(std::string label){
            super(label);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->logUtil.putF(this->commonStrings.START +label, this, this->commonStrings.CONSTRUCTOR);
    

    InputRobotFactory inputRobotFactory = InputRobotFactory::getInstance();;
    

    Hashtable<any, any> hashtable = inputRobotFactory.get() as Hashtable<any, any>;;
    

    Set set = hashtable.keys();;
    

    Iterator iterator = set.iterator();;
    
this->setInputRobotInterface(inputRobotFactory.get(iterator.next() as string));
    
this->setTime(0);
    
}


    public: int32_t getTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->time;
    
}


    public: void setTime(int32_t time){
this->time= time;
    
}


    public: HashMap<any, any> BasicProfileActionScriptInput_toHashMap(){

    HashMap<any, any> hashMap = HashMap<any, any>();;
    
hashMap.put(GenericProfileActionScriptInputData::TYPE, this->getInputRobotInterface().getName());
    
hashMap.put(GenericProfileActionScriptInputData::DELAY, std::to_string(getTime));
    
this->logUtil.putF("HashMap: " +hashMap.toString(), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = ModDomHelper::createNodeWithValueNodes(document, GenericProfileActionScriptInputData::NAME, this->BasicProfileActionScriptInput_toHashMap());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public: void setInputRobotInterface(InputRobotInterface inputRobotInterface){
this->inputRobotInterface= inputRobotInterface;
    
}


    public: InputRobotInterface getInputRobotInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inputRobotInterface;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(super.toString());
    
stringBuffer.append(" Input Type: ");
    

                        if(this->getInputRobotInterface() != 
                                    nullptr
                                )
                        
                                    {
                                    stringBuffer.append(this->getInputRobotInterface().getName());
    

                                    }
                                
                        else {
                            stringBuffer.append(StringUtil::getInstance().NULL_STRING);
    

                        }
                            
stringBuffer.append(" Time: ");
    
stringBuffer.appendlong(this->getTime());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            



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
        #include "BasicProfileActionScriptCondition.h"
#include "TimeIntervalActionScriptConditionInterface.h"
#include "TimeIntervalActionScriptConditionJPanel.h"
#include "TimeIntervalActionScriptConditionData.h"

class TimeIntervalActionScriptCondition: public BasicProfileActionScriptCondition, public TimeIntervalActionScriptConditionInterface {

    private: static const std::string NAME = "Time Interval";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: TimeIntervalActionScriptConditionJPanel timeIntervalActionScriptConditionJPanel;

    private: TimeDelayHelper timeHelper;

public: TimeIntervalActionScriptCondition(Node node) : BasicProfileActionScriptCondition(TimeIntervalActionScriptCondition::NAME, node){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

    Node actionNode = DomSearchHelper::getNode(TimeIntervalActionScriptConditionData::NAME, node.getChildNodes());;
    

                        if(actionNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    NodeList nodeList = actionNode.getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList.getLength(); index++)
        {

    Node childNode = nodeList.item(index);;
    

                        if(childNode.getNodeName().compareTo(TimeIntervalActionScriptConditionData::TIME) == 0)
                        
                                    {
                                    
    std::string interval = DomNodeHelper::getTextNodeValue(childNode);;
    
this->setTimeDelayHelper(TimeDelayHelper(Integer::valueOf(interval)));
    

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


public: TimeIntervalActionScriptCondition() : BasicProfileActionScriptCondition(TimeIntervalActionScriptCondition::NAME){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setTimeDelayHelper(TimeDelayHelper(0));
    
this->init();
    
}


    private: void init(){
this->timeIntervalActionScriptConditionJPanel= TimeIntervalActionScriptConditionJPanel(this);
    
}


    public: void showDialog(){
this->timeIntervalActionScriptConditionJPanel.getTimeIntervalActionJDialog().setVisible(true);
    
}


    public: HashMap<Object*, Object*> toHashMap(){

    HashMap<Object*, Object*> hashMap = StdUtil::getInstance().createHashMap();;
    
hashMap.put(TimeIntervalActionScriptConditionData::TIME, std::to_string(delay));
    
this->logUtil.putF("HashMap: " +hashMap.toString(), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = super.toXmlNode(document);;
    
node.appendChild(ModDomHelper::createNodeWithValueNodes(document, TimeIntervalActionScriptConditionData::NAME, this->toHashMap()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public: void log(){
this->logUtil.putF("Time Interval: " +this->timeHelper.delay, this, "log");
    
}


    public: TimeDelayHelper getTimeDelayHelper(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeHelper;
    
}


    public: void setTimeDelayHelper(TimeDelayHelper timeHelper){
this->timeHelper= timeHelper;
    
}


                //@Throws(Exception.constructor)
            
    public: bool shouldProcess(Long frame){

    TimeDelayHelper timeHelper = this->getTimeDelayHelper();;
    

                        if(timeHelper.isTimeTNT())
                        
                                    {
                                    timeHelper.setStartTimeTNT();
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.shouldProcess(frame);;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            


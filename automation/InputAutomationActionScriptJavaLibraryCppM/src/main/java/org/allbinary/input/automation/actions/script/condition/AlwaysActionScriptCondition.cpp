
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

public: AlwaysActionScriptCondition(Node node){
            super(AlwaysActionScriptCondition::NAME, node);
                    

                            //For kotlin this is before the body of the constructor.
                    

    Node actionNode = DomSearchHelper::getNode(AlwaysActionScriptConditionData::NAME, node.getChildNodes());;
    

                        if(actionNode != 
                                    nullptr
                                )
                        
                                    {
                                    
    NodeList nodeList = actionNode.getChildNodes();;
    




                        for (
    int32_t index = 0;index < nodeList.getLength(); index++)
        {

    Node childNode = nodeList.item(index);;
    

                        if(childNode.getNodeName().compareTo(AlwaysActionScriptConditionData::IS_ON) == 0)
                        
                                    {
                                    
    std::string booleanString = DomNodeHelper::getTextNodeValue(childNode);;
    
this->setIsOn(.valueOf());
    

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


public: AlwaysActionScriptCondition(){
            super(AlwaysActionScriptCondition::NAME);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->init();
    
}


    private: void init(){
this->alwaysActionScriptConditionJPanel= AlwaysActionScriptConditionJPanel(this);
    
}


    public: bool isIsOn(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isOn;
    
}


    public: void setIsOn(bool isOn){
this->isOn= isOn;
    
}


    public: void showDialog(){
this->alwaysActionScriptConditionJPanel.getAlwaysActionJDialog().setVisible(true);
    
}


    public: HashMap<any, any> toHashMap(){

    HashMap<any, any> hashMap = StdUtil::getInstance().createHashMap();;
    
hashMap.put(AlwaysActionScriptConditionData::IS_ON, Boolean::toString(this->isIsOn()));
    
this->logUtil.putF("HashMap: " +hashMap.toString(), this, "toHashMap()");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = super.toXmlNode(document);;
    
node.appendChild(ModDomHelper::createNodeWithValueNodes(document, AlwaysActionScriptConditionData::NAME, this->toHashMap()));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


                //@Throws(Exception.constructor)
            
    public: bool shouldProcess(Long frame){

                        if(this->isIsOn())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return super.shouldProcess(frame);;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: void log(){
this->logUtil.putF("Is On: " +this->isIsOn(), this, "log");
    
}


};

            


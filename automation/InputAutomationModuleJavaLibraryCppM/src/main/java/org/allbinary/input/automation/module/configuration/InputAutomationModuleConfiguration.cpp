
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
#include <javax/xml/bind/annotation/XmlAccessType.h>

      
#include <javax/xml/bind/annotation/XmlAccessorType.h>

      
#include <javax/xml/bind/annotation/XmlElement.h>

      
#include <javax/xml/bind/annotation/XmlRootElement.h>

      
#include <javax/xml/bind/annotation/XmlType.h>

      
#include <org/allbinary/business/DynamicObjectData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/input/automation/InputAutomationData.h>

      
#include <org/allbinary/input/automation/module/InputAutomationModuleData.h>

      
#include <org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/loader/AbeFactory.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InputAutomationModuleConfiguration
            : public Object
         {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: std::string className;

    private: std::string name;

    private: InputAutomationModuleFactoryInterface* inputAutomationModuleInterface;

public: InputAutomationModuleConfiguration(){
}


public: InputAutomationModuleConfiguration(AbeClientInformationInterface* abeClientInformation, Node* node){
this->init(abeClientInformation, node);
    
}


public: InputAutomationModuleConfiguration(AbeClientInformationInterface* abeClientInformation, std::string name, std::string className){
this->setName(name);
    
this->setClassName(className);
    
this->init(abeClientInformation);
    
}


public: InputAutomationModuleConfiguration(InputAutomationModuleFactoryInterface* inputAutomationModuleInterface){
this->setInputAutomationModuleInterface(inputAutomationModuleInterface);
    
this->setClassName(this->inputAutomationModuleInterface->getClass()->getName());
    
}


                //@Throws(Exception.constructor)
            
    public: void init(AbeClientInformationInterface* abeClientInformation, Node* node){

    NodeList* nodeList = node->getChildNodes();;
    

                        if(nodeList != 
                                    nullptr
                                )
                        
                                    {
                                    
    Node* classNameNode = DomSearchHelper::getNode(DynamicObjectData::NAME, nodeList);;
    

                        if(classNameNode != 
                                    nullptr
                                )
                        
                                    {
                                    this->setClassName(DomNodeHelper::getTextNodeValue(classNameNode));
    
this->init(abeClientInformation);
    

                                    }
                                
                        else {
                            this->logUtil->putF("Class Node Null", this, this->commonStrings->INIT);
    

                        }
                            

                                    }
                                
                        else {
                            this->logUtil->putF(InputAutomationData::NAME +" Node Has No Children", this, "Contructor");
    

                        }
                            
}


    public: void init(AbeClientInformationInterface* abeClientInformation){

        try {
            this->logUtil->putF("Name: " +getName(), this, this->commonStrings->INIT);
    
this->logUtil->putF("ClassName: " +className, this, this->commonStrings->INIT);
    
this->setInputAutomationModuleInterface(dynamic_cast<InputAutomationModuleFactoryInterface*>(AbeFactory::getInstance()->getInstance()->getInstance(abeClientInformation, getClassName())));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(commonStrings->EXCEPTION, this, this->commonStrings->INIT, &e);
    



                            throw new RuntimeException();
                    
}

}


                //@Throws(Exception.constructor)
            
    public: Node* toDomNode(Document* document){

    Node* node = document->createElement(InputAutomationModuleData::NAME);;
    

    Node* classNameNode = ModDomHelper::createTextNode(document, DynamicObjectData::NAME, this->getClassName());;
    
node->appendChild(classNameNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: void setName(std::string name){
this->logUtil->putF("Name: " +name, this, "setName");
    
this->name= name;
    
}


    public: std::string getClassName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->className;
    
}


    public: void setClassName(std::string className){
this->logUtil->putF("ClassName : " +className, this, "setClassName");
    
this->className= className;
    
}


    public: InputAutomationModuleFactoryInterface* getInputAutomationModuleInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->inputAutomationModuleInterface;
    
}


    public: void setInputAutomationModuleInterface(InputAutomationModuleFactoryInterface* inputAutomationModuleInterface){
this->logUtil->putF("InputAutomationModuleFactoryInterface : " +inputAutomationModuleInterface, this, "setInputAutomationModuleInterface");
    
this->inputAutomationModuleInterface= inputAutomationModuleInterface;
    
this->setName(this->inputAutomationModuleInterface->getName());
    
}


};

            


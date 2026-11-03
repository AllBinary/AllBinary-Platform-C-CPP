
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONMODULECONFIGURATION_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONMODULECONFIGURATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h"
        

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
        

InputAutomationModuleConfiguration::InputAutomationModuleConfiguration() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
}


InputAutomationModuleConfiguration::InputAutomationModuleConfiguration(AbeClientInformationInterface* abeClientInformation, Node* node) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->init(abeClientInformation, node);
    
}


InputAutomationModuleConfiguration::InputAutomationModuleConfiguration(AbeClientInformationInterface* abeClientInformation, std::string name, std::string className) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->setName(name);
    
this->setClassName(className);
    
this->init(abeClientInformation);
    
}


InputAutomationModuleConfiguration::InputAutomationModuleConfiguration(InputAutomationModuleFactoryInterface* inputAutomationModuleInterface) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->setInputAutomationModuleInterface(inputAutomationModuleInterface);
    
this->setClassName(this->inputAutomationModuleInterface->getClass()->getName());
    
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationModuleConfiguration::init(AbeClientInformationInterface* abeClientInformation, Node* node) -> void{

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
                            this->logUtil->putF(JavaString::valueOf(InputAutomationData::NAME) +JavaString::valueOf(" Node Has No Children"), this, "Contructor");
    

                        }
                            
}


    auto InputAutomationModuleConfiguration::init(AbeClientInformationInterface* abeClientInformation) -> void{

        try {
            this->logUtil->putF(JavaString::valueOf("Name: ") +JavaString::valueOf(getName()), this, this->commonStrings->INIT);
    
this->logUtil->putF(JavaString::valueOf("ClassName: ") +JavaString::valueOf(className), this, this->commonStrings->INIT);
    
this->setInputAutomationModuleInterface(dynamic_cast<InputAutomationModuleFactoryInterface*>(AbeFactory::getInstance()->getInstance()->getInstance(abeClientInformation, getClassName())));
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(commonStrings->EXCEPTION, this, this->commonStrings->INIT, &e);
    



                            throw RuntimeException();
                    
}

}


                //@Throws(Exception.constructor)
            
    auto InputAutomationModuleConfiguration::toDomNode(Document* document) -> Node*{

    Node* node = document->createElement(InputAutomationModuleData::NAME);;
    

    Node* classNameNode = ModDomHelper::createTextNode(document, DynamicObjectData::NAME, this->getClassName());;
    
node->appendChild(classNameNode);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return node;
    
}


    auto InputAutomationModuleConfiguration::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto InputAutomationModuleConfiguration::setName(std::string name) -> void{
this->logUtil->putF(JavaString::valueOf("Name: ") +JavaString::valueOf(name), this, "setName");
    
this->name= name;
    
}


    auto InputAutomationModuleConfiguration::getClassName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->className;
    
}


    auto InputAutomationModuleConfiguration::setClassName(std::string className) -> void{
this->logUtil->putF(JavaString::valueOf("ClassName : ") +JavaString::valueOf(className), this, "setClassName");
    
this->className= className;
    
}


    auto InputAutomationModuleConfiguration::getInputAutomationModuleInterface() -> InputAutomationModuleFactoryInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->inputAutomationModuleInterface;
    
}


    auto InputAutomationModuleConfiguration::setInputAutomationModuleInterface(InputAutomationModuleFactoryInterface* inputAutomationModuleInterface) -> void{
this->logUtil->putF(JavaString::valueOf("InputAutomationModuleFactoryInterface : ") +JavaString::valueOf(inputAutomationModuleInterface), this, "setInputAutomationModuleInterface");
    
this->inputAutomationModuleInterface= inputAutomationModuleInterface;
    
this->setName(this->inputAutomationModuleInterface->getName());
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONMODULECONFIGURATION_CPP

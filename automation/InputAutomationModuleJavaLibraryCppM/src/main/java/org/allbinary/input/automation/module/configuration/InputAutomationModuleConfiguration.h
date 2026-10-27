
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONMODULECONFIGURATION_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONMODULECONFIGURATION_H

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

public: InputAutomationModuleConfiguration();

public: InputAutomationModuleConfiguration(AbeClientInformationInterface* abeClientInformation, Node* node);

public: InputAutomationModuleConfiguration(AbeClientInformationInterface* abeClientInformation, std::string name, std::string className);

public: InputAutomationModuleConfiguration(InputAutomationModuleFactoryInterface* inputAutomationModuleInterface);

                //@Throws(Exception.constructor)
            
    public: void init(AbeClientInformationInterface* abeClientInformation, Node* node);

    public: void init(AbeClientInformationInterface* abeClientInformation);

                //@Throws(Exception.constructor)
            
    public: Node* toDomNode(Document* document);

    public: std::string getName();

    public: void setName(std::string name);

    public: std::string getClassName();

    public: void setClassName(std::string className);

    public: InputAutomationModuleFactoryInterface* getInputAutomationModuleInterface();

    public: void setInputAutomationModuleInterface(InputAutomationModuleFactoryInterface* inputAutomationModuleInterface);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONMODULECONFIGURATION_H

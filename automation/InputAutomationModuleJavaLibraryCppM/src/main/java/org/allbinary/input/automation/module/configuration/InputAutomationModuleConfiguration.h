
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
class XmlAccessType;
class XmlAccessorType;
class XmlElement;
class XmlRootElement;
class XmlType;
class DynamicObjectData;
class DomNodeHelper;
class DomSearchHelper;
class ModDomHelper;
class InputAutomationData;
class InputAutomationModuleData;
class InputAutomationModuleFactoryInterface;
class LogUtil;
class AbeFactory;
class AbeClientInformationInterface;
class CommonStrings;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationModuleConfiguration
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONMODULECONFIGURATION_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONMODULECONFIGURATION_H_COMPLETE
        #if __has_include(<javax/xml/bind/annotation/XmlAccessType.h>)
#include <javax/xml/bind/annotation/XmlAccessType.h>
#endif
#if __has_include(<javax/xml/bind/annotation/XmlAccessorType.h>)
#include <javax/xml/bind/annotation/XmlAccessorType.h>
#endif
#if __has_include(<javax/xml/bind/annotation/XmlElement.h>)
#include <javax/xml/bind/annotation/XmlElement.h>
#endif
#if __has_include(<javax/xml/bind/annotation/XmlRootElement.h>)
#include <javax/xml/bind/annotation/XmlRootElement.h>
#endif
#if __has_include(<javax/xml/bind/annotation/XmlType.h>)
#include <javax/xml/bind/annotation/XmlType.h>
#endif
#if __has_include(<org/allbinary/business/DynamicObjectData.h>)
#include <org/allbinary/business/DynamicObjectData.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeHelper.h>)
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/input/automation/InputAutomationData.h>)
#include <org/allbinary/input/automation/InputAutomationData.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/InputAutomationModuleData.h>)
#include <org/allbinary/input/automation/module/InputAutomationModuleData.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>)
#include <org/allbinary/input/automation/module/InputAutomationModuleFactoryInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/loader/AbeFactory.h>)
#include <org/allbinary/logic/system/loader/AbeFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include(<org/w3c/dom/NodeList.h>)
#include <org/w3c/dom/NodeList.h>
#endif

        #endif
    

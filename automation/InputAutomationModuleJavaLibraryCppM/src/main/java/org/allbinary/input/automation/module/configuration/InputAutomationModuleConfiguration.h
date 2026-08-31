
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

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/RuntimeException.h"
        
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: className: string;

    private: name: string;

    private: inputAutomationModuleInterface: InputAutomationModuleFactoryInterface;

public constructor ();

public constructor (AbeClientInformationInterface abeClientInformation, Node node);

public constructor (AbeClientInformationInterface abeClientInformation, string name, string className);

public constructor (InputAutomationModuleFactoryInterface inputAutomationModuleInterface);

                //@Throws(Exception.constructor)
            
    public init(AbeClientInformationInterface abeClientInformation, Node node);

    public init(AbeClientInformationInterface abeClientInformation);

                //@Throws(Exception.constructor)
            
    public Node toDomNode(Document document);

    public string getName();

    public setName(string name);

    public string getClassName();

    public setClassName(string className);

    public InputAutomationModuleFactoryInterface getInputAutomationModuleInterface();

    public setInputAutomationModuleInterface(InputAutomationModuleFactoryInterface inputAutomationModuleInterface);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONMODULECONFIGURATION_H


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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONMODULECONFIGURATIONS_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONMODULECONFIGURATIONS_H

            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/File.h>

      
#include <java/io/FileInputStream.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/List.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/input/automation/module/InputAutomationModuleData.h>

      
#include <org/allbinary/input/automation/module/NewInputAutomationModulesData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InputAutomationModuleConfiguration.h"

class InputAutomationModuleConfigurations
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: HashMap<Object*, Object*> hashMap;

public: InputAutomationModuleConfigurations(AbeClientInformationInterface abeClientInformation, File file);

public: InputAutomationModuleConfigurations(AbeClientInformationInterface abeClientInformation, Document document);

public: InputAutomationModuleConfigurations(List<InputAutomationModuleConfiguration> inputAutomationModuleConfigurationList);

public: InputAutomationModuleConfigurations();

    public: void add(InputAutomationModuleConfiguration inputAutomationModuleConfiguration);

    public: void remove(InputAutomationModuleConfiguration inputAutomationModuleConfiguration);

    public: HashMap<Object*, Object*> getHashMap();

    public: void setHashMap(HashMap<Object*, Object*> hashMap);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONMODULECONFIGURATIONS_H

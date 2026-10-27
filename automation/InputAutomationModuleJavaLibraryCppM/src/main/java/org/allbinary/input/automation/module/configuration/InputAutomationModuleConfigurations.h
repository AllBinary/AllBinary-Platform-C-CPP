
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
class DomDocumentHelper;
class InputAutomationModuleData;
class NewInputAutomationModulesData;
class LogUtil;
class AbeClientInformationInterface;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InputAutomationModuleConfiguration;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationModuleConfigurations
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    private: HashMap<Object*, Object*>* hashMap;

public: InputAutomationModuleConfigurations(AbeClientInformationInterface* abeClientInformation, File* file);

public: InputAutomationModuleConfigurations(AbeClientInformationInterface* abeClientInformation, Document* document);

public: InputAutomationModuleConfigurations(List<InputAutomationModuleConfiguration*>* inputAutomationModuleConfigurationList);

public: InputAutomationModuleConfigurations();

    public: void add(InputAutomationModuleConfiguration* inputAutomationModuleConfiguration);

    public: void remove(InputAutomationModuleConfiguration* inputAutomationModuleConfiguration);

    public: HashMap<Object*, Object*>* getHashMap();

    public: void setHashMap(HashMap<Object*, Object*>* hashMap);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONMODULECONFIGURATIONS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONMODULECONFIGURATIONS_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONMODULECONFIGURATIONS_H_COMPLETE
        #if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<java/io/FileInputStream.h>)
#include <java/io/FileInputStream.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/List.h>)
#include <java/util/List.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/InputAutomationModuleData.h>)
#include <org/allbinary/input/automation/module/InputAutomationModuleData.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/NewInputAutomationModulesData.h>)
#include <org/allbinary/input/automation/module/NewInputAutomationModulesData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
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
#if __has_include("org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h")
#include "org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h"
#endif

        #endif
    


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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATIONFACTORY_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATIONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/File.h>
#include <java/io/FileInputStream.h>
#include <java/util/List.h>
class JAXBContext;
template<typename T1> class JAXBElement;
class Unmarshaller;
class StreamSource;
class InputAutomationModuleConfiguration;
class LogUtil;
class AbeClientInformationInterface;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InputAutomationConfiguration;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputAutomationConfigurationFactory
            : public virtual Object
         {

    private: static InputAutomationConfigurationFactory* instance_owner();
    private: static InputAutomationConfigurationFactory* instance;

    public: static InputAutomationConfigurationFactory* getInstance();

    /*protected*/ public: LogUtil* logUtil;

    public: InputAutomationConfiguration* inputAutomationConfiguration = 
                nullptr
            ;

private: InputAutomationConfigurationFactory();

                //@Throws(Exception.constructor)
            
    public: void init(AbeClientInformationInterface* abeClientInformation);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATIONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATIONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATIONFACTORY_H_COMPLETE
        #if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<java/io/FileInputStream.h>)
#include <java/io/FileInputStream.h>
#endif
#if __has_include(<java/util/List.h>)
#include <java/util/List.h>
#endif
#if __has_include(<javax/xml/bind/JAXBContext.h>)
#include <javax/xml/bind/JAXBContext.h>
#endif
#if __has_include(<javax/xml/bind/JAXBElement.h>)
#include <javax/xml/bind/JAXBElement.h>
#endif
#if __has_include(<javax/xml/bind/Unmarshaller.h>)
#include <javax/xml/bind/Unmarshaller.h>
#endif
#if __has_include(<javax/xml/transform/stream/StreamSource.h>)
#include <javax/xml/transform/stream/StreamSource.h>
#endif
#if __has_include(<org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h>)
#include <org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>)
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/input/automation/configuration/InputAutomationConfiguration.h")
#include "org/allbinary/input/automation/configuration/InputAutomationConfiguration.h"
#endif

        #endif
    

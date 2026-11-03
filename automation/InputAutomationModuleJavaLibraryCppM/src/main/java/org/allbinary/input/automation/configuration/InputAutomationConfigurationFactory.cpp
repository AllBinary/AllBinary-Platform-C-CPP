
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATIONFACTORY_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATIONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/configuration/InputAutomationConfigurationFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/File.h>

      
#include <java/io/FileInputStream.h>

      
#include <java/util/List.h>

      
#include <javax/xml/bind/JAXBContext.h>

      
#include <javax/xml/bind/JAXBElement.h>

      
#include <javax/xml/bind/Unmarshaller.h>

      
#include <javax/xml/transform/stream/StreamSource.h>

      
#include <org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/configuration/InputAutomationConfiguration.h"

auto InputAutomationConfigurationFactory::instance_owner() -> InputAutomationConfigurationFactory* { static std::unique_ptr<InputAutomationConfigurationFactory> value(new InputAutomationConfigurationFactory()); return value.get(); }
InputAutomationConfigurationFactory* InputAutomationConfigurationFactory::instance = InputAutomationConfigurationFactory::instance_owner();

    auto InputAutomationConfigurationFactory::getInstance() -> InputAutomationConfigurationFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return InputAutomationConfigurationFactory::instance;
    
}


InputAutomationConfigurationFactory::InputAutomationConfigurationFactory() : logUtil(LogUtil::getInstance()){
}


                //@Throws(Exception.constructor)
            
    auto InputAutomationConfigurationFactory::init(AbeClientInformationInterface* abeClientInformation) -> void{

    LogUtil* logUtil = LogUtil::getInstance();;
    

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    std::string INPUT_AUTOMATION_CONFIGURATION = "InputAutomationConfiguration";;
    

    File* file = InputAutomationConfiguration::getFile();;
    

                        if(file->isFile())
                        
                                    {
                                    logUtil->putF("LoadingConfiguration", INPUT_AUTOMATION_CONFIGURATION, commonStrings->INIT);
    

    JAXBContext* jaxbContext = JAXBContext::newInstance(
                            Class::forType(typeid(InputAutomationConfiguration)));;
    

    Unmarshaller* unmarshaller = jaxbContext->createUnmarshaller();;
    

    JAXBElement<InputAutomationConfiguration*>* root = unmarshaller->unmarshal(new StreamSource(new FileInputStream(file)), 
                            Class::forType(typeid(InputAutomationConfiguration)));;
    
this->inputAutomationConfiguration= dynamic_cast<InputAutomationConfiguration*>(root->getValue());
    

    List<InputAutomationModuleConfiguration*>* inputAutomationModuleConfigurationList = this->inputAutomationConfiguration->getInputAutomationModuleConfigurationList();;
    
logUtil->putF(JavaString::valueOf(JavaString::valueOf(JavaString::valueOf("isInstalled: ") +JavaString::valueOf(this->inputAutomationConfiguration->isInstalled())) +JavaString::valueOf(" inputAutomationModuleConfigurationList: ")) +JavaString::valueOf(inputAutomationModuleConfigurationList), INPUT_AUTOMATION_CONFIGURATION, commonStrings->INIT);
    

                        if(inputAutomationModuleConfigurationList != 
                                    nullptr
                                )
                        
                                    {
                                    
    int32_t size = inputAutomationModuleConfigurationList->size;;
    

    InputAutomationModuleConfiguration* inputAutomationModuleConfiguration;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
inputAutomationModuleConfiguration= inputAutomationModuleConfigurationList->get(index);
    
inputAutomationModuleConfiguration->init(abeClientInformation);
    
}


                                    }
                                
logUtil->putF("LoadedConfiguration", INPUT_AUTOMATION_CONFIGURATION, commonStrings->INIT);
    

                                    }
                                
                        else {
                            logUtil->putF("New Configuration", INPUT_AUTOMATION_CONFIGURATION, commonStrings->INIT);
    
this->inputAutomationConfiguration= new InputAutomationConfiguration();
    

                        }
                            
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_CONFIGURATION_INPUTAUTOMATIONCONFIGURATIONFACTORY_CPP

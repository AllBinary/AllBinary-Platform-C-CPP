
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONMODULECONFIGURATIONS_CPP
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONMODULECONFIGURATIONS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/automation/module/configuration/InputAutomationModuleConfigurations.h"
        

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

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/input/automation/module/InputAutomationModuleData.h>

      
#include <org/allbinary/input/automation/module/NewInputAutomationModulesData.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/automation/module/configuration/InputAutomationModuleConfiguration.h"


InputAutomationModuleConfigurations::InputAutomationModuleConfigurations(AbeClientInformationInterface* abeClientInformation, File* file) : logUtil(LogUtil::getInstance()){
this->setHashMap(new HashMap<Object*, Object*>());
    

    std::vector<int8_t> bytes = std::vector<int8_t>(100000);;
    

    FileInputStream* idFile = new FileInputStream(file);;
    

    int32_t length = idFile->read(bytes);;
    

    std::string data = JavaString::fromChars(bytes);;
    

    int32_t endIndex = JavaString::lastIndexOf(data, '>');;
    

    Document* document = DomDocumentHelper::create(JavaString::substring(data, 0, endIndex +1));;
    

    NodeList* nodeList = document->getElementsByTagName(NewInputAutomationModulesData::NAME);;
    

                        if(nodeList->getLength() > 0)
                        
                                    {
                                    
    NodeList* nameNodeList = document->getElementsByTagName(InputAutomationModuleData::NAME);;
    
this->logUtil->putF(JavaString::valueOf("Number Of Module(s) Specified: ") +JavaString::valueOf(nameNodeList->getLength()), this, "Contructor");
    




                        for (
    int32_t index = 0;index < nameNodeList->getLength(); index++)
        {

    Node* node = nameNodeList->item(index);;
    
this->add(new InputAutomationModuleConfiguration(abeClientInformation, node));
    
}


                                    }
                                
}


InputAutomationModuleConfigurations::InputAutomationModuleConfigurations(AbeClientInformationInterface* abeClientInformation, Document* document) : logUtil(LogUtil::getInstance()){
this->setHashMap(new HashMap<Object*, Object*>());
    

    NodeList* nameNodeList = document->getElementsByTagName(InputAutomationModuleData::NAME);;
    
this->logUtil->putF(JavaString::valueOf("Number Of Module(s) Specified: ") +JavaString::valueOf(nameNodeList->getLength()), this, "Contructor");
    




                        for (
    int32_t index = 0;index < nameNodeList->getLength(); index++)
        {

    Node* node = nameNodeList->item(index);;
    
this->add(new InputAutomationModuleConfiguration(abeClientInformation, node));
    
}

}


InputAutomationModuleConfigurations::InputAutomationModuleConfigurations(List<InputAutomationModuleConfiguration*>* inputAutomationModuleConfigurationList) : logUtil(LogUtil::getInstance()){
this->setHashMap(new HashMap<Object*, Object*>());
    

    int32_t size = inputAutomationModuleConfigurationList->size();;
    

    InputAutomationModuleConfiguration* inputAutomationModuleConfiguration;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
inputAutomationModuleConfiguration= inputAutomationModuleConfigurationList->get(index);
    
this->add(inputAutomationModuleConfiguration);
    
}

}


InputAutomationModuleConfigurations::InputAutomationModuleConfigurations() : logUtil(LogUtil::getInstance()){
this->setHashMap(new HashMap<Object*, Object*>());
    
}


    auto InputAutomationModuleConfigurations::add(InputAutomationModuleConfiguration* inputAutomationModuleConfiguration) -> void{
this->getHashMap()->put(inputAutomationModuleConfiguration->getClassName(), inputAutomationModuleConfiguration);
    
}


    auto InputAutomationModuleConfigurations::remove(InputAutomationModuleConfiguration* inputAutomationModuleConfiguration) -> void{
this->getHashMap()->remove(inputAutomationModuleConfiguration->getClassName());
    
}


    auto InputAutomationModuleConfigurations::getHashMap() -> HashMap<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->hashMap;
    
}


    auto InputAutomationModuleConfigurations::setHashMap(HashMap<Object*, Object*>* hashMap) -> void{
this->hashMap= hashMap;
    
}




        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_CONFIGURATION_INPUTAUTOMATIONMODULECONFIGURATIONS_CPP

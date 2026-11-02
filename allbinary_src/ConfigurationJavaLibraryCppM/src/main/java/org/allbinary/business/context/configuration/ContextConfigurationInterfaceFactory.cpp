
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/context/configuration/ContextConfigurationInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/context/configuration/ContextConfigurationData.h"
#include "org/allbinary/business/context/configuration/ContextConfigurationView.h"
#include "org/allbinary/business/context/configuration/ContextConfigurationInterface.h"
#include "org/allbinary/business/context/configuration/ContextConfigurationPathUtil.h"

auto ContextConfigurationInterfaceFactory::instance_owner() -> ContextConfigurationInterfaceFactory* { static std::unique_ptr<ContextConfigurationInterfaceFactory> value(new ContextConfigurationInterfaceFactory()); return value.get(); }
ContextConfigurationInterfaceFactory* ContextConfigurationInterfaceFactory::instance = ContextConfigurationInterfaceFactory::instance_owner();

    auto ContextConfigurationInterfaceFactory::getInstance() -> ContextConfigurationInterfaceFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ContextConfigurationInterfaceFactory::instance;
    
}


ContextConfigurationInterfaceFactory::ContextConfigurationInterfaceFactory(){
}


                //@Throws(Exception.constructor)
            
    auto ContextConfigurationInterfaceFactory::getInstance(Document* document) -> ContextConfigurationInterface*{

    ContextConfigurationData* contextConfigurationData = ContextConfigurationData::getInstance();;
    

    Node* contextConfigurationNode = DomSearchHelper::getNode(contextConfigurationData->NAME, document->getChildNodes());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<ContextConfigurationInterface*>((new ContextConfigurationView(contextConfigurationNode))->getContextConfigurationInterface());
    
}


                //@Throws(Exception.constructor)
            
    auto ContextConfigurationInterfaceFactory::getInstance(std::string contextName) -> ContextConfigurationInterface*{

    AbPath* abPath = ContextConfigurationPathUtil::getAbPath(contextName);;
    

    ContextConfigurationData* contextConfigurationData = ContextConfigurationData::getInstance();;
    

    std::string documentString = (new CryptFileReader(contextConfigurationData->UNCRYPTED_EXTENSION, contextConfigurationData->ENCRYPTED_EXTENSION))->get(abPath);;
    

    Document* document = DomDocumentHelper::create(documentString);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getInstance(document);;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONINTERFACEFACTORY_CPP

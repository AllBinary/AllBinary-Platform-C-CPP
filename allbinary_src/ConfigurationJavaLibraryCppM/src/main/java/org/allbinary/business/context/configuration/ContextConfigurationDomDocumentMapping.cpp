
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONDOMDOCUMENTMAPPING_CPP
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONDOMDOCUMENTMAPPING_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/context/configuration/ContextConfigurationDomDocumentMapping.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/context/configuration/ContextConfigurationInterface.h"
#include "org/allbinary/business/context/configuration/ContextConfigurationView.h"


ContextConfigurationDomDocumentMapping::ContextConfigurationDomDocumentMapping(ContextConfigurationInterface* contextConfigurationInterface){
this->contextConfigurationInterface= contextConfigurationInterface;
    
}


                //@Throws(Exception.constructor)
            
    auto ContextConfigurationDomDocumentMapping::toXmlDoc() -> Document*{

    Document* document = DomDocumentHelper::create();;
    

    Node* node = (new ContextConfigurationView(this->contextConfigurationInterface))->toXmlNode(document);;
    
document->appendChild(node);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return document;
    
}


                //@Throws(Exception.constructor)
            
    auto ContextConfigurationDomDocumentMapping::toDomDocumentString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return XmlDocumentHelper::toString(this->toXmlDoc());;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONDOMDOCUMENTMAPPING_CPP


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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONDOMDOCUMENTMAPPING_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONDOMDOCUMENTMAPPING_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class DomDocumentHelper;
class XmlDocumentHelper;
#include <org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ContextConfigurationInterface;
class ContextConfigurationView;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ContextConfigurationDomDocumentMapping
            : public virtual Object
        , public virtual DomDocumentMappingInterface {

    private: ContextConfigurationInterface* contextConfigurationInterface;

public: ContextConfigurationDomDocumentMapping(ContextConfigurationInterface* contextConfigurationInterface);

                //@Throws(Exception.constructor)
            
    public: Document* toXmlDoc();

                //@Throws(Exception.constructor)
            
    public: std::string toDomDocumentString();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONDOMDOCUMENTMAPPING_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONDOMDOCUMENTMAPPING_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONDOMDOCUMENTMAPPING_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/XmlDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>)
#include <org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/context/configuration/ContextConfigurationInterface.h")
#include "org/allbinary/business/context/configuration/ContextConfigurationInterface.h"
#endif
#if __has_include("org/allbinary/business/context/configuration/ContextConfigurationView.h")
#include "org/allbinary/business/context/configuration/ContextConfigurationView.h"
#endif

        #endif
    

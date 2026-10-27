
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONVIEW_H
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class DomSearchHelper;
class EmailServerConfigurationData;
class EmailServerConfigurationInterface;
class EmailServerConfigurationView;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class ContextConfigurationInterface;
class ContextConfiguration;
class ContextConfigurationData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ContextConfigurationView
            : public virtual Object
        , public DomNodeInterface {

    private: ContextConfigurationInterface* contextConfigurationInterface;

public: ContextConfigurationView(Node* node);

public: ContextConfigurationView(ContextConfigurationInterface* contextConfigurationInterface);

    public: ContextConfigurationInterface* getContextConfigurationInterface();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONVIEW_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_CONTEXT_CONFIGURATION_CONTEXTCONFIGURATIONVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationData.h>)
#include <org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h>)
#include <org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationView.h>)
#include <org/allbinary/logic/communication/smtp/configuration/server/EmailServerConfigurationView.h>
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
#if __has_include("org/allbinary/business/context/configuration/ContextConfigurationInterface.h")
#include "org/allbinary/business/context/configuration/ContextConfigurationInterface.h"
#endif
#if __has_include("org/allbinary/business/context/configuration/ContextConfiguration.h")
#include "org/allbinary/business/context/configuration/ContextConfiguration.h"
#endif
#if __has_include("org/allbinary/business/context/configuration/ContextConfigurationData.h")
#include "org/allbinary/business/context/configuration/ContextConfigurationData.h"
#endif

        #endif
    

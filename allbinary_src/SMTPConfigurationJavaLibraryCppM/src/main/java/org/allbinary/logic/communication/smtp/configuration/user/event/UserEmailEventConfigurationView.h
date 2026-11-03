
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTCONFIGURATIONVIEW_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTCONFIGURATIONVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
class DomNodeHelper;
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class ModDomHelper;
class StdUtil;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class UserEmailEventConfigurationInterface;
class UserEmailEventConfigurationData;
class UserEmailEventConfiguration;
class UserEmailEventConfigurationMapping;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UserEmailEventConfigurationView
            : public virtual Object
        , public virtual DomNodeInterface {

    private: UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface;

public: UserEmailEventConfigurationView(Node* node);

public: UserEmailEventConfigurationView(UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface);

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

    public: UserEmailEventConfigurationInterface* getUserEmailEventConfigurationInterface();

    public: void setUserEmailEventConfigurationInterface(UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTCONFIGURATIONVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTCONFIGURATIONVIEW_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTCONFIGURATIONVIEW_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeHelper.h>)
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
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
#if __has_include("org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationInterface.h")
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationInterface.h"
#endif
#if __has_include("org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationData.h")
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationData.h"
#endif
#if __has_include("org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfiguration.h")
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfiguration.h"
#endif
#if __has_include("org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationMapping.h")
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationMapping.h"
#endif

        #endif
    

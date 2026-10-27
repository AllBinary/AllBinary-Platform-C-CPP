
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATIONVIEW_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATIONVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
#include <java/util/Set.h>
class BasicArrayList;

#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class DomSearchHelper;
class LogUtil;
class CommonStrings;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class UserEmailEventsConfigurationInterface;
class UserEmailEventsConfiguration;
class UserEmailEventConfigurationData;
class UserEmailEventConfigurationView;
class UserEmailEventsConfigurationMapping;
class UserEmailEventsConfigurationData;
class UserEmailEventConfigurationInterface;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UserEmailEventsConfigurationView
            : public virtual Object
        , public DomNodeInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface;

public: UserEmailEventsConfigurationView(Node* node);

public: UserEmailEventsConfigurationView(UserEmailEventsConfigurationInterface* userEmailEventsConfigurationInterface);

    public: UserEmailEventsConfigurationInterface* getUserEmailEventsConfigurationInterface();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATIONVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATIONVIEW_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATIONVIEW_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif

#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
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
#if __has_include("org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h")
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h"
#endif
#if __has_include("org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfiguration.h")
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfiguration.h"
#endif
#if __has_include("org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationData.h")
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationData.h"
#endif
#if __has_include("org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationView.h")
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationView.h"
#endif
#if __has_include("org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationMapping.h")
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationMapping.h"
#endif
#if __has_include("org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationData.h")
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationData.h"
#endif
#if __has_include("org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationInterface.h")
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationInterface.h"
#endif

        #endif
    

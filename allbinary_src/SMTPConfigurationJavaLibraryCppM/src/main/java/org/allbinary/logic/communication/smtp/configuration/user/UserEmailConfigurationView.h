
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_USEREMAILCONFIGURATIONVIEW_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_USEREMAILCONFIGURATIONVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class DomSearchHelper;
class ModDomHelper;
class LogUtil;
class UserEmailEventsConfigurationData;
class UserEmailEventsConfigurationInterface;
class UserEmailEventsConfigurationView;
class CommonStrings;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class UserEmailConfigurationInterface;
class UserEmailConfiguration;
class UserEmailConfigurationMapping;
class UserEmailConfigurationData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UserEmailConfigurationView
            : public virtual Object
        , public DomNodeInterface {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: UserEmailConfigurationInterface* userEmailConfigurationInterface;

public: UserEmailConfigurationView(Node* node);

public: UserEmailConfigurationView(UserEmailConfigurationInterface* userEmailConfigurationInterface);

    public: UserEmailConfigurationInterface* getEmailConfigurationInterface();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_USEREMAILCONFIGURATIONVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_USEREMAILCONFIGURATIONVIEW_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_USEREMAILCONFIGURATIONVIEW_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/ModDomHelper.h>)
#include <org/allbinary/data/tree/dom/ModDomHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationData.h>)
#include <org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h>)
#include <org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationView.h>)
#include <org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationView.h>
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
#if __has_include("org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h")
#include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h"
#endif
#if __has_include("org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfiguration.h")
#include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfiguration.h"
#endif
#if __has_include("org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationMapping.h")
#include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationMapping.h"
#endif
#if __has_include("org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationData.h")
#include "org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationData.h"
#endif

        #endif
    

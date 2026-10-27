
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONVIEW_H
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class EntryData;
class TimeCreatedView;
class TimeLastModifiedView;
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
class DomSearchHelper;
class UserEmailConfigurationData;
class UserEmailConfigurationInterface;
class UserEmailConfigurationView;
class Document;
class Node;
class NodeList;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class UserConfigurationInterface;
class UserConfiguration;
class UserConfigurationData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UserConfigurationView
            : public virtual Object
        , public DomNodeInterface {

    private: UserConfigurationInterface* userConfigurationInterface;

public: UserConfigurationView(Node* node);

public: UserConfigurationView(UserConfigurationInterface* userConfigurationInterface);

    public: UserConfigurationInterface* getUserConfigurationInterface();

                //@Throws(Exception.constructor)
            
    public: Node* toXmlNode(Document* document);

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONVIEW_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONVIEW_H_COMPLETE
        #if __has_include(<org/allbinary/business/entry/EntryData.h>)
#include <org/allbinary/business/entry/EntryData.h>
#endif
#if __has_include(<org/allbinary/business/time/created/TimeCreatedView.h>)
#include <org/allbinary/business/time/created/TimeCreatedView.h>
#endif
#if __has_include(<org/allbinary/business/time/modified/TimeLastModifiedView.h>)
#include <org/allbinary/business/time/modified/TimeLastModifiedView.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomNodeInterface.h>)
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationData.h>)
#include <org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationData.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h>)
#include <org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h>
#endif
#if __has_include(<org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationView.h>)
#include <org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationView.h>
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
#if __has_include("org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h")
#include "org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h"
#endif
#if __has_include("org/allbinary/business/user/modules/configuration/UserConfiguration.h")
#include "org/allbinary/business/user/modules/configuration/UserConfiguration.h"
#endif
#if __has_include("org/allbinary/business/user/modules/configuration/UserConfigurationData.h")
#include "org/allbinary/business/user/modules/configuration/UserConfigurationData.h"
#endif

        #endif
    

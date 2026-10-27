
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONINTERFACEFACTORY_H
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONINTERFACEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class UserRole;
class DomSearchHelper;
class DomDocumentHelper;
class FREEBLISKET_PATH_GLOBALS;
class URLGLOBALS;
class CryptFileReader;
class AbPath;
class AbPathData;
class Document;
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class UserConfigurationData;
class UserConfigurationView;
class UserConfigurationInterface;
class UserConfiguration;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UserConfigurationInterfaceFactory
            : public virtual Object
         {

    private: static inline const std::string configurationName = "DefaultUserConfiguration";

                //@Throws(Exception.constructor)
            
    public: static UserConfigurationInterface* getInstance(Document* document);

                //@Throws(Exception.constructor)
            
    public: static UserConfigurationInterface* getInstance(UserRole* userRole);

                //@Throws(Exception.constructor)
            
    public: static UserConfigurationInterface* getInstance();

private: UserConfigurationInterfaceFactory();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONINTERFACEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/business/user/role/UserRole.h>)
#include <org/allbinary/business/user/role/UserRole.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/DomSearchHelper.h>)
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>
#endif
#if __has_include(<org/allbinary/data/tree/dom/document/DomDocumentHelper.h>)
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>
#endif
#if __has_include(<org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>)
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>
#endif
#if __has_include(<org/allbinary/globals/URLGLOBALS.h>)
#include <org/allbinary/globals/URLGLOBALS.h>
#endif
#if __has_include(<org/allbinary/logic/control/crypt/file/CryptFileReader.h>)
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPath.h>)
#include <org/allbinary/logic/io/path/AbPath.h>
#endif
#if __has_include(<org/allbinary/logic/io/path/AbPathData.h>)
#include <org/allbinary/logic/io/path/AbPathData.h>
#endif
#if __has_include(<org/w3c/dom/Document.h>)
#include <org/w3c/dom/Document.h>
#endif
#if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/business/user/modules/configuration/UserConfigurationData.h")
#include "org/allbinary/business/user/modules/configuration/UserConfigurationData.h"
#endif
#if __has_include("org/allbinary/business/user/modules/configuration/UserConfigurationView.h")
#include "org/allbinary/business/user/modules/configuration/UserConfigurationView.h"
#endif
#if __has_include("org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h")
#include "org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h"
#endif
#if __has_include("org/allbinary/business/user/modules/configuration/UserConfiguration.h")
#include "org/allbinary/business/user/modules/configuration/UserConfiguration.h"
#endif

        #endif
    

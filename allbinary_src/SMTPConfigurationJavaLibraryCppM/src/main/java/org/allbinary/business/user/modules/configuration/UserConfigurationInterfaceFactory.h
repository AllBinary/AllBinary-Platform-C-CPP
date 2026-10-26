
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

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/business/user/role/UserRole.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/globals/FREEBLISKET_PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/control/crypt/file/CryptFileReader.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserConfigurationData.h"
#include "UserConfigurationView.h"
#include "UserConfigurationInterface.h"
#include "UserConfiguration.h"

class UserConfigurationInterfaceFactory
            : public Object
         {

    private: static const std::string configurationName = "DefaultUserConfiguration";

                //@Throws(Exception.constructor)
            
    public: static UserConfigurationInterface getInstance(Document document);

                //@Throws(Exception.constructor)
            
    public: static UserConfigurationInterface getInstance(UserRole userRole);

                //@Throws(Exception.constructor)
            
    public: static UserConfigurationInterface getInstance();

private: UserConfigurationInterfaceFactory();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONINTERFACEFACTORY_H

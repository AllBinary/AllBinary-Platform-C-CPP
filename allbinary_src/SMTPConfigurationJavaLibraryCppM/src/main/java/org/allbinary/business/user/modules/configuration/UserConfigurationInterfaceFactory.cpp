
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/business/user/modules/configuration/UserConfigurationData.h"
#include "org/allbinary/business/user/modules/configuration/UserConfigurationView.h"
#include "org/allbinary/business/user/modules/configuration/UserConfigurationInterface.h"
#include "org/allbinary/business/user/modules/configuration/UserConfiguration.h"

class UserConfigurationInterfaceFactory
            : public Object
         {

    private: static inline const std::string configurationName = "DefaultUserConfiguration";

                //@Throws(Exception.constructor)
            
    public: static UserConfigurationInterface* getInstance(Document* document){

    Node* configurationNode = DomSearchHelper::getNode(UserConfigurationData::NAME, document->getChildNodes());;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<UserConfigurationInterface*>((new UserConfigurationView(configurationNode))->getUserConfigurationInterface());
    
}


                //@Throws(Exception.constructor)
            
    public: static UserConfigurationInterface* getInstance(UserRole* userRole){

    AbPath* abPath = new AbPath(URLGLOBALS::getMainPath() +FREEBLISKET_PATH_GLOBALS::getInstance()->USERCONFIGURATIONPATH, UserConfigurationInterfaceFactory::configurationName +userRole->toString() +AbPathData::getInstance()->EXTENSION_SEP +UserConfigurationData::UNCRYPTED_EXTENSION);;
    

    std::string documentString = (new CryptFileReader(UserConfigurationData::UNCRYPTED_EXTENSION, UserConfigurationData::ENCRYPTED_EXTENSION))->get(abPath);;
    

    Document* document = DomDocumentHelper::create(documentString);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UserConfigurationInterfaceFactory::getInstance(document);;
    
}


                //@Throws(Exception.constructor)
            
    public: static UserConfigurationInterface* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new UserConfiguration();
    
}


private: UserConfigurationInterfaceFactory(){
}


};

            


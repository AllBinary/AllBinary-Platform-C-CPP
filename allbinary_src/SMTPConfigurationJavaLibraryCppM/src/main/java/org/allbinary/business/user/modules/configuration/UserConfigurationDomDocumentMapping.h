
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONDOMDOCUMENTMAPPING_H
        #define ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONDOMDOCUMENTMAPPING_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserConfigurationInterface.h"
#include "UserConfigurationView.h"

class UserConfigurationDomDocumentMapping
            : public Object
        : public DomDocumentMappingInterface {

    private: UserConfigurationInterface userConfigurationInterface;

public: UserConfigurationDomDocumentMapping(UserConfigurationInterface userConfigurationInterface);

                //@Throws(Exception.constructor)
            
    public: Document toXmlDoc();

                //@Throws(Exception.constructor)
            
    public: std::string toDomDocumentString();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_USER_MODULES_CONFIGURATION_USERCONFIGURATIONDOMDOCUMENTMAPPING_H

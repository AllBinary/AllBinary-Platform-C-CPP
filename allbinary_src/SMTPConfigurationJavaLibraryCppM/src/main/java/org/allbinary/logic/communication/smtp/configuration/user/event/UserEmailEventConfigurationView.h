
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

            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserEmailEventConfigurationInterface.h"
#include "UserEmailEventConfigurationData.h"
#include "UserEmailEventConfiguration.h"
#include "UserEmailEventConfigurationMapping.h"

class UserEmailEventConfigurationView
            : public Object
        : public DomNodeInterface {
        

    private: userEmailEventConfigurationInterface: UserEmailEventConfigurationInterface;

public constructor (Node node);

public constructor (UserEmailEventConfigurationInterface userEmailEventConfigurationInterface);

                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document);

    public UserEmailEventConfigurationInterface getUserEmailEventConfigurationInterface();

    public setUserEmailEventConfigurationInterface(UserEmailEventConfigurationInterface userEmailEventConfigurationInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTCONFIGURATIONVIEW_H

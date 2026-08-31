
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

            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserEmailEventsConfigurationInterface.h"
#include "UserEmailEventsConfiguration.h"
#include "UserEmailEventConfigurationData.h"
#include "UserEmailEventConfigurationView.h"
#include "UserEmailEventsConfigurationMapping.h"
#include "UserEmailEventsConfigurationData.h"
#include "UserEmailEventConfigurationInterface.h"

class UserEmailEventsConfigurationView
            : public Object
        : public DomNodeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: userEmailEventsConfigurationInterface: UserEmailEventsConfigurationInterface;

public constructor (Node node);

public constructor (UserEmailEventsConfigurationInterface userEmailEventsConfigurationInterface);

    public UserEmailEventsConfigurationInterface getUserEmailEventsConfigurationInterface();

                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document);

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_SMTP_CONFIGURATION_USER_EVENT_USEREMAILEVENTSCONFIGURATIONVIEW_H

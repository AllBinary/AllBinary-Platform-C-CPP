
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationData.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationInterface.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventsConfigurationView.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserEmailConfigurationInterface.h"
#include "UserEmailConfiguration.h"
#include "UserEmailConfigurationMapping.h"
#include "UserEmailConfigurationData.h"

class UserEmailConfigurationView
            : public Object
        : public DomNodeInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: userEmailConfigurationInterface: UserEmailConfigurationInterface;

public constructor (Node node){

            super();
        
                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.CONSTRUCTOR, this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                
this.userEmailConfigurationInterface= new UserEmailConfiguration() as UserEmailConfigurationInterface;
    

    childNodeList: NodeList = node.getChildNodes()!;;
    

    userEmailEventsConfigurationNode: Node = DomSearchHelper.getNodeNoThrow(UserEmailEventsConfigurationData.NAME, childNodeList)!;;
    

    userEmailEventsConfigurationView: UserEmailEventsConfigurationView = new UserEmailEventsConfigurationView(userEmailEventsConfigurationNode);;
    
this.userEmailConfigurationInterface!.setUserEmailEventsConfigurationInterface(userEmailEventsConfigurationView!.getUserEmailEventsConfigurationInterface());
    
}


public constructor (UserEmailConfigurationInterface userEmailConfigurationInterface){

            super();
        this.userEmailConfigurationInterface= userEmailConfigurationInterface;
    
}


    public UserEmailConfigurationInterface getEmailConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.userEmailConfigurationInterface;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    emailConfigurationMapping: UserEmailConfigurationMapping = new UserEmailConfigurationMapping(this.userEmailConfigurationInterface);;
    

    hashMap: HashMap<any, any> = emailConfigurationMapping!.toHashMap()!;;
    

    node: Node = ModDomHelper.createNameValueNodes(document, UserEmailConfigurationData.NAME, hashMap)!;;
    

    userEmailConfigurationInterface: UserEmailConfigurationInterface = this.getEmailConfigurationInterface()!;;
    

    userEmailEventsConfigurationInterface: UserEmailEventsConfigurationInterface = userEmailConfigurationInterface!.getUserEmailEventsConfigurationInterface()!;;
    

    userEmailEventsConfigurationView: UserEmailEventsConfigurationView = new UserEmailEventsConfigurationView(userEmailEventsConfigurationInterface);;
    
node.appendChild(userEmailEventsConfigurationView!.toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            


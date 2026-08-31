
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

public constructor (Node node){

            super();
        this.userEmailEventsConfigurationInterface= new UserEmailEventsConfiguration() as UserEmailEventsConfigurationInterface;
    

    childNodeList: NodeList = node.getChildNodes()!;;
    

    emailEventConfigurationNodeVector: Vector = DomSearchHelper.getAllNodesNoThrow(UserEmailEventConfigurationData.NAME, childNodeList)!;;
    

    size: int32_t = emailEventConfigurationNodeVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    userEmailConfigurationNode: Node = emailEventConfigurationNodeVector!.get(index) as Node;;
    

    userEmailEventConfigurationView: UserEmailEventConfigurationView = new UserEmailEventConfigurationView(userEmailConfigurationNode);;
    
this.userEmailEventsConfigurationInterface!.addUserEmailEventConfiguration(userEmailEventConfigurationView!.getUserEmailEventConfigurationInterface());
    
}

}


public constructor (UserEmailEventsConfigurationInterface userEmailEventsConfigurationInterface){

            super();
        this.userEmailEventsConfigurationInterface= userEmailEventsConfigurationInterface;
    
}


    public UserEmailEventsConfigurationInterface getUserEmailEventsConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.userEmailEventsConfigurationInterface;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    userEmailConfigurationMapping: UserEmailEventsConfigurationMapping = new UserEmailEventsConfigurationMapping(this.userEmailEventsConfigurationInterface);;
    

    node: Node = document.createElement(UserEmailEventsConfigurationData.NAME)!;;
    

    emailEventHashMap: HashMap<any, any> = this.getUserEmailEventsConfigurationInterface()!.getEventConfigurationHashMap()!;;
    

    set: Set = emailEventHashMap!.keys()!;;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGING))
                        
                                    {
                                    this.logUtil!.putF("Number Of Email Events Specified in file: " +set.size(), this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                

    eventNameArray: std::vector<any> = set.toArray()!;;
    

    size: int32_t = eventNameArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    eventName: string = eventNameArray[index]! as string;;
    

    userEmailEventsConfigurationInterface: UserEmailEventConfigurationInterface = emailEventHashMap!.get(eventName) as UserEmailEventConfigurationInterface;;
    

    userEmailEventConfigurationView: UserEmailEventConfigurationView = new UserEmailEventConfigurationView(userEmailEventsConfigurationInterface);;
    
node.appendChild(userEmailEventConfigurationView!.toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            


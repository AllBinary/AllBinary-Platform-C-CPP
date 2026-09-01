
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
        



            #include <vector>
        
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

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: UserEmailEventsConfigurationInterface userEmailEventsConfigurationInterface;

public: UserEmailEventsConfigurationView(Node node){
this->userEmailEventsConfigurationInterface= UserEmailEventsConfiguration() as UserEmailEventsConfigurationInterface;
    

    NodeList childNodeList = node.getChildNodes();;
    

    Vector emailEventConfigurationNodeVector = DomSearchHelper::getAllNodesNoThrow(UserEmailEventConfigurationData::NAME, childNodeList);;
    

    int32_t size = emailEventConfigurationNodeVector.length;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    Node userEmailConfigurationNode = emailEventConfigurationNodeVector.get(index) as Node;;
    

    UserEmailEventConfigurationView userEmailEventConfigurationView = UserEmailEventConfigurationView(userEmailConfigurationNode);;
    
this->userEmailEventsConfigurationInterface.addUserEmailEventConfiguration(userEmailEventConfigurationView.getUserEmailEventConfigurationInterface());
    
}

}


public: UserEmailEventsConfigurationView(UserEmailEventsConfigurationInterface userEmailEventsConfigurationInterface){
this->userEmailEventsConfigurationInterface= userEmailEventsConfigurationInterface;
    
}


    public: UserEmailEventsConfigurationInterface getUserEmailEventsConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userEmailEventsConfigurationInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    UserEmailEventsConfigurationMapping userEmailConfigurationMapping = UserEmailEventsConfigurationMapping(this->userEmailEventsConfigurationInterface);;
    

    Node node = document.createElement(UserEmailEventsConfigurationData::NAME);;
    

    HashMap<any, any> emailEventHashMap = this->getUserEmailEventsConfigurationInterface().getEventConfigurationHashMap();;
    

    Set set = emailEventHashMap.keys();;
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().EMAILLOGGING))
                        
                                    {
                                    this->logUtil.putF("Number Of Email Events Specified in file: " +set.size(), this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                

    std::vector<Object*> eventNameArray = set.toArray();;
    

    int32_t size = eventNameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string eventName = eventNameArray[index]! as string;;
    

    UserEmailEventConfigurationInterface userEmailEventsConfigurationInterface = emailEventHashMap.get(eventName) as UserEmailEventConfigurationInterface;;
    

    UserEmailEventConfigurationView userEmailEventConfigurationView = UserEmailEventConfigurationView(userEmailEventsConfigurationInterface);;
    
node.appendChild(userEmailEventConfigurationView.toXmlNode(document));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            


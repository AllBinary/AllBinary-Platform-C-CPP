
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

      
#include <org/allbinary/business/user/UserInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventListenerInterface.h>

      
#include <org/allbinary/logic/communication/smtp/event/UserEmailEventNameData.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserEmailEventsConfigurationInterface.h"
#include "UserEmailEventConfigurationInterface.h"
#include "UserEmailEventListenerFactory.h"

class UserEmailEventsConfiguration
            : public Object
        : public UserEmailEventsConfigurationInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: emailEventHashMap: HashMap<any, any>;

public constructor (){

            super();
        this.init();
    
}


public constructor (HashMap<any, any> hashMap){

            super();
        this.init();
    
}


    init(){
this.emailEventHashMap= new HashMap<any, any>();
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.CONSTRUCTOR, this, " Constructor");
    

                                    }
                                
}


    public HashMap<any, any> getEventConfigurationHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.emailEventHashMap;
    
}


    public addUserEmailEventConfiguration(UserEmailEventConfigurationInterface userEmailEventConfigurationInterface){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGING))
                        
                                    {
                                    this.logUtil!.putF("Adding: " +userEmailEventConfigurationInterface!.log(), this, "addUserEmailEventConfiguration");
    

                                    }
                                
this.emailEventHashMap!.put(userEmailEventConfigurationInterface!.getName(), userEmailEventConfigurationInterface);
    
}


                //@Throws(Exception.constructor)
            
    public UserEmailEventListenerInterface getEventListener(AbeClientInformationInterface abeClientInformation, UserEmailEventNameData userEmailEventNameData, UserInterface userInterface){

    userEmailEventConfigurationInterface: UserEmailEventConfigurationInterface = this.emailEventHashMap!.get(userEmailEventNameData!.toString()) as UserEmailEventConfigurationInterface;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UserEmailEventListenerFactory.getInstance(abeClientInformation, userEmailEventConfigurationInterface, userInterface);;
    
}


};

            


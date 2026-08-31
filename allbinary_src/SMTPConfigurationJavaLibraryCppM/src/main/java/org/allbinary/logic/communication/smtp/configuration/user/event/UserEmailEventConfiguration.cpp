
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
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserEmailEventConfigurationInterface.h"
#include "UserEmailEventConfigurationData.h"

class UserEmailEventConfiguration
            : public Object
        : public UserEmailEventConfigurationInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: name: string;

    private: eventListenerClassPath: string;

public constructor (){

            super();
        this.setName(StringUtil.getInstance()!.EMPTY_STRING);
    
this.setEventListenerClassPath(StringUtil.getInstance()!.EMPTY_STRING);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGING))
                        
                                    {
                                    this.logUtil!.putF("New", this, " Constructor");
    

                                    }
                                
}


public constructor (HashMap<any, any> hashMap){

            super();
        this.setName(hashMap!.get(UserEmailEventConfigurationData.NAME) as string);
    
this.setEventListenerClassPath(hashMap!.get(UserEmailEventConfigurationData.LISTENER_CLASSPATH) as string);
    

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.EMAILLOGGING))
                        
                                    {
                                    this.logUtil!.putF("Log: " +this.log(), this, " Constructor");
    

                                    }
                                
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public setName(string name){
this.name= name;
    
}


    public string getEventListenerClassPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.eventListenerClassPath;
    
}


    public setEventListenerClassPath(string eventListenerClassPath){
this.eventListenerClassPath= eventListenerClassPath;
    
}


    public string log(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "\nUser Email Event Log Info:" +"\nName: " +this.getName() +"\nEventListenerClassPath: " +this.getEventListenerClassPath();
    
}


};

            


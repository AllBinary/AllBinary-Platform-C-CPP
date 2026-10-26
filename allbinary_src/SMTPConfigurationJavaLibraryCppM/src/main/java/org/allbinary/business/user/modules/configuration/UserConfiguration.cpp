
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
        



            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/time/created/TimeCreated.h>

      
#include <org/allbinary/business/time/modified/TimeLastModified.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfiguration.h>

      
#include <org/allbinary/logic/communication/smtp/configuration/user/UserEmailConfigurationInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserConfigurationInterface.h"

class UserConfiguration
            : public Object
        : public UserConfigurationInterface {

    private: UserEmailConfigurationInterface userEmailConfigurationInterface;

    private: TimeCreated timeCreated;

    private: TimeLastModified timeLastModified;

public: UserConfiguration(){
this->userEmailConfigurationInterface= UserEmailConfiguration();
    
this->timeCreated= TimeCreated(0);
    
this->timeLastModified= TimeLastModified(0);
    
}


public: UserConfiguration(HashMap<Object*, Object*> hashMap){
this->userEmailConfigurationInterface= UserEmailConfiguration(hashMap);
    
this->timeCreated= TimeCreated(hashMap.get(EntryData::getInstance().TIMECREATED));
    
this->timeLastModified= TimeLastModified(hashMap.get(EntryData::getInstance().LASTMODIFIED));
    
}


    public: UserEmailConfigurationInterface getUserEmailConfigurationInterface(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userEmailConfigurationInterface;
    
}


    public: void setUserEmailConfigurationInterface(UserEmailConfigurationInterface userEmailConfigurationInterface){
this->userEmailConfigurationInterface= userEmailConfigurationInterface;
    
}


    public: TimeCreated getTimeCreated(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeCreated;
    
}


    public: TimeLastModified getTimeLastModified(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeLastModified;
    
}


    public: void setTimeCreated(TimeCreated timeCreated){
this->timeCreated= timeCreated;
    
}


    public: void setTimeLastModified(TimeLastModified timeLastModified){
this->timeLastModified= timeLastModified;
    
}


};

            


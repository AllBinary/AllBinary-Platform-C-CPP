
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
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationInterface.h"
#include "org/allbinary/logic/communication/smtp/configuration/user/event/UserEmailEventConfigurationData.h"

class UserEmailEventConfigurationMapping
            : public Object
        , public TableMappingInterface {

    private: UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface;

public: UserEmailEventConfigurationMapping(UserEmailEventConfigurationInterface* userEmailEventConfigurationInterface){
this->userEmailEventConfigurationInterface= userEmailEventConfigurationInterface;
    
}


    public: HashMap<Object*, Object*>* toHashMap(){

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(UserEmailEventConfigurationData::NAME, this->userEmailEventConfigurationInterface->getName());
    
hashMap->put(UserEmailEventConfigurationData::LISTENER_CLASSPATH, this->userEmailEventConfigurationInterface->getEventListenerClassPath());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UserEmailEventConfigurationData::NAME;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList* toVector(){

    BasicArrayList* vector = new BasicArrayListD();;
    
vector->add(this->userEmailEventConfigurationInterface->getName());
    
vector->add(this->userEmailEventConfigurationInterface->getEventListenerClassPath());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


};

            


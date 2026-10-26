
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
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserEmailConfigurationInterface.h"
#include "UserEmailConfigurationData.h"

class UserEmailConfigurationMapping
            : public Object
        : public TableMappingInterface {

    private: UserEmailConfigurationInterface userEmailConfigurationInterface;

public: UserEmailConfigurationMapping(UserEmailConfigurationInterface userEmailConfigurationInterface){
this->userEmailConfigurationInterface= userEmailConfigurationInterface;
    
}


    public: HashMap<Object*, Object*> toHashMap(){

    HashMap<Object*, Object*> hashMap = StdUtil::getInstance().createHashMap();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UserEmailConfigurationData::NAME;
    
}


                //@Throws(Exception.constructor)
            
    public: BasicArrayList toVector(){

    BasicArrayList vector = BasicArrayListD();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


};

            


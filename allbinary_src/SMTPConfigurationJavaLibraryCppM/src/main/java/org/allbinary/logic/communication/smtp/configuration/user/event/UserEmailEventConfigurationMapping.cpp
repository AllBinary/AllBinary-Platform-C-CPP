
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

      
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UserEmailEventConfigurationInterface.h"
#include "UserEmailEventConfigurationData.h"

class UserEmailEventConfigurationMapping
            : public Object
        : public TableMappingInterface {
        

    private: userEmailEventConfigurationInterface: UserEmailEventConfigurationInterface;

public constructor (UserEmailEventConfigurationInterface userEmailEventConfigurationInterface){

            super();
        this.userEmailEventConfigurationInterface= userEmailEventConfigurationInterface;
    
}


    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(UserEmailEventConfigurationData.NAME, this.userEmailEventConfigurationInterface!.getName());
    
hashMap!.put(UserEmailEventConfigurationData.LISTENER_CLASSPATH, this.userEmailEventConfigurationInterface!.getEventListenerClassPath());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public any getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return UserEmailEventConfigurationData.NAME;
    
}


                //@Throws(Exception.constructor)
            
    public Vector toVector(){

    vector: Vector = new Vector();;
    
vector.add(this.userEmailEventConfigurationInterface!.getName());
    
vector.add(this.userEmailEventConfigurationInterface!.getEventListenerClassPath());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


};

            


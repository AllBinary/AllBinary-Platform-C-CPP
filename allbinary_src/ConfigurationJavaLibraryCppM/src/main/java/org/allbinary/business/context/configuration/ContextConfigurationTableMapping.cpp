
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/data/tables/TableMappingInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ContextConfigurationInterface.h"
#include "ContextConfigurationData.h"

class ContextConfigurationTableMapping
            : public Object
        : public TableMappingInterface {

    private: ContextConfigurationInterface contextConfigurationInterface;

public: ContextConfigurationTableMapping(ContextConfigurationInterface contextConfigurationInterface){
this->contextConfigurationInterface= contextConfigurationInterface;
    
}


    public: HashMap<any, any> toHashMap(){

    HashMap<any, any> hashMap = HashMap<any, any>();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ContextConfigurationData::getInstance().NAME;
    
}


                //@Throws(Exception.constructor)
            
    public: Vector toVector(){

    Vector vector = Vector();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


};

            


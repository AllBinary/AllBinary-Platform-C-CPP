
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_J2SEUTIL_CPP
        #define ORG_ALLBINARY_J2SEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/J2SEUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Map.h>

      
#include <java/util/Set.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //J2SEForJ2ME

J2SEUtil::J2SEUtil() {
        }
        auto J2SEUtil::instance_owner() -> J2SEUtil* { static std::unique_ptr<J2SEUtil> value(new J2SEUtil()); return value.get(); }
J2SEUtil* J2SEUtil::instance = J2SEUtil::instance_owner();

    auto J2SEUtil::getInstance() -> J2SEUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2SEUtil::instance;
    
}


    auto J2SEUtil::getHashMapAsArray(HashMap<Object*, Object*>* hashMap) -> std::vector<Object*>{

    std::vector<Object*> objectArray = hashMap->keys().();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return objectArray;
    
}


    auto J2SEUtil::getMapAsArray(Map<Object*, Object*>* map) -> std::vector<Object*>{

    std::vector<Object*> objectArray = map->keySet()->();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return objectArray;
    
}


    auto J2SEUtil::getSetAsArray(Set<std::string>* set) -> std::vector<Object*>{

    std::vector<Object*> objectArray = set->toArray();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return objectArray;
    
}




        #endif //ORG_ALLBINARY_J2SEUTIL_CPP

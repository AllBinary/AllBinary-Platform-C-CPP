
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
        



            #include <vector>
        
            #include "../../java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Map.h>

      
#include <java/util/Set.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ArkTs does not have this.  So this is for the ArkTs build.
class J2SEUtil
            : public Object
         {

    private: static J2SEUtil instance() { return J2SEUtil(); }

    public: static J2SEUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2SEUtil::instance();
    
}


    public: std::vector<Object*> getHashMapAsArray(HashMap<any, any> hashMap){

    std::vector<Object*> objectArray = hashMap.keys().();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return objectArray;
    
}


    public: std::vector<Object*> getMapAsArray(Map<any, any> map){

    std::vector<Object*> objectArray = map.keySet().();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return objectArray;
    
}


    public: std::vector<Object*> getSetAsArray(Set<string> set){

    std::vector<Object*> objectArray = set.toArray();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return objectArray;
    
}


};

            



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
        



            #include "../../java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Map.h>

      
#include <java/util/Set.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ArkTs does not have this.  So this is for the ArkTs build.
class J2SEUtil
            : public Object
         {
        

    private: static const instance: J2SEUtil = new J2SEUtil();

    public static J2SEUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return J2SEUtil.instance;
    
}


    public std::vector<any> getHashMapAsArray(HashMap<any, any> hashMap){

    objectArray: std::vector<any> = hashMap!.keys().()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return objectArray;
    
}


    public std::vector<any> getMapAsArray(Map<any, any> map){

    objectArray: std::vector<any> = map.keySet()!.()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return objectArray;
    
}


    public std::vector<any> getSetAsArray(Set<string> set){

    objectArray: std::vector<any> = set.toArray()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return objectArray;
    
}


};

            


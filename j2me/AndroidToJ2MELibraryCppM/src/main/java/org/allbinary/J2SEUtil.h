
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
        



        #ifndef ORG_ALLBINARY_J2SEUTIL_H
        #define ORG_ALLBINARY_J2SEUTIL_H

            #include <vector>
        
            #include "../../java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Map.h>

      
#include <java/util/Set.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //AndroidToJ2ME
class J2SEUtil
            : public Object
         {

    private: static J2SEUtil instance() { return J2SEUtil(); }

    public: static J2SEUtil getInstance();

    public: std::vector<Object*> getHashMapAsArray(HashMap<any, any> hashMap);

    public: std::vector<Object*> getMapAsArray(Map<any, any> map);

    public: std::vector<Object*> getSetAsArray(Set<string> set);

};

            


        #endif //ORG_ALLBINARY_J2SEUTIL_H

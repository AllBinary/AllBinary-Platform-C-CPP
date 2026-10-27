
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
class J2SEUtil
            : public Object
         {

    private: static J2SEUtil* instance() { static std::unique_ptr<J2SEUtil> value(new J2SEUtil()); return value.get(); }

    public: static J2SEUtil* getInstance();

    public: std::vector<Object*> getHashMapAsArray(HashMap<Object*, Object*>* hashMap);

    public: std::vector<Object*> getMapAsArray(Map<Object*, Object*>* map);

    public: std::vector<Object*> getSetAsArray(Set<std::string>* set);

};

            


        #endif //ORG_ALLBINARY_J2SEUTIL_H

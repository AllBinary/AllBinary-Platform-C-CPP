
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

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
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //J2SEForJ2ME
class J2SEUtil
            : public virtual Object
         {

    private: static J2SEUtil* instance_owner();
    private: static J2SEUtil* instance;

    public: static J2SEUtil* getInstance();


            
    public: J2SEUtil();
        
    public: std::vector<Object*> getHashMapAsArray(HashMap<Object*, Object*>* hashMap);

    public: std::vector<Object*> getMapAsArray(Map<Object*, Object*>* map);

    public: std::vector<Object*> getSetAsArray(Set<std::string>* set);

};

            


        #endif //ORG_ALLBINARY_J2SEUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_J2SEUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_J2SEUTIL_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<java/util/Map.h>)
#include <java/util/Map.h>
#endif
#if __has_include(<java/util/Set.h>)
#include <java/util/Set.h>
#endif

        #endif
    


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
        



        #ifndef ORG_PLATFORM_THREEDOBJRESOURCES_H
        #define ORG_PLATFORM_THREEDOBJRESOURCES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StdUtil;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ThreedObjResources
            : public virtual Object
         {

    private: static ThreedObjResources* instance_owner();
    private: static ThreedObjResources* instance;

    public: static ThreedObjResources* getInstance();


            
    public: ThreedObjResources();
        
    public: ABHashtable<Object*, Object*>* hashtable;

    public: std::string get(std::string resourceName);

};

            


        #endif //ORG_PLATFORM_THREEDOBJRESOURCES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_PLATFORM_THREEDOBJRESOURCES_H_COMPLETE)
        #define ORG_PLATFORM_THREEDOBJRESOURCES_H_COMPLETE
        #if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif

        #endif
    

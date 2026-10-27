
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_PLATFORMASSETMANAGER_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_PLATFORMASSETMANAGER_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>
class ResourceUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class PlatformAssetManager
            : public virtual Object
         {

    private: static PlatformAssetManager* instance_owner();
    private: static PlatformAssetManager* instance;

    public: static PlatformAssetManager* getInstance();


            
    public: PlatformAssetManager();
        
                //@Throws(Exception.constructor)
            
    public: InputStream* getResourceAsStream(std::string resource);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_PLATFORMASSETMANAGER_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_PLATFORMASSETMANAGER_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_PLATFORMASSETMANAGER_H_COMPLETE
        #if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<org/allbinary/data/resource/ResourceUtil.h>)
#include <org/allbinary/data/resource/ResourceUtil.h>
#endif

        #endif
    

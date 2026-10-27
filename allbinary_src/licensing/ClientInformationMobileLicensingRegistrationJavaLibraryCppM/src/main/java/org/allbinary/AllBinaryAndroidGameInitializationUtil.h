
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
        



        #ifndef ORG_ALLBINARY_ALLBINARYANDROIDGAMEINITIALIZATIONUTIL_H
        #define ORG_ALLBINARY_ALLBINARYANDROIDGAMEINITIALIZATIONUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
class LicenseInitInfoUtil;
class ResourceUtil;
class PartnerIdentifierFileUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class AndroidResources;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AllBinaryAndroidGameInitializationUtil
            : public virtual Object
         {

    public: static void init();


            
    public: AllBinaryAndroidGameInitializationUtil();
        
};

            


        #endif //ORG_ALLBINARY_ALLBINARYANDROIDGAMEINITIALIZATIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_ALLBINARYANDROIDGAMEINITIALIZATIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_ALLBINARYANDROIDGAMEINITIALIZATIONUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/business/init/LicenseInitInfoUtil.h>)
#include <org/allbinary/business/init/LicenseInitInfoUtil.h>
#endif
#if __has_include(<org/allbinary/data/resource/ResourceUtil.h>)
#include <org/allbinary/data/resource/ResourceUtil.h>
#endif
#if __has_include(<org/allbinary/logic/system/security/licensing/PartnerIdentifierFileUtil.h>)
#include <org/allbinary/logic/system/security/licensing/PartnerIdentifierFileUtil.h>
#endif
#if __has_include("org/allbinary/AndroidResources.h")
#include "org/allbinary/AndroidResources.h"
#endif

        #endif
    

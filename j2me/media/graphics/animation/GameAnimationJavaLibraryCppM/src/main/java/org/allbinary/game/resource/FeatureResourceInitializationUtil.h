
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
        



        #ifndef ORG_ALLBINARY_GAME_RESOURCE_FEATURERESOURCEINITIALIZATIONUTIL_H
        #define ORG_ALLBINARY_GAME_RESOURCE_FEATURERESOURCEINITIALIZATIONUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class FeaturedAnimationInterfaceFactoryInterfaceFactory;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class FeaturedResourceFactory;
class FeaturedResourceRelativeRelationshipFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FeatureResourceInitializationUtil
            : public virtual Object
         {

    private: static FeatureResourceInitializationUtil* instance_owner();
    private: static FeatureResourceInitializationUtil* instance;

    public: static FeatureResourceInitializationUtil* getInstance();


            
    public: FeatureResourceInitializationUtil();
        
    /*protected*/ public: LogUtil* logUtil;

                //@Throws(Exception.constructor)
            
    public: void init(int32_t level);

};

            


        #endif //ORG_ALLBINARY_GAME_RESOURCE_FEATURERESOURCEINITIALIZATIONUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_RESOURCE_FEATURERESOURCEINITIALIZATIONUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_RESOURCE_FEATURERESOURCEINITIALIZATIONUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>)
#include <org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/game/resource/FeaturedResourceFactory.h")
#include "org/allbinary/game/resource/FeaturedResourceFactory.h"
#endif
#if __has_include("org/allbinary/game/resource/FeaturedResourceRelativeRelationshipFactory.h")
#include "org/allbinary/game/resource/FeaturedResourceRelativeRelationshipFactory.h"
#endif

        #endif
    

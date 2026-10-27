
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
        



        #ifndef ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDRESOURCES_H
        #define ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDRESOURCES_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BaseResourceAnimationInterfaceFactoryInterfaceFactory;
class ImageCache;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class OnDemandResources
            : public virtual Object
         {

    private: static OnDemandResources* NULL_ON_DEMAND_RESOURCES_owner();
    public: static OnDemandResources* NULL_ON_DEMAND_RESOURCES;

    /*protected*/ public: LogUtil* logUtil;

/*protected*/ public: OnDemandResources();

                //@Throws(Exception.constructor)
            
    public: void waitFor();

                //@Throws(Exception.constructor)
            
    public: void init();

                //@Throws(Exception.constructor)
            
    public: int32_t initAt(ImageCache* imageCache, BaseResourceAnimationInterfaceFactoryInterfaceFactory* resourceAnimationInterfaceFactoryInterfaceFactory, int32_t portion, std::string loadingString, int32_t index);

};

            


        #endif //ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDRESOURCES_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDRESOURCES_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_LAYER_RESOURCES_ONDEMANDRESOURCES_H_COMPLETE
        #if __has_include(<org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h>)
#include <org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/image/ImageCache.h>)
#include <org/allbinary/image/ImageCache.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif

        #endif
    

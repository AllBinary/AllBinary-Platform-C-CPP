
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h>
class Features;
class ResourceLoadingLevelFactory;
class OpenGLFeatureFactory;
class ImageCache;
class ImageCacheFactory;
class StdUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory: public BaseResourceAnimationInterfaceFactoryInterfaceFactory {

    public: static TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* createFactory();

public: TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory(std::string name);

                //@Throws(Exception.constructor)
            
    public: void init(int32_t level);

                //@Throws(Exception.constructor)
            
    /*protected*/ public: void initImageCache(ImageCache* imageCache, int32_t level);

    public: bool isLoadingLevel(int32_t level);

    public: bool isFeature();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h>)
#include <org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/resource/ResourceLoadingLevelFactory.h>)
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>)
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/image/ImageCache.h>)
#include <org/allbinary/image/ImageCache.h>
#endif
#if __has_include(<org/allbinary/image/ImageCacheFactory.h>)
#include <org/allbinary/image/ImageCacheFactory.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif

        #endif
    

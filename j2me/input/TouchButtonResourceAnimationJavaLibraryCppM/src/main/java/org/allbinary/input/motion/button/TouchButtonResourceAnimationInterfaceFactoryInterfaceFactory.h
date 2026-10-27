
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
        
class Image;
class AnimationBehaviorFactory;
class NullAnimationFactory;
class OneRowSpriteIndexedAnimationFactory;
#include <org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h>
class Features;
class ResourceLoadingLevelFactory;
class ProgressCanvas;
class ProgressCanvasFactory;
class OpenGLFeatureFactory;
class ImageCache;
class ImageCacheFactory;
class StdUtil;
class StringMaker;
class OperatingSystemFactory;
class ImageCompleteUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class TouchButtonBlankResource;
class TouchButtonResource;
class TouchButtonGenericActionResource;
class TouchButtonStartResource;
class TouchButtonUpResource;
class TouchButtonDownResource;
class TouchButtonTurnLeftResource;
class TouchButtonTurnRightResource;
class TouchButtonStrafeLeftResource;
class TouchButtonStrafeRightResource;

                                
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
        #if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<org/allbinary/animation/AnimationBehaviorFactory.h>)
#include <org/allbinary/animation/AnimationBehaviorFactory.h>
#endif
#if __has_include(<org/allbinary/animation/NullAnimationFactory.h>)
#include <org/allbinary/animation/NullAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/animation/image/sprite/OneRowSpriteIndexedAnimationFactory.h>)
#include <org/allbinary/animation/image/sprite/OneRowSpriteIndexedAnimationFactory.h>
#endif
#if __has_include(<org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h>)
#include <org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h>
#endif
#if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/game/resource/ResourceLoadingLevelFactory.h>)
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>
#endif
#if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvas.h>
#endif
#if __has_include(<org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>)
#include <org/allbinary/graphics/canvas/transition/progress/ProgressCanvasFactory.h>
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
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/os/OperatingSystemFactory.h>)
#include <org/allbinary/logic/system/os/OperatingSystemFactory.h>
#endif
#if __has_include(<org/allbinary/media/image/ImageCompleteUtil.h>)
#include <org/allbinary/media/image/ImageCompleteUtil.h>
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonBlankResource.h")
#include "org/allbinary/input/motion/button/TouchButtonBlankResource.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonResource.h")
#include "org/allbinary/input/motion/button/TouchButtonResource.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonGenericActionResource.h")
#include "org/allbinary/input/motion/button/TouchButtonGenericActionResource.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonStartResource.h")
#include "org/allbinary/input/motion/button/TouchButtonStartResource.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonUpResource.h")
#include "org/allbinary/input/motion/button/TouchButtonUpResource.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonDownResource.h")
#include "org/allbinary/input/motion/button/TouchButtonDownResource.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonTurnLeftResource.h")
#include "org/allbinary/input/motion/button/TouchButtonTurnLeftResource.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonTurnRightResource.h")
#include "org/allbinary/input/motion/button/TouchButtonTurnRightResource.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonStrafeLeftResource.h")
#include "org/allbinary/input/motion/button/TouchButtonStrafeLeftResource.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonStrafeRightResource.h")
#include "org/allbinary/input/motion/button/TouchButtonStrafeRightResource.h"
#endif

        #endif
    

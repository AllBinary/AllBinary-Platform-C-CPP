
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCEOPENGLESANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCEOPENGLESANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class Features;
class OpenGLFeatureFactory;
class OpenGLImageCacheFactory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/input/motion/button/TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory: public TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory {

public: TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory();

                //@Throws(Exception.constructor)
            
    public: void init(int32_t level);

    public: bool isFeature();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCEOPENGLESANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCEOPENGLESANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONRESOURCEOPENGLESANIMATIONINTERFACEFACTORYINTERFACEFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/game/configuration/feature/Features.h>)
#include <org/allbinary/game/configuration/feature/Features.h>
#endif
#if __has_include(<org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>)
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>
#endif
#if __has_include(<org/allbinary/image/opengles/OpenGLImageCacheFactory.h>)
#include <org/allbinary/image/opengles/OpenGLImageCacheFactory.h>
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory.h")
#include "org/allbinary/input/motion/button/TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory.h"
#endif

        #endif
    

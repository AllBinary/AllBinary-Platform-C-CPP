
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
        



        #ifndef ORG_ALLBINARY_GAME_HEALTH_HEALTHBARTHREEDANIMATION_H
        #define ORG_ALLBINARY_GAME_HEALTH_HEALTHBARTHREEDANIMATION_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
class GL10;
class Graphics;
class ColorBufferList;
class Number3dBufferList;
class Rectangle;
class Number3d;
class OpenGLESGraphics;
class Object3dProcessor;
class Object3dProcessorUtil;
class BasicColorFactory;
class AllBinaryLayer;
class ViewPositionBase;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/health/HealthBarAnimation.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class HealthBarThreedAnimation: public HealthBarAnimation {

    private: Rectangle* rectangle;

    private: BasicColorFactory* basicColorFactory;

public: HealthBarThreedAnimation(AllBinaryLayer* layerInterface, int32_t location);

    private: void updateColor();

    private: void updateSize();

    public: void onHealthChange(int32_t newX2);

    private: Object3dProcessor* object3dProcessor;

    public: void paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z);

};

            


        #endif //ORG_ALLBINARY_GAME_HEALTH_HEALTHBARTHREEDANIMATION_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_HEALTH_HEALTHBARTHREEDANIMATION_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_HEALTH_HEALTHBARTHREEDANIMATION_H_COMPLETE
        #if __has_include(<javax/microedition/khronos/opengles/GL10.h>)
#include <javax/microedition/khronos/opengles/GL10.h>
#endif
#if __has_include(<javax/microedition/lcdui/Graphics.h>)
#include <javax/microedition/lcdui/Graphics.h>
#endif
#if __has_include(<min3d/core/ColorBufferList.h>)
#include <min3d/core/ColorBufferList.h>
#endif
#if __has_include(<min3d/core/Number3dBufferList.h>)
#include <min3d/core/Number3dBufferList.h>
#endif
#if __has_include(<min3d/objectPrimitives/Rectangle.h>)
#include <min3d/objectPrimitives/Rectangle.h>
#endif
#if __has_include(<min3d/vos/Number3d.h>)
#include <min3d/vos/Number3d.h>
#endif
#if __has_include(<org/allbinary/device/OpenGLESGraphics.h>)
#include <org/allbinary/device/OpenGLESGraphics.h>
#endif
#if __has_include(<org/allbinary/graphics/threed/min3d/renderer/Object3dProcessor.h>)
#include <org/allbinary/graphics/threed/min3d/renderer/Object3dProcessor.h>
#endif
#if __has_include(<org/allbinary/graphics/threed/min3d/renderer/Object3dProcessorUtil.h>)
#include <org/allbinary/graphics/threed/min3d/renderer/Object3dProcessorUtil.h>
#endif
#if __has_include(<org/allbinary/graphics/color/BasicColorFactory.h>)
#include <org/allbinary/graphics/color/BasicColorFactory.h>
#endif
#if __has_include(<org/allbinary/layer/AllBinaryLayer.h>)
#include <org/allbinary/layer/AllBinaryLayer.h>
#endif
#if __has_include(<org/allbinary/view/ViewPositionBase.h>)
#include <org/allbinary/view/ViewPositionBase.h>
#endif
#if __has_include("org/allbinary/game/health/HealthBarAnimation.h")
#include "org/allbinary/game/health/HealthBarAnimation.h"
#endif

        #endif
    

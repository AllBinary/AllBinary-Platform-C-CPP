
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL10.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <min3d/core/ColorBufferList.h>

      
#include <min3d/core/Number3dBufferList.h>

      
#include <min3d/objectPrimitives/Rectangle.h>

      
#include <min3d/vos/Number3d.h>

      
#include <org/allbinary/device/OpenGLESGraphics.h>

      
#include <org/allbinary/graphics/threed/min3d/renderer/Object3dProcessor.h>

      
#include <org/allbinary/graphics/threed/min3d/renderer/Object3dProcessorUtil.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/health/HealthBarAnimation.h"

class HealthBarThreedAnimation: public HealthBarAnimation {

    private: Rectangle* rectangle;

    private: BasicColorFactory* basicColorFactory = BasicColorFactory::getInstance();

public: HealthBarThreedAnimation(AllBinaryLayer* layerInterface, int32_t location);

    private: void updateColor();

    private: void updateSize();

    public: void onHealthChange(int32_t newX2);

    private: Object3dProcessor* object3dProcessor = Object3dProcessorUtil::getInstance()->getInstanceObject3dProcessor();

    public: void paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z);

};

            


        #endif //ORG_ALLBINARY_GAME_HEALTH_HEALTHBARTHREEDANIMATION_H

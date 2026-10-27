
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
        



        #ifndef ORG_ALLBINARY_GAME_HEALTH_HEALTHBARTHREEDANIMATION_CPP
        #define ORG_ALLBINARY_GAME_HEALTH_HEALTHBARTHREEDANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/health/HealthBarThreedAnimation.h"
        

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


HealthBarThreedAnimation::HealthBarThreedAnimation(AllBinaryLayer* layerInterface, int32_t location) : HealthBarAnimation(layerInterface, location), basicColorFactory(BasicColorFactory::getInstance()), object3dProcessor(Object3dProcessorUtil::getInstance()->getInstanceObject3dProcessor()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->basicColor= this->basicColorFactory->GREEN;
    
this->colorP= this->basicColor->intValue();
    
this->rectangle= new Rectangle(0, 0, 1, 1, this->basicColor);
    
this->rectangle->setDoubleSidedEnabled(true);
    
this->rectangle->setNormalsEnabled(false);
    
this->rectangle->setTexturesEnabled(false);
    
}


    auto HealthBarThreedAnimation::updateColor() -> void{

    ColorBufferList* colorBufferList = this->rectangle->getVertices()->getColor4BufferList();;
    

    int32_t size = colorBufferList->size();;
    




                        for (
    int32_t index = size;--index >= 0; )
        {
colorBufferList->set(index, this->basicColor);
    
}

}


    auto HealthBarThreedAnimation::updateSize() -> void{

    Number3dBufferList* number3dBufferList = this->rectangle->getVertices()->getPointsOnFacesNumber3dBufferList();;
    

    int32_t width = this->x2;;
    

    int32_t height = this->thickness *2;;
    

    int32_t segsH = 1;;
    

    int32_t segsW = 1;;
    

    int32_t row= 0;;
    

    int32_t col= 0;;
    

    float w = width /segsW;;
    

    float h = height /segsH;;
    

    float width5 = width /2;;
    

    float height5 = height /2;;
    

    int32_t index = 0;;
    




                        for (
    row= 0; row <= segsH; row++)
        {




                        for (
    col= 0; col <= segsW; col++)
        {
number3dBufferList->set(index++, col *w -width5, row *h -height5, 0);
    
}

}

}


    auto HealthBarThreedAnimation::onHealthChange(int32_t newX2) -> void{
HealthBarAnimation::onHealthChange(newX2);
    
this->updateColor();
    
this->updateSize();
    
}


    auto HealthBarThreedAnimation::paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z) -> void{

    OpenGLESGraphics* openGLESGraphics = dynamic_cast<OpenGLESGraphics*>(graphics);;
    

    GL10* gl = openGLESGraphics->getGl10();;
    

    ViewPositionBase* viewPosition = this->allbinaryLayer->getViewPosition();;
    

    Number3d* positionNumber3d = this->rectangle->getPosition();;
    
positionNumber3d->x=  -(viewPosition->getX());
    
positionNumber3d->z=  -(viewPosition->getY());
    
positionNumber3d->y= viewPosition->getZ() +this->allbinaryLayer->getHeight();
    
this->object3dProcessor->drawObject(gl, this->rectangle);
    
}




        #endif //ORG_ALLBINARY_GAME_HEALTH_HEALTHBARTHREEDANIMATION_CPP

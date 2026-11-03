
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_ANIMATION_CPP
        #define ORG_ALLBINARY_ANIMATION_ANIMATION_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/Animation.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/khronos/opengles/GL.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>

      
#include <org/allbinary/image/opengles/OpenGLSurfaceChangedInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/AnimationInterface.h"


Animation::Animation() : basicSetColorUtil(BasicColorSetUtil::getInstance()), basicColor(BasicColorFactory::getInstance()->WHITE), changeBasicColorP(BasicColorFactory::getInstance()->NULL_COLOR){
}


    auto Animation::setAlpha(int32_t alpha) -> void{
this->alphaP= alpha;
    
}


                //@Throws(Exception.constructor)
            
    auto Animation::nextFrame() -> void{
}


    auto Animation::paintXY(Graphics* graphics, int32_t x, int32_t y) -> void{
this->basicSetColorUtil->setBasicColorP3(graphics, this->getBasicColorP(), this->getColor());
    
}


    auto Animation::paintThreedXYZ(Graphics* graphics, int32_t x, int32_t y, int32_t z) -> void{
}


    auto Animation::isThreed() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto Animation::getBasicColorP() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->basicColor;
    
}


    auto Animation::setBasicColorP(BasicColor* basicColor) -> void{
this->basicColor= basicColor;
    
this->colorP= this->basicColor->intValue();
    
}


    auto Animation::setBackgroundBasicColorP(BasicColor* basicColor) -> void{
}


    auto Animation::getChangeBasicColor() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->changeBasicColorP;
    
}


    auto Animation::changeBasicColor(BasicColor* basicColor) -> void{
this->changeBasicColorP= basicColor;
    
this->changeColorP= this->changeBasicColorP->intValue();
    
}


    auto Animation::getChangeColor() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->changeColorP;
    
}


    auto Animation::getColor() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->colorP;
    
}


    auto Animation::setScale(float scaleX, float scaleY) -> void{
}


    auto Animation::setMaxScale(float maxScaleX, float maxScaleY) -> void{
}


                //@Throws(Exception.constructor)
            
    auto Animation::set(GL* gl) -> void{
}


    auto Animation::setDx(int32_t dx) -> void{
}


    auto Animation::getDx() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}


    auto Animation::setDy(int32_t dy) -> void{
}


    auto Animation::getDy() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_ANIMATION_CPP


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
        



        #ifndef ORG_ALLBINARY_LAYER_LAYER_CPP
        #define ORG_ALLBINARY_LAYER_LAYER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/layer/Layer.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/IllegalArgumentException.h"
        
            #include "java/lang/Integer.h"
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
int32_t Layer::ID = SmallIntegerSingletonFactory::getInstance()->getAt(0);

Layer::Layer(int32_t width, int32_t height) : logUtil(LogUtil::getInstance()){
this->setLayerWidth(width);
    
this->setLayerHeight(height);
    
}


    auto Layer::setPosition(int32_t x, int32_t y, int32_t z) -> void{
this->x= x;
    
this->y= y;
    
this->z= z;
    
}


    auto Layer::moveDXY(int32_t dx, int32_t dy) -> void{
this->x += dx;
    
this->y += dy;
    
}


    auto Layer::moveDXYZ(int32_t dx, int32_t dy, int32_t dz) -> void{
this->x += dx;
    
this->y += dy;
    
this->z += dz;
    
}


    auto Layer::getXP() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->x;
    
}


    auto Layer::getYP() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->y;
    
}


    auto Layer::getZP() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->z;
    
}


    auto Layer::getWidth() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->width;
    
}


    auto Layer::getHeight() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->height;
    
}


    auto Layer::getDepth() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    
}


    auto Layer::setVisible(bool visible) -> void{
this->visible= visible;
    
}


    auto Layer::isVisible() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->visible;
    
}


    auto Layer::paint(Graphics* graphics) -> void{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    CanvasStrings* canvasStrings = CanvasStrings::getInstance();;
    
this->logUtil->putF(commonStrings->NOT_IMPLEMENTED, this, canvasStrings->PAINT);
    
}


    auto Layer::setLayerWidth(int32_t width) -> void{

                        if(width < 0)
                        
                                    {
                                    


                            throw IllegalArgumentException();
                    

                                    }
                                
this->width= width;
    
}


    auto Layer::setLayerHeight(int32_t height) -> void{

                        if(height < 0)
                        
                                    {
                                    


                            throw IllegalArgumentException();
                    

                                    }
                                
this->height= height;
    
}


    auto Layer::toStringAppend(StringMaker* stringBuffer) -> void{
}




        #endif //ORG_ALLBINARY_LAYER_LAYER_CPP


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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPOPUPMENUPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPOPUPMENUPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/BasicPopupMenuPaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/animation/vector/RectangleFilledAnimation.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/game/layer/SWTUtil.h>

      
#include <org/allbinary/graphics/GPoint.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>

      
#include <org/allbinary/graphics/draw/DrawVerticalStringUtil.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/graphics/threed/SWTJOGLProcessor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

BasicPopupMenuPaintable::BasicPopupMenuPaintable(Rectangle* rectangle, BasicColor* backgroundBasicColor, BasicColor* foregroundBasicColor) : basicSetColorUtil(BasicColorSetUtil::getInstance()), drawStringUtil(DrawVerticalStringUtil::getInstance()), myFontProcessor(new UpdateMyFontProcessor(this)){
this->foregroundBasicColor= foregroundBasicColor;
    
this->label= BasicPopupMenuPaintable::NAME;
    
this->rectangle= rectangle;
    

                        if(J2MEUtil::isJ2ME() || J2MEUtil::isHTML())
                        
                                    {
                                    this->animationInterface= NullAnimationFactory::getFactoryInstance()->getInstance(0);
    

                                    }
                                
                        else {
                            this->animationInterface= new RectangleFilledAnimation(this->rectangle->getWidth(), this->rectangle->getHeight(), BasicColorFactory::getInstance()->TRANSPARENT_GREY);
    

                        }
                            
this->init(rectangle);
    
}


    auto BasicPopupMenuPaintable::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    

    Features* features = Features::getInstance();;
    

    bool isOpenGL = features->isDefault(OpenGLFeatureFactory::getInstance()->OPENGL);;
    
this->drawStringUtil->updateMeasurement(graphics, this->label);
    

    int32_t BORDER = 0;;
    

                        if(J2MEUtil::isHTML() || isOpenGL)
                        
                                    {
                                    BORDER= MyFontProcessor::defaultCharWidth(font) /2;
    

                                    }
                                
                             else 
                        if(AndroidUtil::isAndroid() || J2MEUtil::isJ2SE() || SWTUtil::isSWT)
                        
                                    {
                                    BORDER= MyFontProcessor::defaultCharWidth(font);
    

                                    }
                                
                        else {
                            BORDER= MyFontProcessor::defaultCharWidth(font) *2;
    

                        }
                            
this->BORDER= BORDER;
    
this->heightOffset= this->rectangle->getHeight() -(font->getHeight() *BasicPopupMenuPaintable::NAME.size());
    

                        if(OpenGLFeatureUtil::getInstance()->isAnyThreed())
                        
                                    {
                                    this->heightOffset -= font->getHeight() +2;
    

                        if(AndroidUtil::isAndroid())
                        
                                    {
                                    this->heightOffset= font->getHeight();
    

                                    }
                                
                        else {
                            this->heightOffset -= font->getHeight() +2;
    

                        }
                            

                                    }
                                
this->offset= (this->heightOffset>>1) +(SWTJOGLProcessor::getInstance()->isJOGL()
                        ?       
                                4
                                :

                            0);
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


                //@Throws(Exception.constructor)
            
    auto BasicPopupMenuPaintable::init(Rectangle* rectangle) -> void{
this->rectangle= rectangle;
    

    int32_t width = this->rectangle->getWidth();;
    

    int32_t height = this->rectangle->getHeight();;
    

                        if(J2MEUtil::isJ2ME() || J2MEUtil::isHTML())
                        
                                    {
                                    
                                    }
                                
                        else {
                            
    RectangleFilledAnimation* rectangleFilledAnimation = dynamic_cast<RectangleFilledAnimation*>(this->animationInterface);;
    
rectangleFilledAnimation->setWidth(width);
    
rectangleFilledAnimation->setHeight(height);
    

                        }
                            
}


    auto BasicPopupMenuPaintable::paint(Graphics* graphics) -> void{
this->myFontProcessor->process(graphics);
    

    GPoint* point = this->rectangle->getPoint();;
    

    int32_t x = point->getX();;
    

    int32_t y = point->getY();;
    

    int32_t width = this->rectangle->getWidth();;
    

    int32_t height = this->rectangle->getHeight();;
    
this->animationInterface->paintXY(graphics, x, y);
    
this->basicSetColorUtil->setBasicColorP(graphics, this->foregroundBasicColor);
    
this->drawStringUtil->paintVerticle(graphics, this->label, x +this->BORDER, y +this->offset, 0);
    
graphics->drawRect(x, y, width, height);
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPOPUPMENUPAINTABLE_CPP

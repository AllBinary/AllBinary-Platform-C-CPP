
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_MYFORMUTIL_CPP
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_MYFORMUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/displayable/canvas/MyFormUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/configuration/feature/Features.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureFactory.h>

      
#include <org/allbinary/graphics/threed/SWTJOGLProcessor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

MyFormUtil::MyFormUtil() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), popupMenuRectangle(RectangleFactory::SINGLETON) {
        }
        auto MyFormUtil::instance_owner() -> MyFormUtil* { static std::unique_ptr<MyFormUtil> value(new MyFormUtil()); return value.get(); }
MyFormUtil* MyFormUtil::instance = MyFormUtil::instance_owner();

    auto MyFormUtil::getInstance() -> MyFormUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return MyFormUtil::instance;
    
}


    auto MyFormUtil::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    

    DisplayInfoSingleton* displayInfo = DisplayInfoSingleton::getInstance();;
    

    Features* features = Features::getInstance();;
    

    bool isOpenGL = features->isDefault(OpenGLFeatureFactory::getInstance()->OPENGL);;
    

    int32_t TOTAL_CHAR_WIDTH = SWTJOGLProcessor::getInstance()->isJOGL() && isOpenGL
                        ?       
                                2
                                :

                            3;;;
    

    int32_t width = MyFontProcessor::defaultStringWidth(font, TOTAL_CHAR_WIDTH);;
    

    PointFactory* pointFactory = PointFactory::getInstance();;
    

                        if(displayInfo->getLastHeight() < 320)
                        
                                    {
                                    this->popupMenuRectangle= new Rectangle(pointFactory->createXY(0, 25), width, (font->getHeight() *4) +2);
    

                                    }
                                
                        else {
                            this->popupMenuRectangle= new Rectangle(pointFactory->createXY(0, displayInfo->getLastHalfHeight() -70), width, (font->getHeight() *5));
    

                        }
                            
}


    auto MyFormUtil::getPopupMenuRectangle() -> Rectangle*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->popupMenuRectangle;
    
}




        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_MYFORMUTIL_CPP

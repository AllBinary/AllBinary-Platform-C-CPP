
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class MyFormUtil
            : public Object
         {
        

    private: static const instance: MyFormUtil = new MyFormUtil();

    public static MyFormUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MyFormUtil.instance;
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: popupMenuRectangle: Rectangle = RectangleFactory.SINGLETON;

    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    

    displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;;
    

    features: Features = Features.getInstance()!;;
    

    isOpenGL: bool = features.isDefault(OpenGLFeatureFactory.getInstance()!.OPENGL)!;;
    

    TOTAL_CHAR_WIDTH: int32_t = SWTJOGLProcessor.getInstance()!.isJOGL() && isOpenGL
                        ?       
                                2
                                :

                            3;

    ;;
    

    width: int32_t = MyFontProcessor.defaultStringWidth(font, TOTAL_CHAR_WIDTH)!;;
    

    pointFactory: PointFactory = PointFactory.getInstance()!;;
    

                        if(displayInfo!.getLastHeight() < 320)
                        
                                    {
                                    this.popupMenuRectangle= new Rectangle(pointFactory!.createXY(0, 25), width, (font.getHeight() *4) +2);
    

                                    }
                                
                        else {
                            this.popupMenuRectangle= new Rectangle(pointFactory!.createXY(0, displayInfo!.getLastHalfHeight() -70), width, (font.getHeight() *5));
    

                        }
                            
}


    public Rectangle getPopupMenuRectangle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.popupMenuRectangle;
    
}


};

            


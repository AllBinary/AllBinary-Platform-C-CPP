
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
        



        #ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPOPUPMENUPAINTABLE_H
        #define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPOPUPMENUPAINTABLE_H

            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class BasicPopupMenuPaintable: public Paintable: public UpdateMyFontInterface {
        

    private: static const NAME: string = "MENU";

    const basicSetColorUtil: BasicColorSetUtil = BasicColorSetUtil.getInstance()!;

    private: const drawStringUtil: DrawVerticalStringUtil = DrawVerticalStringUtil.getInstance()!;

    private: const label: string;

    private: const foregroundBasicColor: BasicColor;

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: rectangle: Rectangle;

    private: BORDER: int32_t= 0;

    private: heightOffset: int32_t= 0;

    private: offset: int32_t= 0;

    private: animationInterface: Animation;

public constructor (Rectangle rectangle, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor);

    public updateMeasurement(Graphics graphics);

                //@Throws(Exception.constructor)
            
    public init(Rectangle rectangle);

    public paint(Graphics graphics);

};

            


        #endif //ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_BASICPOPUPMENUPAINTABLE_H

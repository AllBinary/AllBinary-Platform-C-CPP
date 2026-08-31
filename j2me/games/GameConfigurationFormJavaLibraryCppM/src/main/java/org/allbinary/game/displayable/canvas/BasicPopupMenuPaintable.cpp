
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

public constructor (Rectangle rectangle, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){

            super();
        this.foregroundBasicColor= foregroundBasicColor;
    
this.label= BasicPopupMenuPaintable.NAME;
    
this.rectangle= rectangle;
    

                        if(J2MEUtil.isJ2ME() || J2MEUtil.isHTML())
                        
                                    {
                                    this.animationInterface= NullAnimationFactory.getFactoryInstance()!.getInstance(0);
    

                                    }
                                
                        else {
                            this.animationInterface= new RectangleFilledAnimation(this.rectangle.getWidth(), this.rectangle.getHeight(), BasicColorFactory.getInstance()!.TRANSPARENT_GREY);
    

                        }
                            
this.init(rectangle);
    
}


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    

    features: Features = Features.getInstance()!;;
    

    isOpenGL: bool = features.isDefault(OpenGLFeatureFactory.getInstance()!.OPENGL)!;;
    
this.drawStringUtil!.updateMeasurement(graphics, this.label);
    

    BORDER: int32_t = 0;;
    

                        if(J2MEUtil.isHTML() || isOpenGL)
                        
                                    {
                                    BORDER= MyFontProcessor.defaultCharWidth(font) /2;
    

                                    }
                                
                             else 
                        if(AndroidUtil.isAndroid() || J2MEUtil.isJ2SE() || SWTUtil.isSWT)
                        
                                    {
                                    BORDER= MyFontProcessor.defaultCharWidth(font);
    

                                    }
                                
                        else {
                            BORDER= MyFontProcessor.defaultCharWidth(font) *2;
    

                        }
                            
this.BORDER= BORDER;
    
this.heightOffset= this.rectangle.getHeight() -(font.getHeight() *BasicPopupMenuPaintable.NAME.length);
    

                        if(OpenGLFeatureUtil.getInstance()!.isAnyThreed())
                        
                                    {
                                    this.heightOffset -= font.getHeight() +2;
    

                        if(AndroidUtil.isAndroid())
                        
                                    {
                                    this.heightOffset= font.getHeight();
    

                                    }
                                
                        else {
                            this.heightOffset -= font.getHeight() +2;
    

                        }
                            

                                    }
                                
this.offset= (this.heightOffset>>1) +(SWTJOGLProcessor.getInstance()!.isJOGL()
                        ?       
                                4
                                :

                            0;

    );
    
this.myFontProcessor= MyFontProcessor.getInstance();
    
}


                //@Throws(Exception.constructor)
            
    public init(Rectangle rectangle){
this.rectangle= rectangle;
    

    width: int32_t = this.rectangle.getWidth()!;;
    

    height: int32_t = this.rectangle.getHeight()!;;
    

                        if(J2MEUtil.isJ2ME() || J2MEUtil.isHTML())
                        
                                    {
                                    
                                    }
                                
                        else {
                            
    rectangleFilledAnimation: RectangleFilledAnimation = this.animationInterface as RectangleFilledAnimation;;
    
rectangleFilledAnimation!.setWidth(width);
    
rectangleFilledAnimation!.setHeight(height);
    

                        }
                            
}


    public paint(Graphics graphics){
this.myFontProcessor!.process(graphics);
    

    point: GPoint = this.rectangle.getPoint()!;;
    

    x: int32_t = point.getX()!;;
    

    y: int32_t = point.getY()!;;
    

    width: int32_t = this.rectangle.getWidth()!;;
    

    height: int32_t = this.rectangle.getHeight()!;;
    
this.animationInterface!.paintXY(graphics, x, y);
    
this.basicSetColorUtil!.setBasicColorP(graphics, this.foregroundBasicColor);
    
this.drawStringUtil!.paintVerticle(graphics, this.label, x +this.BORDER, y +this.offset, 0);
    
graphics.drawRect(x, y, width, height);
    
}


};

            


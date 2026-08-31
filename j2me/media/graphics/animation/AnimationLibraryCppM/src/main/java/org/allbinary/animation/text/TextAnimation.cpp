
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
        



            #include "../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/AnimationBehavior.h>

      
#include <org/allbinary/animation/IndexedAnimation.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/threed/SWTJOGLProcessor.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TextChangeListener.h"

class TextAnimation: public IndexedAnimation: public UpdateMyFontInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const updateMyFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    myFontProcessor: MyFontProcessor = this.updateMyFontProcessor;

    textArrayP: std::vector<string> = StringUtil.getInstance()!.ONE_EMPTY_STRING_ARRAY;

    private: anchor: int32_t = Anchor.TOP_LEFT;

    private: fontHeight: int32_t = 0;

    private: offsetY: int32_t = 0;

    private: textChangeListener: TextChangeListener = TextChangeListener.getInstance()!;

public constructor (string text, AnimationBehavior animationBehavior){
            super(animationBehavior);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.setText(text);
    
}


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.fontHeight= font.getHeight();
    

    adjustedFontHeight: int32_t = static_cast<int32_t>( -(this.fontHeight *2.00));;
    
this.offsetY= SWTJOGLProcessor.getInstance()!.isJOGL()
                        ?       
                                adjustedFontHeight
                                :

                            0;

    ;
    
this.textChangeListener!.onMeasure();
    
this.textChangeListener= TextChangeListener.getInstance();
    
this.myFontProcessor= MyFontProcessor.getInstance();
    
}


                //@Throws(Exception.constructor)
            
    public nextFrame(){
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
this.myFontProcessor!.process(graphics);
    
this.paintXYNoUpdate(graphics, x, y);
    
}


    public paintXYNoUpdate(Graphics graphics, int32_t x, int32_t y){
this.basicSetColorUtil!.setBasicColorP3(graphics, this.getBasicColorP(), this.getColor());
    

    size: int32_t = this.textArrayP!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
graphics.drawString(this.textArrayP[index]!, x, y +this.offsetY +(index *this.fontHeight), this.anchor);
    
}

}


    public setTextWithOnMeasure(string text, TextChangeListener textChangeListener){
this.setText(text);
    
this.textChangeListener= textChangeListener;
    
}


    public setText(string text){

    list: BasicArrayList = new BasicArrayListD();;
    

                        if(text != 
                                    null
                                 && text.length > 0)
                        
                                    {
                                    
    index: int32_t = 0;;
    

    startIndex: int32_t = 0;;
    

    endIndex: int32_t = 0;;
    

        while(index >= 0)
        {
startIndex= index;
    
index= text.indexOf('\n', startIndex);
    
endIndex= index;
    

                        if(index < 0)
                        
                                    {
                                    endIndex= text.length;
    

                                    }
                                
list.add(text.substring(startIndex, endIndex));
    

                        if(index < 0)
                        
                                    {
                                    break;

                    

                                    }
                                
index++;
    
}


                                    }
                                

                        if(list.size() > 0)
                        
                                    {
                                    
    textArray: std::vector<string> = new Array(list.size());;
    

    size: int32_t = list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
textArray[index]= list.get(index) as string;
    
}

this.textArrayP= textArray;
    

                                    }
                                
                        else {
                            this.textArrayP= StringUtil.getInstance()!.ONE_EMPTY_STRING_ARRAY;
    

                        }
                            
this.myFontProcessor= this.updateMyFontProcessor;
    
}


    public std::vector<string> getTextArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.textArrayP;
    
}


    public int32_t getFontHeight(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.fontHeight;
    
}


};

            


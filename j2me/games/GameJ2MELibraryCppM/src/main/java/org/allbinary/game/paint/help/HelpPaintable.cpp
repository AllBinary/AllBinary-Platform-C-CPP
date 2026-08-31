
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
        



#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HelpPaintable: public Paintable: public UpdateMyFontInterface {
        

    const displayInfo: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    const updateMyFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    myFontProcessor: MyFontProcessor = this.updateMyFontProcessor;

    anchor: int32_t = Anchor.TOP_LEFT;

    const title: string;

    inputInfo: std::vector<string> = StringUtil.getInstance()!.getArrayInstance()!;

    basicColor: BasicColor;

    titleBeginWidth: int32_t= 0;

    private: beginWidthArray: std::vector<int32_t> = NullUtil.getInstance()!.NULL_INT_ARRAY;

    private: charHeight: int32_t= 0;

public constructor (string title, BasicColor backgroundBasicColor, BasicColor basicColor){

            super();
        this.title= title;
    
this.basicColor= basicColor;
    
}


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.titleBeginWidth= (font.stringWidth(this.title)>>1);
    
this.charHeight= font.getHeight();
    

    size: int32_t = this.inputInfo!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
this.beginWidthArray[index]= (font.stringWidth(this.inputInfo[index]!)>>1);
    
}

this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    public setInputInfoP(std::vector<string> inputInfo){
this.inputInfo= inputInfo;
    
this.beginWidthArray= new Array(this.inputInfo!.length);
    
this.myFontProcessor= this.updateMyFontProcessor;
    
}


    public paint(Graphics graphics){
this.myFontProcessor!.process(graphics);
    

    halfWidth: int32_t = this.displayInfo!.getLastHalfWidth()!;;
    
graphics.setColor(this.basicColor!.intValue());
    
graphics.drawString(this.title, halfWidth -this.titleBeginWidth, this.charHeight, this.anchor);
    

    size: int32_t = this.inputInfo!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
graphics.drawString(this.inputInfo[index]!, halfWidth -this.beginWidthArray[index], (index +3) *this.charHeight, this.anchor);
    
}

}


};

            


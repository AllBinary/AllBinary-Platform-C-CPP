
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
        



#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/displayable/CanvasStrings.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //AndroidToJ2ME
class AboutPaintable: public Paintable: public UpdateMyFontInterface {
        

    public static AboutPaintable getInstance(std::vector<string> info, std::vector<string> developers){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new AboutPaintable(info, developers);
    
}


    private: const displayInfoSingleton: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: const ABOUT: string = CanvasStrings.getInstance()!.ABOUT;

    private: const info: std::vector<string>;

    private: const developers: std::vector<string>;

    private: const paintableArray: std::vector<Paintable> = 
                                                        [
                                                            this
                                                        ];

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: charHeight: int32_t= 0;

    private: aboutBeginWidth: int32_t= 0;

    private: infoBeginWidth: std::vector<int32_t>;

    private: developersBeginWidth: std::vector<int32_t>;

    private: anchor: int32_t = Anchor.TOP_LEFT;

private constructor (std::vector<string> info, std::vector<string> developers){

            super();
        this.info= info;
    
this.infoBeginWidth= new Array(this.info.length);
    
this.developers= developers;
    
this.developersBeginWidth= new Array(this.developers.length);
    
}


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.charHeight= font.getHeight();
    
this.aboutBeginWidth= (font.stringWidth(this.ABOUT)>>1);
    

    infoSize: int32_t = this.info.length
                ;;
    




                        for (
    index: int32_t = 0;index < infoSize; index++)
        {
this.infoBeginWidth[index]= (font.stringWidth(this.info[index]!)>>1);
    
}


    size: int32_t = this.developers.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
this.developersBeginWidth[index]= (font.stringWidth(this.developers[index]!)>>1);
    
}

this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    public std::vector<Paintable> getPaintableArrayInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.paintableArray;
    
}


    public paint(Graphics graphics){
this.myFontProcessor!.process(graphics);
    

    halfWidth: int32_t = this.displayInfoSingleton!.getLastHalfWidth()!;;
    
graphics.drawString(this.ABOUT, halfWidth -this.aboutBeginWidth, 2 *this.charHeight, this.anchor);
    

    infoSize: int32_t = this.info.length
                ;;
    




                        for (
    index: int32_t = 0;index < infoSize; index++)
        {
graphics.drawString(this.info[index]!, halfWidth -this.infoBeginWidth[index], (4 +index) *this.charHeight, this.anchor);
    
}


    size: int32_t = this.developers.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
graphics.drawString(this.developers[index]!, halfWidth -this.developersBeginWidth[index], (5 +infoSize +index) *this.charHeight, this.anchor);
    
}

}


};

            


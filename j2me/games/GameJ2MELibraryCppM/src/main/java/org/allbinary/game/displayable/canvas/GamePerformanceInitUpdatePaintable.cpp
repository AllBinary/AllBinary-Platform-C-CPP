
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

      
#include <org/allbinary/canvas/GameStatisticsFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GamePerformanceInitUpdatePaintable: public InitUpdatePaintable: public UpdateMyFontInterface {
        

    private: const halfHeight: int32_t = DisplayInfoSingleton.getInstance()!.getLastHalfHeight()!;

    private: const yArray: std::vector<int32_t> = [this.halfHeight +30,this.halfHeight +30,this.halfHeight +30 +15,this.halfHeight +30 +15,this.halfHeight +30 +30,this.halfHeight +30 +30,this.halfHeight +30 +45,this.halfHeight +30 +45];

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: baseRefreshHelperCharArray: std::vector<std::vector<char>> = new Array(0).fill(null).map(() => new Array(0).fill(0));

    private: defaultStringWidth: int32_t= 0;

    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.defaultStringWidth= MyFontProcessor.defaultStringWidth(font, 2);
    
this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    public init(){
}


    public update(){
this.baseRefreshHelperCharArray= GameStatisticsFactory.getInstance()!.to2DCharArray();
    
}


    private: const RED: int32_t = BasicColorFactory.getInstance()!.RED.intValue()!;

    public paint(Graphics graphics){
this.myFontProcessor!.process(graphics);
    
graphics.setColor(this.RED);
    

    charArray: std::vector<char>;;
    

    charArray2: std::vector<char>;;
    

    size2: int32_t= 0;;
    

    size3: int32_t= 0;;
    

    size: int32_t = this.baseRefreshHelperCharArray!.length -2;;
    




                        for (
    index: int32_t = size;index >= 0; )
        {
charArray= this.baseRefreshHelperCharArray[index]!;
    
charArray2= this.baseRefreshHelperCharArray[index +1]!;
    
size2= charArray!.length;
    
size3= charArray2!.length;
    
graphics.drawChars(charArray, 0, size2, 0, this.yArray[index]!, 0);
    
graphics.drawChars(charArray2, 0, size3, size2 *this.defaultStringWidth, this.yArray[index +1]!, 0);
    
}

}


};

            


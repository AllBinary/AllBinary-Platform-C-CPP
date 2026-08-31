
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

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/ColorChangeEvent.h>

      
#include <org/allbinary/graphics/color/ColorChangeListener.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/Paintable.h>

      
#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "NullHighScoresSingletonFactory.h"
#include "HighScores.h"
#include "HighScore.h"

class HighScoresPaintable: public Paintable: public ColorChangeListener, public UpdateMyFontInterface {
        

    private: const displayInfoSingleton: DisplayInfoSingleton = DisplayInfoSingleton.getInstance()!;

    private: myFontProcessor: MyFontProcessor = new UpdateMyFontProcessor(this);

    private: basicColor: BasicColor = BasicColorFactory.getInstance()!.WHITE;

    private: highScores: HighScores = NullHighScoresSingletonFactory.getInstance()!;

    private: anchor: int32_t = Anchor.TOP_LEFT;

    private: charHeight: int32_t= 0;

public constructor (){

            super();
        }


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.charHeight= font.getHeight();
    
this.myFontProcessor= MyFontProcessor.getInstance();
    
}


    public onEvent(AllBinaryEventObject eventObject){

    colorChangeEvent: ColorChangeEvent = eventObject as ColorChangeEvent;;
    
this.basicColor= colorChangeEvent!.getBasicColorP();
    
}


    public paint(Graphics graphics){
this.myFontProcessor!.process(graphics);
    

    width: int32_t = this.displayInfoSingleton!.getLastWidth()!;;
    

    height: int32_t = this.displayInfoSingleton!.getLastHeight()!;;
    
graphics.setColor(this.getBasicColorP()!.intValue());
    

    heading: string = this.highScores!.getHeading()!;;
    

    topScoresWidth: int32_t = (graphics.getFont()!.stringWidth(heading)>>1);;
    

    charHeight: int32_t = this.charHeight;;
    
graphics.drawString(heading, (width>>1) -topScoresWidth, charHeight, this.anchor);
    
graphics.drawString(this.highScores!.getColumnOneHeading(), 10, charHeight *3, this.anchor);
    

    columnTwoHeading: string = this.highScores!.getColumnTwoHeading()!;;
    

    columnTwoHeadingWidth: int32_t = graphics.getFont()!.stringWidth(columnTwoHeading)!;;
    
graphics.drawString(columnTwoHeading, width -10 -columnTwoHeadingWidth, charHeight *3, this.anchor);
    

    index: int32_t = 4;;
    

    largestSecondColumnWidth: int32_t = columnTwoHeadingWidth;;
    

    list: BasicArrayList = this.highScores!.getList()!;;
    

    size: int32_t = list.size()!;;
    

    vectorIndex: int32_t = 0;;
    

    highScore: HighScore;;
    

        while(vectorIndex < size && charHeight *index < height -(charHeight *2))
        {
highScore= list.objectArray[vectorIndex]! as HighScore;
    

    nextScoreWidth: int32_t = graphics.getFont()!.stringWidth(highScore!.getScoreString())!;;
    

                        if(nextScoreWidth > largestSecondColumnWidth)
                        
                                    {
                                    largestSecondColumnWidth= nextScoreWidth;
    

                                    }
                                
vectorIndex++;
    
}

vectorIndex= 0;
    

        while(vectorIndex < size && charHeight *index < height -(charHeight *2))
        {
highScore= list.objectArray[vectorIndex]! as HighScore;
    
graphics.drawString(highScore!.getName(), 10, charHeight *index, this.anchor);
    
graphics.drawString(highScore!.getScoreString(), width -10 -largestSecondColumnWidth, charHeight *index, this.anchor);
    
index++;
    
vectorIndex++;
    
}

}


    public setBasicColorP(BasicColor basicColor){
this.basicColor= basicColor;
    
}


    public BasicColor getBasicColorP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicColor;
    
}


    public setHighScores(HighScores highScores){
this.highScores= highScores;
    
}


};

            


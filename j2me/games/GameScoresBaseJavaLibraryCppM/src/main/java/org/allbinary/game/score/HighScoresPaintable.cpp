
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

class HighScoresPaintable: public Paintable, public ColorChangeListener, public UpdateMyFontInterface {

    private: const DisplayInfoSingleton displayInfoSingleton = DisplayInfoSingleton::getInstance();

    private: MyFontProcessor myFontProcessor = UpdateMyFontProcessor(this);

    private: BasicColor basicColor = BasicColorFactory::getInstance().WHITE;

    private: HighScores highScores = NullHighScoresSingletonFactory::getInstance();

    private: int32_t anchor = Anchor::TOP_LEFT;

    private: int32_t charHeight= 0;

public: HighScoresPaintable(){
}


    public: void updateMeasurement(Graphics graphics){

    Font font = graphics.getFont();;
    
this->charHeight= font.getHeight();
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    public: void onEvent(AllBinaryEventObject eventObject){

    ColorChangeEvent colorChangeEvent = eventObject as ColorChangeEvent;;
    
this->basicColor= colorChangeEvent.getBasicColorP();
    
}


    public: void paint(Graphics graphics){
this->myFontProcessor.process(graphics);
    

    int32_t width = this->displayInfoSingleton.getLastWidth();;
    

    int32_t height = this->displayInfoSingleton.getLastHeight();;
    
graphics.setColor(this->getBasicColorP().intValue());
    

    std::string heading = this->highScores.getHeading();;
    

    int32_t topScoresWidth = (graphics.getFont().stringWidth(heading)>>1);;
    

    int32_t charHeight = this->charHeight;;
    
graphics.drawString(heading, (width>>1) -topScoresWidth, charHeight, this->anchor);
    
graphics.drawString(this->highScores.getColumnOneHeading(), 10, charHeight *3, this->anchor);
    

    std::string columnTwoHeading = this->highScores.getColumnTwoHeading();;
    

    int32_t columnTwoHeadingWidth = graphics.getFont().stringWidth(columnTwoHeading);;
    
graphics.drawString(columnTwoHeading, width -10 -columnTwoHeadingWidth, charHeight *3, this->anchor);
    

    int32_t index = 4;;
    

    int32_t largestSecondColumnWidth = columnTwoHeadingWidth;;
    

    BasicArrayList list = this->highScores.getList();;
    

    int32_t size = list.size();;
    

    int32_t vectorIndex = 0;;
    

    HighScore highScore;;
    

        while(vectorIndex < size && charHeight *index < height -(charHeight *2))
        {
highScore= list.objectArray[vectorIndex]! as HighScore;
    

    int32_t nextScoreWidth = graphics.getFont().stringWidth(highScore.getScoreString());;
    

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
    
graphics.drawString(highScore.getName(), 10, charHeight *index, this->anchor);
    
graphics.drawString(highScore.getScoreString(), width -10 -largestSecondColumnWidth, charHeight *index, this->anchor);
    
index++;
    
vectorIndex++;
    
}

}


    public: void setBasicColorP(BasicColor basicColor){
this->basicColor= basicColor;
    
}


    public: BasicColor getBasicColorP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicColor;
    
}


    public: void setHighScores(HighScores highScores){
this->highScores= highScores;
    
}


};

            


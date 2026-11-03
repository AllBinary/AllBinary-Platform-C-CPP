
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
        



        #ifndef ORG_ALLBINARY_GAME_SCORE_HIGHSCORESPAINTABLE_CPP
        #define ORG_ALLBINARY_GAME_SCORE_HIGHSCORESPAINTABLE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/score/HighScoresPaintable.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/score/NullHighScoresSingletonFactory.h"
#include "org/allbinary/game/score/HighScores.h"
#include "org/allbinary/game/score/HighScore.h"


HighScoresPaintable::HighScoresPaintable() : displayInfoSingleton(DisplayInfoSingleton::getInstance()), myFontProcessor(new UpdateMyFontProcessor(this)), basicColor(BasicColorFactory::getInstance()->WHITE), highScores(NullHighScoresSingletonFactory::getInstance()), anchor(Anchor::TOP_LEFT){
}


    auto HighScoresPaintable::updateMeasurement(Graphics* graphics) -> void{

    Font* font = graphics->getFont();;
    
this->charHeight= font->getHeight();
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    auto HighScoresPaintable::onEvent(AllBinaryEventObject* eventObject) -> void{

    ColorChangeEvent* colorChangeEvent = dynamic_cast<ColorChangeEvent*>(eventObject);;
    
this->basicColor= colorChangeEvent->getBasicColorP();
    
}


    auto HighScoresPaintable::paint(Graphics* graphics) -> void{
this->myFontProcessor->process(graphics);
    

    int32_t width = this->displayInfoSingleton->getLastWidth();;
    

    int32_t height = this->displayInfoSingleton->getLastHeight();;
    
graphics->setColor(JavaBoxes::value<int32_t>(this->getBasicColorP()));
    

    std::string heading = this->highScores->getHeading();;
    

    int32_t topScoresWidth = (graphics->getFont()->stringWidth(heading)>>1);;
    

    int32_t charHeight = this->charHeight;;
    
graphics->drawString(heading, (width>>1) -topScoresWidth, charHeight, this->anchor);
    
graphics->drawString(this->highScores->getColumnOneHeading(), 10, charHeight *3, this->anchor);
    

    std::string columnTwoHeading = this->highScores->getColumnTwoHeading();;
    

    int32_t columnTwoHeadingWidth = graphics->getFont()->stringWidth(columnTwoHeading);;
    
graphics->drawString(columnTwoHeading, width -10 -columnTwoHeadingWidth, charHeight *3, this->anchor);
    

    int32_t index = 4;;
    

    int32_t largestSecondColumnWidth = columnTwoHeadingWidth;;
    

    BasicArrayList* list = this->highScores->getList();;
    

    int32_t size = list->size();;
    

    int32_t vectorIndex = 0;;
    

    HighScore* highScore;;
    

        while(vectorIndex < size && charHeight *index < height -(charHeight *2))
        {
highScore= dynamic_cast<HighScore*>(list->objectArray[vectorIndex]);
    

    int32_t nextScoreWidth = graphics->getFont()->stringWidth(highScore->getScoreString());;
    

                        if(nextScoreWidth > largestSecondColumnWidth)
                        
                                    {
                                    largestSecondColumnWidth= nextScoreWidth;
    

                                    }
                                
vectorIndex++;
    
}

vectorIndex= 0;
    

        while(vectorIndex < size && charHeight *index < height -(charHeight *2))
        {
highScore= dynamic_cast<HighScore*>(list->objectArray[vectorIndex]);
    
graphics->drawString(highScore->getName(), 10, charHeight *index, this->anchor);
    
graphics->drawString(highScore->getScoreString(), width -10 -largestSecondColumnWidth, charHeight *index, this->anchor);
    
index++;
    
vectorIndex++;
    
}

}


    auto HighScoresPaintable::setBasicColorP(BasicColor* basicColor) -> void{
this->basicColor= basicColor;
    
}


    auto HighScoresPaintable::getBasicColorP() -> BasicColor*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->basicColor;
    
}


    auto HighScoresPaintable::setHighScores(HighScores* highScores) -> void{
this->highScores= highScores;
    
}




        #endif //ORG_ALLBINARY_GAME_SCORE_HIGHSCORESPAINTABLE_CPP

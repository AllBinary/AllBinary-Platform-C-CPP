
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
        



            #include <vector>
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/Anchor.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/FontDebugFactory.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinaryGameCanvas.h"

class StartIntermissionPaintable: public InitUpdatePaintable, public UpdateMyFontInterface {

    protected: const FontDebugFactory fontDebugFactory = FontDebugFactory::getInstance();

    protected: const BasicColorSetUtil basicSetColorUtil = BasicColorSetUtil::getInstance();

    protected: AllBinaryGameCanvas gameCanvas;

    protected: std::vector<std::string> stringArray;

    protected: int32_t fontSize;

    protected: Font font;

    public: std::vector<int32_t> lastWidth;

    private: const MyFontProcessor updateMyFontProcessor = UpdateMyFontProcessor(this);

    private: MyFontProcessor myFontProcessor = this->updateMyFontProcessor;

    private: BasicColor basicColor = BasicColorFactory::getInstance().BLACK;

    private: int32_t color;

    protected: std::vector<int32_t> lineYOffsetArray = NullUtil::getInstance().NULL_INT_ARRAY;

    private: bool hasChanged = true;

    private: int32_t anchor = Anchor::TOP_LEFT;

    protected: int32_t fontHeightP= 0;

public: StartIntermissionPaintable(AllBinaryGameCanvas gameCanvas, std::vector<std::string> stringArray, BasicColor basicColor, Font font){
this->gameCanvas= gameCanvas;
    
this->stringArray= stringArray;
    
this->lastWidth= std::vector<int32_t>(this->stringArray.length);
    
this->setBasicColorP(basicColor);
    
this->color= basicColor.intValue();
    
this->fontSize= font.getSize();
    
this->font= font;
    
}


    public: void updateMeasurement(Graphics graphics){

    Font font = graphics.getFont();;
    
this->fontHeightP= font.getHeight();
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    public: void paint(Graphics graphics){
this->myFontProcessor.process(graphics);
    

    Font existingFont = graphics.getFont();;
    
this->fontDebugFactory.setFont(this->font, graphics);
    

    DisplayInfoSingleton displayInfo = DisplayInfoSingleton::getInstance();;
    
this->basicSetColorUtil.setBasicColorP3(graphics, this->basicColor, this->color);
    

    int32_t beginWidth= 0;;
    




                        for (
    int32_t index = this->lineYOffsetArray.size() -1;index >= 0; index--)
        {

                        if(this->hasChanged)
                        
                                    {
                                    this->lastWidth[index]= (graphics.getFont().stringWidth(this->stringArray[index])>>1);
    

                                    }
                                
beginWidth= this->lastWidth[index];
    
graphics.drawString(this->stringArray[index], displayInfo.getLastHalfWidth() -beginWidth, displayInfo.getLastHalfHeight() -this->lineYOffsetArray[index], this->anchor);
    
}

this->hasChanged= false;
    
this->fontDebugFactory.setFont(existingFont, graphics);
    
}


    private: const std::string BEGIN_LEVEL = "Begin Level ";

    private: const std::string EMPTY_STRING = StringUtil::getInstance().EMPTY_STRING;

    public: void update(){

    int32_t level = this->gameCanvas.getLayerManager().getGameInfo().getCurrentLevel();;
    
this->stringArray[0]= StringMaker().append(this->BEGIN_LEVEL).appendint(level).toString();
    




                        for (
    int32_t index = this->stringArray.size() -1;index >= 1; index--)
        {
this->stringArray[index]= this->EMPTY_STRING;
    
}

}


    public: void setBasicColorP(BasicColor basicColor){
this->basicColor= basicColor;
    
}


    public: BasicColor getBasicColorP(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->basicColor;
    
}


};

            


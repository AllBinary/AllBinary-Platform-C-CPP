
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

      
#include <org/allbinary/canvas/GameStatisticsFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/displayable/DisplayInfoSingleton.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontInterface.h>

      
#include <org/allbinary/graphics/font/UpdateMyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/InitUpdatePaintable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GamePerformanceInitUpdatePaintable: public InitUpdatePaintable, public UpdateMyFontInterface {

    private: const int32_t halfHeight = DisplayInfoSingleton::getInstance().getLastHalfHeight();

    private: const std::vector<int32_t> yArray = {this->halfHeight +30,this->halfHeight +30,this->halfHeight +30 +15,this->halfHeight +30 +15,this->halfHeight +30 +30,this->halfHeight +30 +30,this->halfHeight +30 +45,this->halfHeight +30 +45};

    private: MyFontProcessor myFontProcessor = UpdateMyFontProcessor(this);

    private: std::vector<std::vector<char>> baseRefreshHelperCharArray = std::vector<std::vector<char>>(0, std::vector<char>(0));

    private: int32_t defaultStringWidth= 0;

    public: void updateMeasurement(Graphics graphics){

    Font font = graphics.getFont();;
    
this->defaultStringWidth= MyFontProcessor::defaultStringWidth(font, 2);
    
this->myFontProcessor= MyFontProcessor::getInstance();
    
}


    public: void init(){
}


    public: void update(){
this->baseRefreshHelperCharArray= GameStatisticsFactory::getInstance().to2DCharArray();
    
}


    private: const int32_t RED = BasicColorFactory::getInstance().RED.intValue();

    public: void paint(Graphics graphics){
this->myFontProcessor.process(graphics);
    
graphics.setColor(this->RED);
    

    std::vector<char> charArray;;
    

    std::vector<char> charArray2;;
    

    int32_t size2= 0;;
    

    int32_t size3= 0;;
    

    int32_t size = this->baseRefreshHelperCharArray.size() -2;;
    




                        for (
    int32_t index = size;index >= 0; )
        {
charArray= this->baseRefreshHelperCharArray[index];
    
charArray2= this->baseRefreshHelperCharArray[index +1];
    
size2= charArray.size();
    
size3= charArray2.size();
    
graphics.drawChars(charArray, 0, size2, 0, this->yArray[index], 0);
    
graphics.drawChars(charArray2, 0, size3, size2 *this->defaultStringWidth, this->yArray[index +1], 0);
    
}

}


};

            



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
        
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
#include <org/allbinary/layer/PositionInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LineAnimation: public Animation, public ColorCompositeInterface, public PositionInterface {

    private: std::vector<std::vector<int32_t>> newLine = std::vector<std::vector<int32_t>>(2, std::vector<int32_t>(2));

    private: std::vector<std::vector<int32_t>> tempLine = NullUtil::getInstance().NULL_INT_ARRAY_ARRAY;

    private: std::vector<std::vector<int32_t>> line = std::vector<std::vector<int32_t>>(2, std::vector<int32_t>(2));

public: LineAnimation(BasicColor basicColor){
this->setBasicColorP(basicColor);
    
}


    public: void init(int32_t x, int32_t y){
this->newLine[0][0]= x;
    
this->newLine[0][1]= y;
    
this->newLine[1][0]= x;
    
this->newLine[1][1]= y;
    
this->tempLine= this->line;
    
this->line= this->newLine;
    
this->newLine= this->tempLine;
    
}


    public: void setPosition(int32_t x, int32_t y, int32_t z){
this->newLine[0][0]= this->line[1][0];
    
this->newLine[0][1]= this->line[1][1];
    
this->newLine[1][0]= x;
    
this->newLine[1][1]= y;
    
this->tempLine= this->line;
    
this->line= this->newLine;
    
this->newLine= this->tempLine;
    
}


    public: void paintXY(Graphics graphics, int32_t x, int32_t y){

    std::vector<std::vector<int32_t>> currentLine = this->line;;
    
this->basicSetColorUtil.setBasicColorP3(graphics, this->getBasicColorP(), this->getColor());
    
graphics.drawLine(currentLine[0][0], currentLine[0][1], currentLine[1][0], currentLine[1][1]);
    
}


    public: void nextFrame(){
}


};

            


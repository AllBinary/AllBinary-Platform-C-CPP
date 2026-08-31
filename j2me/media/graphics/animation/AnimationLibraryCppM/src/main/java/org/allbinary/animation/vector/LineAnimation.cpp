
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
        



#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/animation/Animation.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/ColorCompositeInterface.h>

      
#include <org/allbinary/layer/PositionInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LineAnimation: public Animation: public ColorCompositeInterface, public PositionInterface {
        

    private: newLine: std::vector<std::vector<int32_t>> = new Array(2).fill(null).map(() => new Array(2).fill(0));

    private: tempLine: std::vector<std::vector<int32_t>> = NullUtil.getInstance()!.NULL_INT_ARRAY_ARRAY;

    private: line: std::vector<std::vector<int32_t>> = new Array(2).fill(null).map(() => new Array(2).fill(0));

public constructor (BasicColor basicColor){

            super();
        this.setBasicColorP(basicColor);
    
}


    public init(int32_t x, int32_t y){
this.newLine[0]![0]= x;
    
this.newLine[0]![1]= y;
    
this.newLine[1]![0]= x;
    
this.newLine[1]![1]= y;
    
this.tempLine= this.line;
    
this.line= this.newLine;
    
this.newLine= this.tempLine;
    
}


    public setPosition(int32_t x, int32_t y, int32_t z){
this.newLine[0]![0]= this.line[1]![0]!;
    
this.newLine[0]![1]= this.line[1]![1]!;
    
this.newLine[1]![0]= x;
    
this.newLine[1]![1]= y;
    
this.tempLine= this.line;
    
this.line= this.newLine;
    
this.newLine= this.tempLine;
    
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){

    currentLine: std::vector<std::vector<int32_t>> = this.line;;
    
this.basicSetColorUtil!.setBasicColorP3(graphics, this.getBasicColorP(), this.getColor());
    
graphics.drawLine(currentLine[0]![0]!, currentLine[0]![1]!, currentLine[1]![0]!, currentLine[1]![1]!);
    
}


    public nextFrame(){
}


};

            


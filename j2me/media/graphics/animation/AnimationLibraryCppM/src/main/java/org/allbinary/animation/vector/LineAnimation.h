
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_VECTOR_LINEANIMATION_H
        #define ORG_ALLBINARY_ANIMATION_VECTOR_LINEANIMATION_H

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

public constructor (BasicColor basicColor);

    public init(int32_t x, int32_t y);

    public setPosition(int32_t x, int32_t y, int32_t z);

    public paintXY(Graphics graphics, int32_t x, int32_t y);

    public nextFrame();

};

            


        #endif //ORG_ALLBINARY_ANIMATION_VECTOR_LINEANIMATION_H

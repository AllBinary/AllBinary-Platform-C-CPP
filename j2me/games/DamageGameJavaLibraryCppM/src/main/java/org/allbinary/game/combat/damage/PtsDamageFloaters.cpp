
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

      
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/color/BasicColorArrayIndexer.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/color/BasicColorSetUtil.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/logic/java/character/CharArrayFactory.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
#include <org/allbinary/util/CircularIndexUtil.h>

      
#include <org/allbinary/view/ViewPosition.h>

      
#include <org/allbinary/view/ViewPositionBase.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DamageFloaters.h"

class PtsDamageFloaters: public DamageFloaters {
        

    private: static const basicColorArrayIndexer: BasicColorArrayIndexer = new BasicColorArrayIndexer(
                                                [
                                                    BasicColorFactory.getInstance()!.WHITE,BasicColorFactory.getInstance()!.RED,BasicColorFactory.getInstance()!.YELLOW,BasicColorFactory.getInstance()!.BLUE
                                                ]);

    const basicSetColorUtil: BasicColorSetUtil = BasicColorSetUtil.getInstance()!;

    private: layerInterface: AllBinaryLayer;

    private: lastDamage: std::vector<int32_t> = new Array(5);

    private: lastDamageString: std::vector<std::vector<char>> = new Array(5).fill(null).map(() => new Array(0).fill(0));

    private: lastDamageStringSizeArray: std::vector<int32_t> = new Array(5);

    private: circularIndexUtil: CircularIndexUtil = CircularIndexUtil.createInstance(5)!;

    private: const primitiveLongUtil: PrimitiveLongUtil;

public constructor (AllBinaryLayer layerInterface){

            super();
        this.primitiveLongUtil= PrimitiveLongUtil.createPowerOfTen(100000);
    
this.layerInterface= layerInterface;
    

    CHAR_ARRAY: std::vector<char> = CharArrayFactory.getInstance()!.getZeroCharArray()!;;
    




                        for (
    index: int32_t = this.lastDamageString!.length -1;index >= 0; index--)
        {
this.lastDamageString[index]= CHAR_ARRAY;
    
}

}


    public add(int32_t damage){

    index: int32_t = this.circularIndexUtil!.getIndex()!;;
    
this.lastDamage[index]= damage;
    
this.lastDamageString[index]= this.primitiveLongUtil!.getCharArray(this.lastDamage[index]!);
    
this.lastDamageStringSizeArray[index]= this.primitiveLongUtil!.getCurrentTotalDigits();
    
this.circularIndexUtil!.next();
    
}


    private: const myRandomFactory: MyRandomFactory = MyRandomFactory.getInstance()!;

    public paint(Graphics graphics){

    viewPosition: ViewPositionBase = this.layerInterface!.getViewPosition()!;;
    

    x: int32_t = viewPosition!.getX()!;;
    

    y: int32_t = viewPosition!.getY()!;;
    




                        for (
    index: int32_t = this.lastDamage!.length -1;index >= 0; index--)
        {

                        if(this.lastDamage[index] != 0)
                        
                                    {
                                    
    delta: int32_t = 10 *(index +2);;
    
this.basicSetColorUtil!.setBasicColorP(graphics, PtsDamageFloaters.basicColorArrayIndexer!.get());
    
graphics.drawChars(this.lastDamageString[index]!, 0, this.lastDamageStringSizeArray[index]!, x -this.myRandomFactory!.getNextInt(delta), y -delta, 0);
    
PtsDamageFloaters.basicColorArrayIndexer!.next();
    

                                    }
                                
this.lastDamage[index]= 0;
    
}

}


};

            


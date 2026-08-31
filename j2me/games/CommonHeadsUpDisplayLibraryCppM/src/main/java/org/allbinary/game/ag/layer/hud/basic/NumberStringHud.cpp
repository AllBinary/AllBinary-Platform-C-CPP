
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
        



            #include "../../../../../../../java/lang/RuntimeException.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/game/graphics/hud/BasicHudFactory.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/logic/math/PrimitiveLongSingleton.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NumberStringHud: public BasicHud: public PaintableInterface {
        

    private: const primitiveLongUtil: PrimitiveLongUtil;

    private: const prependString: string;

    private: const PREPEND_STRING: std::vector<char>;

    private: value: int32_t;

    private: max: int32_t;

    private: offset: int32_t= 0;

    private: valueString: std::vector<char>;

    private: valueTotalDigits: int32_t= 0;

public constructor (string prependString, int32_t max, int32_t location, int32_t direction, int32_t bufferZone, BasicColor basicColor){
            super(location, direction, bufferZone, basicColor);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.prependString= prependString;
    
this.PREPEND_STRING= prependString!.split('');
    
this.valueString= PrimitiveLongSingleton.getInstance()!.NUMBER_CHAR_ARRAYS[0]!;
    
this.primitiveLongUtil= PrimitiveLongUtil.createPowerOfTen(max +1);
    
this.max= max;
    
this.value= 0;
    

                        if(direction == 0)
                        
                                    {
                                    


                            throw new RuntimeException(BasicHudFactory.getInstance()!.DIRECTION_EXCEPTION);
                    

                                    }
                                
}


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.offset= font.stringWidth(this.prependString) +MyFontProcessor.defaultCharWidth(font);
    
super.updateMeasurement(graphics);
    
}


    public int32_t get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.value;
    
}


    public add(int32_t value){
this.set(this.value +value);
    
}


    public set(int32_t value){
this.value= value;
    

                        if(this.value > this.max)
                        
                                    {
                                    this.value= 0;
    

                                    }
                                
this.valueString= this.primitiveLongUtil!.getCharArray(this.value);
    
this.valueTotalDigits= this.primitiveLongUtil!.getCurrentTotalDigits();
    
}


    public reduce(int32_t value){
this.set(this.value -value);
    
}


    public paint(Graphics graphics){
super.paintDX(graphics, this.PREPEND_STRING, 0, this.PREPEND_STRING.length, this.valueString, 0, this.valueTotalDigits, this.offset);
    
}


    public paintXY(Graphics graphics, int32_t x, int32_t y){
this.myFontProcessor!.process(graphics);
    

    charArray: std::vector<char> = this.PREPEND_STRING;;
    

    len: int32_t = this.PREPEND_STRING.length
                ;;
    

    charArray2: std::vector<char> = this.valueString;;
    

    len2: int32_t = this.valueTotalDigits;;
    
this.basicSetColorUtil!.setBasicColorP(graphics, this.getBasicColorP());
    
graphics.drawChars(charArray, 0, len, x, y, 0);
    
graphics.drawChars(charArray2, 0, len2, x -this.offset, y, 0);
    
}


    public paintThreed(Graphics graphics){
}


};

            


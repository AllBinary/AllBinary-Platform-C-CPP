
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
        



            #include "../../../../../../../../java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LevelHudWidget: public BasicHud: public PaintableInterface {
        

                //@Throws(Exception.constructor)
            
    public static LevelHudWidget createHud(int32_t maxlevel, int32_t location, int32_t direction){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new LevelHudWidget(maxlevel, location, direction);
    
}


    private: level: int32_t;

    private: maxlevel: int32_t;

    private: const levelString: std::vector<char>;

    private: levelNumberCharArray: std::vector<char> = NullUtil.getInstance()!.NULL_CHAR_ARRAY;

    private: levelNumberTotalDigits: int32_t= 0;

    private: offset: int32_t= 0;

    private: const primitiveLongUtil: PrimitiveLongUtil;

public constructor (int32_t maxlevel, int32_t location, int32_t direction){
            super(location, direction, 2, BasicColorFactory.getInstance()!.GREY);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.primitiveLongUtil= PrimitiveLongUtil.createPowerOfTen(1000);
    

    LEVEL: string = "Lv ";;
    
this.levelString= LEVEL.split('');
    
this.maxlevel= maxlevel;
    
this.level= maxlevel;
    
this.update();
    
this.updateMaxHeight= 14;
    
}


    public updateMeasurement(Graphics graphics){

    font: Font = graphics.getFont()!;;
    
this.updateMaxWidth= font.getSize() *4;
    
this.offset= font.charsWidth(this.levelString, 0, this.levelString!.length) +font.getSize();
    
super.updateMeasurement(graphics);
    
}


    update(){
this.levelNumberCharArray= this.primitiveLongUtil!.getCharArray(this.level);
    
this.levelNumberTotalDigits= this.primitiveLongUtil!.getCurrentTotalDigits();
    
}


    public setLevel(int32_t level){
this.level= level;
    
this.update();
    
}


    public nextLevel(){
this.level++;
    
this.update();
    
}


    public previousLevel(){
this.level--;
    

                        if(this.level < 0)
                        
                                    {
                                    this.level= 0;
    

                                    }
                                
this.update();
    
}


    public bool isComplete(){

                        if(this.level <= this.maxlevel)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    public paint(Graphics graphics){
super.paintDX(graphics, this.levelString, 0, this.levelString!.length, this.levelNumberCharArray, 0, this.levelNumberTotalDigits, this.offset);
    
}


    public paintThreed(Graphics graphics){
}


};

            


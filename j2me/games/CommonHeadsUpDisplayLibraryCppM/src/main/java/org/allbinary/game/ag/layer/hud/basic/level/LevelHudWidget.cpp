
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
        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/graphics/color/BasicColorFactory.h>

      
#include <org/allbinary/graphics/paint/PaintableInterface.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LevelHudWidget: public BasicHud, public PaintableInterface {

                //@Throws(Exception.constructor)
            
    public: static LevelHudWidget createHud(int32_t maxlevel, int32_t location, int32_t direction){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LevelHudWidget(maxlevel, location, direction);
    
}


    private: int32_t level;

    private: int32_t maxlevel;

    private: std::vector<char> levelString;

    private: std::vector<char> levelNumberCharArray = NullUtil::getInstance().NULL_CHAR_ARRAY;

    private: int32_t levelNumberTotalDigits= 0;

    private: int32_t offset= 0;

    private: PrimitiveLongUtil primitiveLongUtil;

public: LevelHudWidget(int32_t maxlevel, int32_t location, int32_t direction) : BasicHud(location, direction, 2, BasicColorFactory::getInstance().GREY){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->primitiveLongUtil= PrimitiveLongUtil::createPowerOfTen(1000);
    

    std::string LEVEL = "Lv ";;
    
this->levelString= LEVEL::split('');
    
this->maxlevel= maxlevel;
    
this->level= maxlevel;
    
this->update();
    
this->updateMaxHeight= 14;
    
}


    public: void updateMeasurement(Graphics graphics){

    Font font = graphics.getFont();;
    
this->updateMaxWidth= font.getSize() *4;
    
this->offset= font.charsWidth(this->levelString, 0, this->levelString.size()) +font.getSize();
    
super.updateMeasurement(graphics);
    
}


    private: void update(){
this->levelNumberCharArray= this->primitiveLongUtil.getCharArray(this->level);
    
this->levelNumberTotalDigits= this->primitiveLongUtil.getCurrentTotalDigits();
    
}


    public: void setLevel(int32_t level){
this->level= level;
    
this->update();
    
}


    public: void nextLevel(){
this->level++;
    
this->update();
    
}


    public: void previousLevel(){
this->level--;
    

                        if(this->level < 0)
                        
                                    {
                                    this->level= 0;
    

                                    }
                                
this->update();
    
}


    public: bool isComplete(){

                        if(this->level <= this->maxlevel)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                        }
                            
}


    public: void paint(Graphics graphics){
super.paintDX(graphics, this->levelString, 0, this->levelString.size(), this->levelNumberCharArray, 0, this->levelNumberTotalDigits, this->offset);
    
}


    public: void paintThreed(Graphics graphics){
}


};

            



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
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <javax/microedition/lcdui/Font.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/opengles/OpenGLFeatureUtil.h>

      
#include <org/allbinary/game/graphics/hud/BasicHud.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/font/MyFontProcessor.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/logic/math/PrimitiveLongSingleton.h>

      
#include <org/allbinary/logic/math/PrimitiveLongUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class VelocityWidget: public BasicHud {

    private: const std::vector<char> KILOMETERS_PER_HOUR_STR = [' ','k','m','/','h'];

    private: const int32_t totalChars = this->KILOMETERS_PER_HOUR_STR.size();

    private: int32_t velocity;

    private: int32_t maxVelocity;

    private: std::vector<char> string = PrimitiveLongSingleton::getInstance()->ZERO;

    private: int32_t totalDigits = 1;

    private: int32_t powerOfTenVelocity;

    private: PrimitiveLongUtil* primitiveLongUtil;

    private: int32_t offset = 0;

    private: int32_t offset2 = 0;

public: VelocityWidget(int32_t powerOfTenVelocity, int32_t location, int32_t direction, BasicColor* basicColor) : BasicHud(location, direction, 2, basicColor){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->powerOfTenVelocity= powerOfTenVelocity;
    
this->maxVelocity= powerOfTenVelocity;
    
this->velocity= 0;
    
this->primitiveLongUtil= PrimitiveLongUtil::createPowerOfTen(powerOfTenVelocity);
    
this->updateMaxHeight= 14;
    
}


    public: void updateMeasurement(Graphics* graphics){

    Font* font = graphics->getFont();;
    
this->updateMaxWidth= font->getSize() *(5 +MathUtil::getInstance()->getTotalDigits(this->powerOfTenVelocity) +1);
    
super.updateMeasurement(graphics);
    
this->offset= MyFontProcessor::defaultStringWidth(font, this->primitiveLongUtil->getMaxDigits()) +MyFontProcessor::defaultStringWidth(font, 2);
    
this->offset2= this->offset -MyFontProcessor::defaultStringWidth(font, this->totalDigits) -MyFontProcessor::defaultStringWidth(font, 2);
    
}


    public: int32_t get(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->velocity;
    
}


    public: void add(int32_t value){
this->set(this->velocity +value);
    
}


    public: void set(int32_t value){

    int32_t lastVelocity = this->velocity;;
    
this->velocity= value;
    

                        if(this->velocity > this->maxVelocity)
                        
                                    {
                                    this->velocity= 0;
    

                                    }
                                

                        if(lastVelocity != this->velocity)
                        
                                    {
                                    this->string= this->primitiveLongUtil->getCharArray(this->velocity *18);
    

                        if(OpenGLFeatureUtil::getInstance()->isAnyThreed())
                        
                                    {
                                    this->totalDigits= this->primitiveLongUtil->getCurrentTotalDigits() +1;
    

                                    }
                                
                        else {
                            this->totalDigits= this->primitiveLongUtil->getCurrentTotalDigits();
    

                        }
                            
this->myFontProcessor= this->updateMyFontProcessor;
    

                                    }
                                
}


    public: void reduce(int32_t value){
this->set(this->velocity -value);
    
}


    public: void paint(Graphics* graphics){
super.paintDXY(graphics, this->string, 0, this->totalDigits, this->KILOMETERS_PER_HOUR_STR, 0, this->totalChars, this->offset2, this->offset);
    
}


};

            


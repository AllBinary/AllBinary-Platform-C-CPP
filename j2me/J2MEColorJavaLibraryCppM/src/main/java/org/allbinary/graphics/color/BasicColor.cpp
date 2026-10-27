
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/color/BasicColorUtil.h"

class BasicColor
            : public Object
         {

    private: std::string name;

    private: int32_t value;

    private: float redComponent;

    private: float greenComponent;

    private: float blueComponent;

    private: float alphaComponent;

    public: int16_t red;

    public: int16_t green;

    public: int16_t blue;

    public: int16_t alpha;

: BasicColor(int32_t alphaValue, int32_t value, std::string name){
this->name= name;
    

    int32_t tempValue= 0;;
    

    BasicColorUtil* basicColorUtil = BasicColorUtil::getInstance();;
    

                        if(basicColorUtil->isAlpha)
                        
                                    {
                                    
                        if(basicColorUtil->ffOpaque)
                        
                                    {
                                    tempValue= alphaValue | value;
    

                                    }
                                
                        else {
                            tempValue= 0x00000000 | value;
    

                        }
                            

                                    }
                                
                        else {
                            tempValue= value;
    

                        }
                            

    int32_t alphaInt = ((tempValue>>24)&255);;
    
this->alpha= alphaInt;
    
this->alphaComponent= (alphaInt) /255;
    

    int32_t redInt = ((tempValue>>16)&255);;
    
this->red= redInt;
    
this->redComponent= (redInt) /255;
    

    int32_t greenInt = ((tempValue>>8)&255);;
    
this->green= greenInt;
    
this->greenComponent= (greenInt) /255;
    

    int32_t blueInt = ((tempValue)&255);;
    
this->blue= blueInt;
    
this->blueComponent= (blueInt) /255;
    
this->value= tempValue;
    
}


    public: int32_t intValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->value;
    
}


    public: int32_t toInt(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->value;
    
}


    public: std::string toString(){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append("BasicColor: ");
    
stringBuffer->append("Alpha: ");
    
stringBuffer->appendshort(this->alpha);
    
stringBuffer->append(" Red: ");
    
stringBuffer->appendshort(this->red);
    
stringBuffer->append(" Green: ");
    
stringBuffer->appendshort(this->green);
    
stringBuffer->append(" Blue: ");
    
stringBuffer->appendshort(this->blue);
    
stringBuffer->append(" Value: ");
    
stringBuffer->appendint(this->value);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: float getRedComponent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->redComponent;
    
}


    public: float getGreenComponent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->greenComponent;
    
}


    public: float getBlueComponent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->blueComponent;
    
}


    public: float getAlphaComponent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->alphaComponent;
    
}


};

            


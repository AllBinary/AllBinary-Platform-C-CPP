
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
        



            #include "../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicColorUtil.h"

class BasicColor
            : public Object
         {
        

    private: const name: string;

    private: const value: int32_t;

    private: const redComponent: float;

    private: const greenComponent: float;

    private: const blueComponent: float;

    private: const alphaComponent: float;

    public const red: int16_t;

    public const green: int16_t;

    public const blue: int16_t;

    public const alpha: int16_t;

 constructor (int32_t alphaValue, int32_t value, string name){

            super();
        this.name= name;
    

    tempValue: int32_t= 0;;
    

    basicColorUtil: BasicColorUtil = BasicColorUtil.getInstance()!;;
    

                        if(basicColorUtil!.isAlpha)
                        
                                    {
                                    
                        if(basicColorUtil!.ffOpaque)
                        
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
                            

    alphaInt: int32_t = ((tempValue>>24)&255);;
    
this.alpha= alphaInt;
    
this.alphaComponent= (alphaInt) /255;
    

    redInt: int32_t = ((tempValue>>16)&255);;
    
this.red= redInt;
    
this.redComponent= (redInt) /255;
    

    greenInt: int32_t = ((tempValue>>8)&255);;
    
this.green= greenInt;
    
this.greenComponent= (greenInt) /255;
    

    blueInt: int32_t = ((tempValue)&255);;
    
this.blue= blueInt;
    
this.blueComponent= (blueInt) /255;
    
this.value= tempValue;
    
}


    public int32_t intValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.value;
    
}


    public int32_t toInt(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.value;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("BasicColor: ");
    
stringBuffer!.append("Alpha: ");
    
stringBuffer!.appendshort(this.alpha);
    
stringBuffer!.append(" Red: ");
    
stringBuffer!.appendshort(this.red);
    
stringBuffer!.append(" Green: ");
    
stringBuffer!.appendshort(this.green);
    
stringBuffer!.append(" Blue: ");
    
stringBuffer!.appendshort(this.blue);
    
stringBuffer!.append(" Value: ");
    
stringBuffer!.appendint(this.value);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public float getRedComponent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.redComponent;
    
}


    public float getGreenComponent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.greenComponent;
    
}


    public float getBlueComponent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.blueComponent;
    
}


    public float getAlphaComponent(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.alphaComponent;
    
}


};

            


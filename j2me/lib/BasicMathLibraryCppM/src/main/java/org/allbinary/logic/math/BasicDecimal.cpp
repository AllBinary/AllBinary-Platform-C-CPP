
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
        
            #include "../../../../java/lang/Long.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ScaleFactorFactory.h"

class BasicDecimal
            : public Object
         {
        

    public static const ZERO_BIGDECIMAL: BasicDecimal = new BasicDecimal(0);

    public static BasicDecimal createBigDecimal(BasicDecimal bigDecimal){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicDecimal(bigDecimal!.getUnscaled());
    
}


    private: units: int64_t;

public constructor (int64_t units){

            super();
        this.units= units;
    
this.updateScaled();
    
}


    public setint(int32_t value){
this.units= value;
    
this.updateScaled();
    
}


    public setlong(int64_t value){
this.units= value;
    
this.updateScaled();
    
}


    public set(BasicDecimal bigDecimal){
this.units= bigDecimal!.getUnscaled();
    
this.updateScaled();
    
}


    public addint(int32_t value){
this.units= this.units +value;
    
this.updateScaled();
    
}


    public addlong(int64_t value){
this.units= this.units +value;
    
this.updateScaled();
    
}


    public add(BasicDecimal bigDecimal){
this.units= this.units +bigDecimal!.getUnscaled();
    
this.updateScaled();
    
}


    public subtractint(int32_t value){
this.units= this.units -value;
    
this.updateScaled();
    
}


    public subtractlong(int64_t value){
this.units= this.units -value;
    
this.updateScaled();
    
}


    public subtract(BasicDecimal bigDecimal){
this.units= this.units -bigDecimal!.getUnscaled();
    
this.updateScaled();
    
}


    public multiplyint(int32_t value){
this.units= this.units *value;
    
this.updateScaled();
    
}


    public multiplylong(int64_t value){
this.units= this.units *value;
    
this.updateScaled();
    
}


    public multiply(BasicDecimal bigDecimal){
this.units= this.units *bigDecimal!.getUnscaled();
    
this.updateScaled();
    
}


    public divideint(int32_t value){
this.units= this.units /value;
    
this.updateScaled();
    
}


    public dividelong(int64_t value){
this.units= this.units /value;
    
this.updateScaled();
    
}


    public divide(BasicDecimal bigDecimal){
this.units= this.units /bigDecimal!.getUnscaled();
    
this.updateScaled();
    
}


    public int64_t getUnscaled(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.units;
    
}


    private: scaled: int32_t= 0;

    updateScaled(){
this.scaled= static_cast<int32_t>((this.units /this.factorValue));
    
}


    public int32_t getScaled(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scaled;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (this.units).toString();;
    
}


    private: const factor: int32_t = ScaleFactorFactory.getInstance()!.DEFAULT_SCALE_FACTOR;

    private: const factorValue: int32_t = ScaleFactorFactory.getInstance()!.DEFAULT_SCALE_VALUE;

    public int32_t getScaledFactor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.factor;
    
}


    public int32_t getScaledFactorValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.factorValue;
    
}


};

            



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
        
            #include "java/lang/Long.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/math/ScaleFactorFactory.h"

class BasicDecimal
            : public Object
         {

    public: static BasicDecimal* ZERO_BIGDECIMAL() { static std::unique_ptr<BasicDecimal> value(new BasicDecimal(0)); return value.get(); }

    public: static BasicDecimal* createBigDecimal(BasicDecimal* bigDecimal){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicDecimal(bigDecimal->getUnscaled());
    
}


    private: int64_t units;

public: BasicDecimal(int64_t units){
this->units= units;
    
this->updateScaled();
    
}


    public: void setint(int32_t value){
this->units= value;
    
this->updateScaled();
    
}


    public: void setlong(int64_t value){
this->units= value;
    
this->updateScaled();
    
}


    public: void set(BasicDecimal* bigDecimal){
this->units= bigDecimal->getUnscaled();
    
this->updateScaled();
    
}


    public: void addint(int32_t value){
this->units= this->units +value;
    
this->updateScaled();
    
}


    public: void addlong(int64_t value){
this->units= this->units +value;
    
this->updateScaled();
    
}


    public: void add(BasicDecimal* bigDecimal){
this->units= this->units +bigDecimal->getUnscaled();
    
this->updateScaled();
    
}


    public: void subtractint(int32_t value){
this->units= this->units -value;
    
this->updateScaled();
    
}


    public: void subtractlong(int64_t value){
this->units= this->units -value;
    
this->updateScaled();
    
}


    public: void subtract(BasicDecimal* bigDecimal){
this->units= this->units -bigDecimal->getUnscaled();
    
this->updateScaled();
    
}


    public: void multiplyint(int32_t value){
this->units= this->units *value;
    
this->updateScaled();
    
}


    public: void multiplylong(int64_t value){
this->units= this->units *value;
    
this->updateScaled();
    
}


    public: void multiply(BasicDecimal* bigDecimal){
this->units= this->units *bigDecimal->getUnscaled();
    
this->updateScaled();
    
}


    public: void divideint(int32_t value){
this->units= this->units /value;
    
this->updateScaled();
    
}


    public: void dividelong(int64_t value){
this->units= this->units /value;
    
this->updateScaled();
    
}


    public: void divide(BasicDecimal* bigDecimal){
this->units= this->units /bigDecimal->getUnscaled();
    
this->updateScaled();
    
}


    public: int64_t getUnscaled(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->units;
    
}


    private: int32_t scaled= 0;

    private: void updateScaled(){
this->scaled= static_cast<int32_t>((this->units /this->factorValue));
    
}


    public: int32_t getScaled(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scaled;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return std::to_string(units);;
    
}


    private: const int32_t factor = ScaleFactorFactory::getInstance()->DEFAULT_SCALE_FACTOR;

    private: const int32_t factorValue = ScaleFactorFactory::getInstance()->DEFAULT_SCALE_VALUE;

    public: int32_t getScaledFactor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->factor;
    
}


    public: int32_t getScaledFactorValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->factorValue;
    
}


};

            



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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_BASICDECIMAL_CPP
        #define ORG_ALLBINARY_LOGIC_MATH_BASICDECIMAL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/math/BasicDecimal.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/math/ScaleFactorFactory.h"

auto BasicDecimal::ZERO_BIGDECIMAL_owner() -> BasicDecimal* { static std::unique_ptr<BasicDecimal> value(new BasicDecimal(0)); return value.get(); }
BasicDecimal* BasicDecimal::ZERO_BIGDECIMAL = BasicDecimal::ZERO_BIGDECIMAL_owner();

    auto BasicDecimal::createBigDecimal(BasicDecimal* bigDecimal) -> BasicDecimal*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new BasicDecimal(bigDecimal->getUnscaled());
    
}


BasicDecimal::BasicDecimal(int64_t units) : factor(ScaleFactorFactory::getInstance()->DEFAULT_SCALE_FACTOR), factorValue(ScaleFactorFactory::getInstance()->DEFAULT_SCALE_VALUE){
this->units= units;
    
this->updateScaled();
    
}


    auto BasicDecimal::setint(int32_t value) -> void{
this->units= value;
    
this->updateScaled();
    
}


    auto BasicDecimal::setlong(int64_t value) -> void{
this->units= value;
    
this->updateScaled();
    
}


    auto BasicDecimal::set(BasicDecimal* bigDecimal) -> void{
this->units= bigDecimal->getUnscaled();
    
this->updateScaled();
    
}


    auto BasicDecimal::addint(int32_t value) -> void{
this->units= this->units +value;
    
this->updateScaled();
    
}


    auto BasicDecimal::addlong(int64_t value) -> void{
this->units= this->units +value;
    
this->updateScaled();
    
}


    auto BasicDecimal::add(BasicDecimal* bigDecimal) -> void{
this->units= this->units +bigDecimal->getUnscaled();
    
this->updateScaled();
    
}


    auto BasicDecimal::subtractint(int32_t value) -> void{
this->units= this->units -value;
    
this->updateScaled();
    
}


    auto BasicDecimal::subtractlong(int64_t value) -> void{
this->units= this->units -value;
    
this->updateScaled();
    
}


    auto BasicDecimal::subtract(BasicDecimal* bigDecimal) -> void{
this->units= this->units -bigDecimal->getUnscaled();
    
this->updateScaled();
    
}


    auto BasicDecimal::multiplyint(int32_t value) -> void{
this->units= this->units *value;
    
this->updateScaled();
    
}


    auto BasicDecimal::multiplylong(int64_t value) -> void{
this->units= this->units *value;
    
this->updateScaled();
    
}


    auto BasicDecimal::multiply(BasicDecimal* bigDecimal) -> void{
this->units= this->units *bigDecimal->getUnscaled();
    
this->updateScaled();
    
}


    auto BasicDecimal::divideint(int32_t value) -> void{
this->units= this->units /value;
    
this->updateScaled();
    
}


    auto BasicDecimal::dividelong(int64_t value) -> void{
this->units= this->units /value;
    
this->updateScaled();
    
}


    auto BasicDecimal::divide(BasicDecimal* bigDecimal) -> void{
this->units= this->units /bigDecimal->getUnscaled();
    
this->updateScaled();
    
}


    auto BasicDecimal::getUnscaled() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->units;
    
}


    auto BasicDecimal::updateScaled() -> void{
this->scaled= static_cast<int32_t>((this->units /this->factorValue));
    
}


    auto BasicDecimal::getScaled() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->scaled;
    
}


    auto BasicDecimal::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return std::to_string(units);;
    
}


    auto BasicDecimal::getScaledFactor() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->factor;
    
}


    auto BasicDecimal::getScaledFactorValue() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->factorValue;
    
}




        #endif //ORG_ALLBINARY_LOGIC_MATH_BASICDECIMAL_CPP

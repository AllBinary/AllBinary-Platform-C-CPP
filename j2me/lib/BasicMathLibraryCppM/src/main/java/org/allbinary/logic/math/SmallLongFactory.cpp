
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_SMALLLONGFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_MATH_SMALLLONGFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/math/SmallLongFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto SmallLongFactory::instance_owner() -> SmallLongFactory* { static std::unique_ptr<SmallLongFactory> value(new SmallLongFactory()); return value.get(); }
SmallLongFactory* SmallLongFactory::instance = SmallLongFactory::instance_owner();

    auto SmallLongFactory::getInstance() -> SmallLongFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SmallLongFactory::instance;
    
}


    auto SmallLongFactory::initWithRange(int32_t value, int32_t negativeValue) -> void{




                        for (
    int32_t index = value -1;index >= this->lastMin; index--)
        {
this->INTEGER_ARRAY[index +this->NEGATIVE_MAX]= int64_t(index);
    
}





                        for (
    int32_t index = negativeValue -1;index >= this->lastNegativeMin; index--)
        {
this->INTEGER_ARRAY[index]= int64_t( -index);
    
}


                        if(this->lastMin < value)
                        
                                    {
                                    this->lastMin= value;
    
this->MIN= value;
    

                                    }
                                

                        if(this->lastNegativeMin < negativeValue)
                        
                                    {
                                    this->lastNegativeMin= negativeValue;
    

                                    }
                                
}


    auto SmallLongFactory::init() -> void{

                        if(false)
                        
                                    {
                                    
                        if(this->lastMin < this->POSITIVE_MAX || this->lastNegativeMin < this->NEGATIVE_MAX)
                        
                                    {
                                    



                        for (
    int32_t index = this->POSITIVE_MAX -1;index >= this->lastMin; index--)
        {
this->INTEGER_ARRAY[index +this->NEGATIVE_MAX]= int64_t(index);
    
}





                        for (
    int32_t index = this->NEGATIVE_MAX -1;index >= this->lastNegativeMin; index--)
        {
this->INTEGER_ARRAY[index]= int64_t( -index);
    
}

this->lastMin= this->POSITIVE_MAX;
    
this->lastNegativeMin= this->NEGATIVE_MAX;
    

                                    }
                                

                                    }
                                
}


SmallLongFactory::SmallLongFactory() : INTEGER_ARRAY(std::vector<int64_t>(this->NEGATIVE_MAX +this->POSITIVE_MAX)), STRING_ARRAY(std::vector<std::string>(this->NEGATIVE_MAX +this->POSITIVE_MAX)){
}


    auto SmallLongFactory::getInstanceNoThrow(int64_t index) -> int64_t{

                        if(index +this->NEGATIVE_MAX > this->INTEGER_ARRAY.size() -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->INTEGER_ARRAY[ -1 +this->NEGATIVE_MAX];
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->INTEGER_ARRAY[(static_cast<int32_t>(index)) +this->NEGATIVE_MAX];
    
}


    auto SmallLongFactory::getString(int32_t index) -> std::string{

    int32_t i = index +this->NEGATIVE_MAX;;
    

                        if(this->STRING_ARRAY[i].empty())
                        
                                    {
                                    this->STRING_ARRAY[i]= std::to_string(this->INTEGER_ARRAY[i]);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->STRING_ARRAY[i];
    
}




        #endif //ORG_ALLBINARY_LOGIC_MATH_SMALLLONGFACTORY_CPP

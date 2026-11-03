
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_SMALLINTEGERSINGLETONFACTORY_CPP
        #define ORG_ALLBINARY_LOGIC_MATH_SMALLINTEGERSINGLETONFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/AndroidUtil.h>

      
#include <org/allbinary/J2MEUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto SmallIntegerSingletonFactory::instance_owner() -> SmallIntegerSingletonFactory* { static std::unique_ptr<SmallIntegerSingletonFactory> value(new SmallIntegerSingletonFactory()); return value.get(); }
SmallIntegerSingletonFactory* SmallIntegerSingletonFactory::instance = SmallIntegerSingletonFactory::instance_owner();

    auto SmallIntegerSingletonFactory::getInstance() -> SmallIntegerSingletonFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return SmallIntegerSingletonFactory::instance;
    
}


    auto SmallIntegerSingletonFactory::getMin() -> int32_t{

    int32_t minAllowed = this->getMinAllowed();;
    

                        if(this->MIN <= minAllowed)
                        
                                    {
                                    
                        if(J2MEUtil::isJ2ME())
                        
                                    {
                                    
                                    }
                                
                             else 
                        if(AndroidUtil::isAndroid())
                        
                                    {
                                    
    LogUtil* logUtil = LogUtil::getInstance();;
    
logUtil->putF((new StringMaker())->append("Android InputFactory was initialized before GameMidlet: ")->appendint(this->MIN)->toString(), this, "getMin");
    
this->initWithRange(0x291, 6);
    

                                    }
                                
                        else {
                            
    LogUtil* logUtil = LogUtil::getInstance();;
    
logUtil->putF((new StringMaker())->append("InputFactory was initialized before GameMidlet or KeyFactoryInitializer - Currently this is occurs on JS build by TouchMotionGestureFactory constructor: ")->appendint(this->MIN)->toString(), this, "getMin");
    
this->initWithRange(0x2D0, 6);
    

                        }
                            

                                    }
                                

                        if(this->MIN <= minAllowed)
                        
                                    {
                                    
    LogUtil* logUtil = LogUtil::getInstance();;
    
logUtil->put("This means you loaded the InputFactory before determining the platform input size requirements.", this, "getMin", new Exception());
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->MIN;
    
}


    auto SmallIntegerSingletonFactory::getMinAllowed() -> int32_t{

                        if(J2MEUtil::isJ2ME())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0;
    

                                    }
                                
                        else {
                            
                        if(AndroidUtil::isAndroid())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 0x101;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return 23;
    

                        }
                            

                        }
                            
}


    auto SmallIntegerSingletonFactory::initWithRange(int32_t value, int32_t negativeValue) -> void{




                        for (
    int32_t index = value -1;index >= this->lastMin; index--)
        {
this->INTEGER_ARRAY[index +this->NEGATIVE_MAX]= int32_t(index);
    
}





                        for (
    int32_t index = negativeValue -1;index >= this->lastNegativeMin; index--)
        {
this->INTEGER_ARRAY[index]= int32_t( -index);
    
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


    auto SmallIntegerSingletonFactory::init() -> void{

                        if(this->lastMin < this->POSITIVE_MAX || this->lastNegativeMin < this->NEGATIVE_MAX)
                        
                                    {
                                    



                        for (
    int32_t index = this->POSITIVE_MAX -1;index >= this->lastMin; index--)
        {
this->INTEGER_ARRAY[index +this->NEGATIVE_MAX]= int32_t(index);
    
}





                        for (
    int32_t index = this->NEGATIVE_MAX -1;index >= this->lastNegativeMin; index--)
        {
this->INTEGER_ARRAY[index]= int32_t( -index);
    
}

this->lastMin= this->POSITIVE_MAX;
    
this->MIN= this->lastMin;
    
this->lastNegativeMin= this->NEGATIVE_MAX;
    

                                    }
                                
}


SmallIntegerSingletonFactory::SmallIntegerSingletonFactory() : INTEGER_ARRAY(std::vector<int32_t>(this->NEGATIVE_MAX +this->POSITIVE_MAX)), STRING_ARRAY(std::vector<std::string>(this->NEGATIVE_MAX +this->POSITIVE_MAX)){
this->initWithRange(23, 0);
    
}


    auto SmallIntegerSingletonFactory::getAt(int32_t index) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->INTEGER_ARRAY[index +this->NEGATIVE_MAX];
    
}


    auto SmallIntegerSingletonFactory::getAtNoThrow(int32_t index) -> int32_t{

                        if(index +this->NEGATIVE_MAX > this->INTEGER_ARRAY.size() -1)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->INTEGER_ARRAY[ -1 +this->NEGATIVE_MAX];
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->INTEGER_ARRAY[index +this->NEGATIVE_MAX];
    
}


    auto SmallIntegerSingletonFactory::createInstance(int32_t index) -> int32_t{

    int32_t integer = this->getAt(index);;
    

                        if(false)
                        
                                    {
                                    integer= int32_t(index);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return integer;
    
}


    auto SmallIntegerSingletonFactory::getString(int32_t index) -> std::string{

    int32_t i = index +this->NEGATIVE_MAX;;
    

                        if(this->STRING_ARRAY[i].empty())
                        
                                    {
                                    this->STRING_ARRAY[i]= std::to_string(this->INTEGER_ARRAY[i]);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->STRING_ARRAY[i];
    
}




        #endif //ORG_ALLBINARY_LOGIC_MATH_SMALLINTEGERSINGLETONFACTORY_CPP

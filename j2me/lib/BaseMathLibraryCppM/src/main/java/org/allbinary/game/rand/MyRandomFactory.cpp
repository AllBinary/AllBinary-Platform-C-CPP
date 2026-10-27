
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
        



        #ifndef ORG_ALLBINARY_GAME_RAND_MYRANDOMFACTORY_CPP
        #define ORG_ALLBINARY_GAME_RAND_MYRANDOMFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/rand/MyRandomFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/Random.h>

      
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Do not use in client code for money related things.
auto MyRandomFactory::instance_owner() -> MyRandomFactory* { static std::unique_ptr<MyRandomFactory> value(new MyRandomFactory()); return value.get(); }
MyRandomFactory* MyRandomFactory::instance = MyRandomFactory::instance_owner();

    auto MyRandomFactory::getInstance() -> MyRandomFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MyRandomFactory::instance;
    
}


MyRandomFactory::MyRandomFactory() : mathUtil(MathUtil::getInstance()){
this->rand= new Random(System.currentTimeMillis());
    
}


    auto MyRandomFactory::setSeed(int64_t seed) -> void{
this->rand= new Random(seed);
    
}


    auto MyRandomFactory::getNextInt(int32_t range) -> int32_t{

    int32_t div = (Integer.MAX_VALUE /range) +1;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>((this->rand->nextInt() /div));
    
}


    auto MyRandomFactory::getAbsoluteNextInt(int32_t range) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mathUtil->abs(this->getNextInt(range));;
    
}


    auto MyRandomFactory::getAbsoluteNextIntAllowZero(int32_t range) -> int32_t{

                        if(range == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mathUtil->abs(this->getNextInt(range));;
    

                        }
                            
}


    auto MyRandomFactory::shuffle(std::vector<int32_t> intArray) -> void{
this->shuffleTotal(intArray, intArray.size() *7);
    
}


    auto MyRandomFactory::shuffleTotal(std::vector<int32_t> intArray, int32_t shuffleTotal) -> void{

    int32_t size = intArray.size();;
    

    int32_t randomIndex= 0;;
    

    int32_t randomIndex2= 0;;
    

    int32_t value= 0;;
    




                        for (
    int32_t index = 0;index < shuffleTotal; index++)
        {
randomIndex= this->getAbsoluteNextIntAllowZero(size);
    
randomIndex2= this->getAbsoluteNextIntAllowZero(size);
    
value= intArray[randomIndex];
    
intArray[randomIndex]= intArray[randomIndex2];
    
intArray[randomIndex2]= value;
    
}

}


    auto MyRandomFactory::shuffle2(std::vector<int32_t> intArray, std::vector<int32_t> intArray2) -> void{
this->shuffle2Total(intArray, intArray2, intArray.size() *7);
    
}


    auto MyRandomFactory::shuffle2Total(std::vector<int32_t> intArray, std::vector<int32_t> intArray2, int32_t shuffleTotal) -> void{

    int32_t size = intArray.size();;
    

    int32_t randomIndex= 0;;
    

    int32_t randomIndex2= 0;;
    

    int32_t value= 0;;
    

    int32_t value2= 0;;
    




                        for (
    int32_t index = 0;index < shuffleTotal; index++)
        {
randomIndex= this->getAbsoluteNextIntAllowZero(size);
    
randomIndex2= this->getAbsoluteNextIntAllowZero(size);
    
value= intArray[randomIndex];
    
value2= intArray2[randomIndex];
    
intArray[randomIndex]= intArray[randomIndex2];
    
intArray[randomIndex2]= value;
    
intArray2[randomIndex]= intArray2[randomIndex2];
    
intArray2[randomIndex2]= value2;
    
}

}


    auto MyRandomFactory::main(std::vector<std::string> args) -> void{

    MyRandomFactory* randomFactory = MyRandomFactory::getInstance();;
    

    StringMaker* stringBuilder = new StringMaker();;
    

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    int32_t size2 = 100;;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {
stringBuilder->appendint(randomFactory->getAbsoluteNextInt(3))->append(commonSeps->COMMA);
    
}

System.out.println(stringBuilder->toString());
    
stringBuilder->delete_(0, stringBuilder->length());
    

    std::vector<int32_t> intArray = std::vector<int32_t>(52);;
    

    std::vector<int32_t> intArray2 = std::vector<int32_t>(52);;
    

    int32_t size = intArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
intArray[index]= index;
    
intArray2[index]= index;
    
}

randomFactory->shuffle2(intArray, intArray2);
    




                        for (
    int32_t index = 0;index < size; index++)
        {
stringBuilder->appendint(intArray[index])->append(commonSeps->COMMA);
    
}

System.out.println(stringBuilder->toString());
    
stringBuilder->delete_(0, stringBuilder->length());
    




                        for (
    int32_t index = 0;index < size; index++)
        {
stringBuilder->appendint(intArray2[index])->append(commonSeps->COMMA);
    
}

System.out.println(stringBuilder->toString());
    

    bool found= false;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
found= false;
    




                        for (
    int32_t index2 = 0;index2 < size; index2++)
        {

                        if(intArray[index2] == index)
                        
                                    {
                                    found= true;
    

                                    }
                                
}


                        if(!found)
                        
                                    throw RuntimeException();
                                
}

}




        #endif //ORG_ALLBINARY_GAME_RAND_MYRANDOMFACTORY_CPP

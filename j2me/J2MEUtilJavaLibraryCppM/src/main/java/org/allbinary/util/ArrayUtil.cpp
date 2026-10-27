
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_UTIL_ARRAYUTIL_CPP
        #define ORG_ALLBINARY_UTIL_ARRAYUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/util/ArrayUtil.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Class.h"
        
            #include "java/lang/System.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

ArrayUtil::ArrayUtil() : mathUtil(MathUtil::getInstance()) {
        }
        auto ArrayUtil::instance_owner() -> ArrayUtil* { static std::unique_ptr<ArrayUtil> value(new ArrayUtil()); return value.get(); }
ArrayUtil* ArrayUtil::instance = ArrayUtil::instance_owner();

    auto ArrayUtil::getInstance() -> ArrayUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ArrayUtil::instance;
    
}


    auto ArrayUtil::copyOf(std::vector<Object*> original, int32_t newLength) -> std::vector<Object*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->copyOfType(original, newLength, Class::forType(typeid(original)));;
    
}


    auto ArrayUtil::copyOfType(std::vector<Object*> original, int32_t newLength, Class* newType) -> std::vector<Object*>{

    std::vector<Object*> copy = std::vector<Object*>(newLength);;
    
System.arraycopy(original, 0, copy, 0, this->mathUtil->min(original.size(), newLength));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    auto ArrayUtil::copyOfbyte(std::vector<int8_t> original, int32_t newLength) -> std::vector<int8_t>{

    std::vector<int8_t> copy = std::vector<int8_t>(newLength);;
    
System.arraycopy(original, 0, copy, 0, this->mathUtil->min(original.size(), newLength));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    auto ArrayUtil::copyOfshort(std::vector<int16_t> original, int32_t newLength) -> std::vector<int16_t>{

    std::vector<int16_t> copy = std::vector<int16_t>(newLength);;
    
System.arraycopy(original, 0, copy, 0, this->mathUtil->min(original.size(), newLength));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    auto ArrayUtil::copyOfint(std::vector<int32_t> original, int32_t newLength) -> std::vector<int32_t>{

    std::vector<int32_t> copy = std::vector<int32_t>(newLength);;
    
System.arraycopy(original, 0, copy, 0, this->mathUtil->min(original.size(), newLength));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    auto ArrayUtil::copyOflong(std::vector<int64_t> original, int32_t newLength) -> std::vector<int64_t>{

    std::vector<int64_t> copy = std::vector<int64_t>(newLength);;
    
System.arraycopy(original, 0, copy, 0, this->mathUtil->min(original.size(), newLength));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    auto ArrayUtil::copyOfchar(std::vector<char> original, int32_t newLength) -> std::vector<char>{

    std::vector<char> copy = std::vector<char>(newLength);;
    
System.arraycopy(original, 0, copy, 0, this->mathUtil->min(original.size(), newLength));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    auto ArrayUtil::copyOffloat(std::vector<float> original, int32_t newLength) -> std::vector<float>{

    std::vector<float> copy = std::vector<float>(newLength);;
    
System.arraycopy(original, 0, copy, 0, this->mathUtil->min(original.size(), newLength));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    auto ArrayUtil::copyOfdouble(std::vector<double> original, int32_t newLength) -> std::vector<double>{

    std::vector<double> copy = std::vector<double>(newLength);;
    
System.arraycopy(original, 0, copy, 0, this->mathUtil->min(original.size(), newLength));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    auto ArrayUtil::copyOfboolean(std::vector<bool> original, int32_t newLength) -> std::vector<bool>{

    std::vector<bool> copy = std::vector<bool>(newLength);;
    
System.arraycopy(original, 0, copy, 0, this->mathUtil->min(original.size(), newLength));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    auto ArrayUtil::reverse(std::vector<int32_t> intArray) -> void{

    int32_t length = intArray.size() -1;;
    

    int32_t temp= 0;;
    

    int32_t size = length /2;;
    




                        for (
    int32_t index = 0;index <= size; index++)
        {
temp= intArray[index];
    
intArray[index]= intArray[length -index];
    
intArray[length -index]= temp;
    
}

}


    auto ArrayUtil::flip(std::vector<int32_t> intArray, int32_t width, int32_t height) -> void{

    int32_t length = height -1;;
    

    int32_t temp= 0;;
    

    int32_t index= 0;;
    

    int32_t rowIndex= 0;;
    




                        for (
    int32_t y = 0;y <= length /2; y++)
        {




                        for (
    int32_t x = 0;x < width; x++)
        {
rowIndex= ((length -y) *width);
    
index= x +(y *width);
    
temp= intArray[index];
    
intArray[index]= intArray[rowIndex +x];
    
intArray[rowIndex +x]= temp;
    
}

}

}


    auto ArrayUtil::toStringFromTwoDimensionaArray(std::vector<std::vector<int32_t>> twoDimensionalIntArray) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    int32_t endIndex = twoDimensionalIntArray.size();;
    

    int32_t endIndex2 = twoDimensionalIntArray[0].size();;
    




                        for (
    int32_t index = 0;index < endIndex; index++)
        {
stringBuffer->append(commonSeps->BRACE_OPEN);
    




                        for (
    int32_t index2 = 0;index2 < endIndex2; index2++)
        {
stringBuffer->appendint(twoDimensionalIntArray[index][index2]);
    
stringBuffer->append(commonSeps->COMMA_SEP);
    
}

stringBuffer->append(commonSeps->BRACE_CLOSE);
    
stringBuffer->append(commonSeps->NEW_LINE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    auto ArrayUtil::toStringFromObjectArray(std::vector<Object*> objectArray) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    




                        for (
    int32_t index = 0;index < objectArray.size(); index++)
        {
stringBuffer->append(StringUtil::getInstance()->toString(objectArray[index]));
    
stringBuffer->append(commonSeps->COMMA_SEP);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}


    auto ArrayUtil::toStringFromByteArray(std::vector<int8_t> byteArray) -> std::string{

    StringMaker* stringBuffer = new StringMaker();;
    

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    




                        for (
    int32_t index = 0;index < byteArray.size(); index++)
        {
stringBuffer->appendbyte(byteArray[index]);
    
stringBuffer->append(commonSeps->COMMA_SEP);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer->toString();;
    
}




        #endif //ORG_ALLBINARY_UTIL_ARRAYUTIL_CPP

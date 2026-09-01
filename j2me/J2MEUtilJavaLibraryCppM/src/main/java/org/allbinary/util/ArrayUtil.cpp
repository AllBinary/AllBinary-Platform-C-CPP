
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Class.h"
        
            #include "../../../java/lang/System.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ArrayUtil
            : public Object
         {

    private: static ArrayUtil instance() { return ArrayUtil(); }

    public: static ArrayUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ArrayUtil::instance();
    
}


    private: const MathUtil mathUtil = MathUtil::getInstance();

    public: std::vector<Object*> copyOf(std::vector<Object*> original, int32_t newLength){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->copyOfType(original, newLength, original.constructor);;
    
}


    public: std::vector<Object*> copyOfType(std::vector<Object*> original, int32_t newLength, Function newType){

    std::vector<Object*> copy = new Array(newLength);;
    
std::copy(original.begin() + 0, original.begin() + 0 + min, copy.begin() + 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    public: std::vector<int8_t> copyOfbyte(std::vector<int8_t> original, int32_t newLength){

    std::vector<int8_t> copy = new Array(newLength);;
    
std::copy(original.begin() + 0, original.begin() + 0 + min, copy.begin() + 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    public: std::vector<int16_t> copyOfshort(std::vector<int16_t> original, int32_t newLength){

    std::vector<int16_t> copy = new Array(newLength);;
    
std::copy(original.begin() + 0, original.begin() + 0 + min, copy.begin() + 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    public: std::vector<int32_t> copyOfint(std::vector<int32_t> original, int32_t newLength){

    std::vector<int32_t> copy = new Array(newLength);;
    
std::copy(original.begin() + 0, original.begin() + 0 + min, copy.begin() + 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    public: std::vector<int64_t> copyOflong(std::vector<int64_t> original, int32_t newLength){

    std::vector<int64_t> copy = new Array(newLength);;
    
std::copy(original.begin() + 0, original.begin() + 0 + min, copy.begin() + 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    public: std::vector<char> copyOfchar(std::vector<char> original, int32_t newLength){

    std::vector<char> copy = 
                                                        
                                                        std::vector<char>(newLength)
                                                    ;;
    
std::copy(original.begin() + 0, original.begin() + 0 + min, copy.begin() + 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    public: std::vector<float> copyOffloat(std::vector<float> original, int32_t newLength){

    std::vector<float> copy = new Array(newLength);;
    
std::copy(original.begin() + 0, original.begin() + 0 + min, copy.begin() + 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    public: std::vector<double> copyOfdouble(std::vector<double> original, int32_t newLength){

    std::vector<double> copy = new Array(newLength);;
    
std::copy(original.begin() + 0, original.begin() + 0 + min, copy.begin() + 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    public: std::vector<bool> copyOfboolean(std::vector<bool> original, int32_t newLength){

    std::vector<bool> copy = new Array(newLength);;
    
std::copy(original.begin() + 0, original.begin() + 0 + min, copy.begin() + 0);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    public: void reverse(std::vector<int32_t> intArray){

    int32_t length = intArray.size() -1;;
    

    int32_t temp= 0;;
    

    int32_t size = length /2;;
    




                        for (
    int32_t index = 0;index <= size; index++)
        {
temp= intArray[index]!;
    
intArray[index]= intArray[length -index]!;
    
intArray[length -index]= temp;
    
}

}


    public: void flip(std::vector<int32_t> intArray, int32_t width, int32_t height){

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
    
temp= intArray[index]!;
    
intArray[index]= intArray[rowIndex +x]!;
    
intArray[rowIndex +x]= temp;
    
}

}

}


    public: std::string toStringFromTwoDimensionaArray(std::vector<std::vector<int32_t>> twoDimensionalIntArray){

    StringMaker stringBuffer = StringMaker();;
    

    CommonSeps commonSeps = CommonSeps::getInstance();;
    

    int32_t endIndex = twoDimensionalIntArray.size();;
    

    int32_t endIndex2 = twoDimensionalIntArray[0]!.size();;
    




                        for (
    int32_t index = 0;index < endIndex; index++)
        {
stringBuffer.append(commonSeps.BRACE_OPEN);
    




                        for (
    int32_t index2 = 0;index2 < endIndex2; index2++)
        {
stringBuffer.appendint(twoDimensionalIntArray[index]![index2]!);
    
stringBuffer.append(commonSeps.COMMA_SEP);
    
}

stringBuffer.append(commonSeps.BRACE_CLOSE);
    
stringBuffer.append(commonSeps.NEW_LINE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: std::string toStringFromObjectArray(std::vector<Object*> objectArray){

    StringMaker stringBuffer = StringMaker();;
    

    CommonSeps commonSeps = CommonSeps::getInstance();;
    




                        for (
    int32_t index = 0;index < objectArray.size(); index++)
        {
stringBuffer.append(StringUtil::getInstance().toString(objectArray[index]!));
    
stringBuffer.append(commonSeps.COMMA_SEP);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    public: std::string toStringFromByteArray(std::vector<int8_t> byteArray){

    StringMaker stringBuffer = StringMaker();;
    

    CommonSeps commonSeps = CommonSeps::getInstance();;
    




                        for (
    int32_t index = 0;index < byteArray.size(); index++)
        {
stringBuffer.appendbyte(byteArray[index]!);
    
stringBuffer.append(commonSeps.COMMA_SEP);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            


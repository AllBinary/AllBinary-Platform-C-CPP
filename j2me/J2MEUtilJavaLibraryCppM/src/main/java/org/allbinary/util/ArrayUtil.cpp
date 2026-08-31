
        /* Generated Code Do Not Modify */
        



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
        

    private: static const instance: ArrayUtil = new ArrayUtil();

    public static ArrayUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ArrayUtil.instance;
    
}


    private: const mathUtil: MathUtil = MathUtil.getInstance()!;

    public std::vector<any> copyOf(std::vector<any> original, int32_t newLength){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.copyOfType(original, newLength, original.constructor);;
    
}


    public std::vector<any> copyOfType(std::vector<any> original, int32_t newLength, Function newType){

    copy: std::vector<any> = new Array(newLength);;
    
System.arraycopy(original, 0, copy, 0, this.mathUtil!.min(original.length, newLength));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    public std::vector<int8_t> copyOfbyte(std::vector<int8_t> original, int32_t newLength){

    copy: std::vector<int8_t> = new Array(newLength);;
    
System.arraycopy(original, 0, copy, 0, this.mathUtil!.min(original.length, newLength));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    public std::vector<int16_t> copyOfshort(std::vector<int16_t> original, int32_t newLength){

    copy: std::vector<int16_t> = new Array(newLength);;
    
System.arraycopy(original, 0, copy, 0, this.mathUtil!.min(original.length, newLength));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    public std::vector<int32_t> copyOfint(std::vector<int32_t> original, int32_t newLength){

    copy: std::vector<int32_t> = new Array(newLength);;
    
System.arraycopy(original, 0, copy, 0, this.mathUtil!.min(original.length, newLength));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    public std::vector<int64_t> copyOflong(std::vector<int64_t> original, int32_t newLength){

    copy: std::vector<int64_t> = new Array(newLength);;
    
System.arraycopy(original, 0, copy, 0, this.mathUtil!.min(original.length, newLength));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    public std::vector<char> copyOfchar(std::vector<char> original, int32_t newLength){

    copy: std::vector<char> = 
                                                        
                                                        new Array(newLength)
                                                    ;;
    
System.arraycopy(original, 0, copy, 0, this.mathUtil!.min(original.length, newLength));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    public std::vector<float> copyOffloat(std::vector<float> original, int32_t newLength){

    copy: std::vector<float> = new Array(newLength);;
    
System.arraycopy(original, 0, copy, 0, this.mathUtil!.min(original.length, newLength));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    public std::vector<double> copyOfdouble(std::vector<double> original, int32_t newLength){

    copy: std::vector<double> = new Array(newLength);;
    
System.arraycopy(original, 0, copy, 0, this.mathUtil!.min(original.length, newLength));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    public std::vector<bool> copyOfboolean(std::vector<bool> original, int32_t newLength){

    copy: std::vector<bool> = new Array(newLength);;
    
System.arraycopy(original, 0, copy, 0, this.mathUtil!.min(original.length, newLength));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return copy;
    
}


    public reverse(std::vector<int32_t> intArray){

    length: int32_t = intArray!.length -1;;
    

    temp: int32_t= 0;;
    

    size: int32_t = length /2;;
    




                        for (
    index: int32_t = 0;index <= size; index++)
        {
temp= intArray[index]!;
    
intArray[index]= intArray[length -index]!;
    
intArray[length -index]= temp;
    
}

}


    public flip(std::vector<int32_t> intArray, int32_t width, int32_t height){

    length: int32_t = height -1;;
    

    temp: int32_t= 0;;
    

    index: int32_t= 0;;
    

    rowIndex: int32_t= 0;;
    




                        for (
    y: int32_t = 0;y <= length /2; y++)
        {




                        for (
    x: int32_t = 0;x < width; x++)
        {
rowIndex= ((length -y) *width);
    
index= x +(y *width);
    
temp= intArray[index]!;
    
intArray[index]= intArray[rowIndex +x]!;
    
intArray[rowIndex +x]= temp;
    
}

}

}


    public string toStringFromTwoDimensionaArray(std::vector<std::vector<int32_t>> twoDimensionalIntArray){

    stringBuffer: StringMaker = new StringMaker();;
    

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

    endIndex: int32_t = twoDimensionalIntArray!.length
                ;;
    

    endIndex2: int32_t = twoDimensionalIntArray[0]!.length
                ;;
    




                        for (
    index: int32_t = 0;index < endIndex; index++)
        {
stringBuffer!.append(commonSeps!.BRACE_OPEN);
    




                        for (
    index2: int32_t = 0;index2 < endIndex2; index2++)
        {
stringBuffer!.appendint(twoDimensionalIntArray[index]![index2]!);
    
stringBuffer!.append(commonSeps!.COMMA_SEP);
    
}

stringBuffer!.append(commonSeps!.BRACE_CLOSE);
    
stringBuffer!.append(commonSeps!.NEW_LINE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public string toStringFromObjectArray(std::vector<any> objectArray){

    stringBuffer: StringMaker = new StringMaker();;
    

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    




                        for (
    index: int32_t = 0;index < objectArray!.length; index++)
        {
stringBuffer!.append(StringUtil.getInstance()!.toString(objectArray[index]!));
    
stringBuffer!.append(commonSeps!.COMMA_SEP);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public string toStringFromByteArray(std::vector<int8_t> byteArray){

    stringBuffer: StringMaker = new StringMaker();;
    

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    




                        for (
    index: int32_t = 0;index < byteArray!.length; index++)
        {
stringBuffer!.appendbyte(byteArray[index]!);
    
stringBuffer!.append(commonSeps!.COMMA_SEP);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            


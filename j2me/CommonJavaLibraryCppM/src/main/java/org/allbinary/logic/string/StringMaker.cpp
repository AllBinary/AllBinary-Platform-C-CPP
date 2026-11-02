
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_STRING_STRINGMAKER_CPP
        #define ORG_ALLBINARY_LOGIC_STRING_STRINGMAKER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/string/StringMaker.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Long.h"
        
            #include "java/lang/Float.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

StringMaker::StringMaker(){
this->charArray= std::vector<char>(20);
    
}


    auto StringMaker::append(std::string string) -> StringMaker*{

    int32_t stringLength = string.size();;
    
this->ensureCapacity(this->currentLength +stringLength);
    
JavaString::getChars(string, 0, stringLength, this->charArray, this->currentLength);
    
this->currentLength += stringLength;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    auto StringMaker::appendchar(char c) -> StringMaker*{
this->ensureCapacity(this->currentLength +1);
    
this->charArray[this->currentLength++]= c;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    auto StringMaker::appendCharArray(std::vector<char> charArray, int32_t start, int32_t end) -> StringMaker*{
this->ensureCapacity(this->currentLength +(end -start));
    




                        for (
    int32_t index = start;index < end; index++)
        {
this->charArray[this->currentLength++]= charArray[index];
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    auto StringMaker::appendbyte(int8_t b) -> StringMaker*{
this->append(std::to_string(b));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    auto StringMaker::appendshort(int16_t b) -> StringMaker*{
this->append(std::to_string(b));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    auto StringMaker::appendint(int32_t i) -> StringMaker*{
this->append(std::to_string(i));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    auto StringMaker::appendlong(int64_t l) -> StringMaker*{
this->append(std::to_string(l));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    auto StringMaker::appendfloat(float f) -> StringMaker*{
this->append(std::to_string(f));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    auto StringMaker::appendboolean(bool bool_) -> StringMaker*{

                        if(bool_)
                        
                                    {
                                    this->ensureCapacity(this->currentLength +4);
    
this->charArray[this->currentLength++]= 't';
    
this->charArray[this->currentLength++]= 'r';
    
this->charArray[this->currentLength++]= 'u';
    
this->charArray[this->currentLength++]= 'e';
    

                                    }
                                
                        else {
                            this->ensureCapacity(this->currentLength +5);
    
this->charArray[this->currentLength++]= 'f';
    
this->charArray[this->currentLength++]= 'a';
    
this->charArray[this->currentLength++]= 'l';
    
this->charArray[this->currentLength++]= 's';
    
this->charArray[this->currentLength++]= 'e';
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    auto StringMaker::ensureCapacity(int32_t minSize) -> void{

    int32_t oldCapacity = this->charArray.size();;
    

                        if(minSize > oldCapacity)
                        
                                    {
                                    
    int32_t newCapacity = oldCapacity *3;;
    

                        if(newCapacity < minSize)
                        newCapacity= minSize;
                                

    std::vector<char> copy = std::vector<char>(newCapacity);;
    

    int32_t min = this->min(this->charArray.size(), newCapacity);;
    
System.arraycopy(this->charArray, 0, copy, 0, min);
    
this->charArray= copy;
    

                                    }
                                
}


    auto StringMaker::min(int32_t value, int32_t value2) -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (value <= value2)
                        ?       
                                value
                                :

                            value2;

    ;
    
}


    auto StringMaker::delete_(int32_t start, int32_t end) -> StringMaker*{
this->currentLength -= (end -start);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    auto StringMaker::length() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentLength;
    
}


    auto StringMaker::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return std::string(this->charArray.begin() + 0, this->charArray.begin() + 0 + this->currentLength);
    
}




        #endif //ORG_ALLBINARY_LOGIC_STRING_STRINGMAKER_CPP


        /* Generated Code Do Not Modify */
        



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
        
class StringMaker
            : public Object
         {

    private: std::vector<char> charArray;

    private: int32_t currentLength= 0;

public: StringMaker(){
this->charArray= std::vector<char>(20);
    
}


    public: StringMaker* append(std::string string){

    int32_t stringLength = string.size();;
    
this->ensureCapacity(this->currentLength +stringLength);
    



        for (int32_t i = 0; i < stringLength; i++) {
            this->charArray[this->currentLength + i - 0] = 
    string[i];
        }
                                    ;
    
this->currentLength += stringLength;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    public: StringMaker* appendchar(char c){
this->ensureCapacity(this->currentLength +1);
    
this->charArray[this->currentLength++]= c;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    public: StringMaker* appendCharArray(std::vector<char> charArray, int32_t start, int32_t end){
this->ensureCapacity(this->currentLength +(end -start));
    




                        for (
    int32_t index = start;index < end; index++)
        {
this->charArray[this->currentLength++]= charArray[index];
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    public: StringMaker* appendbyte(int8_t b){
this->append(std::to_string(b));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    public: StringMaker* appendshort(int16_t b){
this->append(std::to_string(b));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    public: StringMaker* appendint(int32_t i){
this->append(std::to_string(i));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    public: StringMaker* appendlong(int64_t l){
this->append(std::to_string(l));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    public: StringMaker* appendfloat(float f){
this->append(std::to_string(f));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    public: StringMaker* appendboolean(bool bool_){

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


    public: void ensureCapacity(int32_t minSize){

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


    public: int32_t min(int32_t value, int32_t value2){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (value <= value2)
                        ?       
                                value
                                :

                            value2;

    ;
    
}


    public: StringMaker* delete_(int32_t start, int32_t end){
this->currentLength -= (end -start);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    public: int32_t length(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentLength;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return std::string(this->charArray.begin() + 0, this->charArray.begin() + 0 + this->currentLength);
    
}


};

            


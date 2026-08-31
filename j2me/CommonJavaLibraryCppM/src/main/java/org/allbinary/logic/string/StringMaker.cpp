
        /* Generated Code Do Not Modify */
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/System.h"
        
            #include "../../../../java/lang/Integer.h"
        
            #include "../../../../java/lang/Long.h"
        
            #include "../../../../java/lang/Float.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class StringMaker
            : public Object
         {
        

    private: charArray: std::vector<char>;

    private: currentLength: int32_t= 0;

public constructor (){

            super();
        this.charArray= new Array(20);
    
}


    public StringMaker append(string string){

    stringLength: int32_t = string.length!;;
    
this.ensureCapacity(this.currentLength +stringLength);
    



        for (let i = 0; i < stringLength; i++) {
            this.charArray[this.currentLength + i - 0] = 
    string.charAt(i);
        }
                                    ;
    
this.currentLength += stringLength;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    public StringMaker appendchar(char c){
this.ensureCapacity(this.currentLength +1);
    
this.charArray[this.currentLength++]= c;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    public StringMaker appendbyte(int8_t b){
this.append(b.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    public StringMaker appendshort(int16_t b){
this.append(b.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    public StringMaker appendint(int32_t i){
this.append(i.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    public StringMaker appendlong(int64_t l){
this.append(l.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    public StringMaker appendfloat(float f){
this.append(f.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    public StringMaker appendboolean(bool bool){

                        if(bool)
                        
                                    {
                                    this.ensureCapacity(this.currentLength +4);
    
this.charArray[this.currentLength++]= 't';
    
this.charArray[this.currentLength++]= 'r';
    
this.charArray[this.currentLength++]= 'u';
    
this.charArray[this.currentLength++]= 'e';
    

                                    }
                                
                        else {
                            this.ensureCapacity(this.currentLength +5);
    
this.charArray[this.currentLength++]= 'f';
    
this.charArray[this.currentLength++]= 'a';
    
this.charArray[this.currentLength++]= 'l';
    
this.charArray[this.currentLength++]= 's';
    
this.charArray[this.currentLength++]= 'e';
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    public ensureCapacity(int32_t minSize){

    oldCapacity: int32_t = this.charArray!.length
                ;;
    

                        if(minSize > oldCapacity)
                        
                                    {
                                    
    newCapacity: int32_t = oldCapacity *3;;
    

                        if(newCapacity < minSize)
                        newCapacity= minSize

    copy: std::vector<char> = 
                                                        
                                                        new Array(newCapacity)
                                                    ;;
    

    min: int32_t = this.min(this.charArray!.length, newCapacity)!;;
    
System.arraycopy(this.charArray, 0, copy, 0, min);
    
this.charArray= copy;
    

                                    }
                                
}


    public int32_t min(int32_t value, int32_t value2){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (value <= value2)
                        ?       
                                value
                                :

                            value2;

    ;
    
}


    public StringMaker delete(int32_t start, int32_t end){
this.currentLength -= (end -start);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this;
    
}


    public int32_t length(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.currentLength;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.charArray.slice(0, this.currentLength).join('');
    
}


};

            


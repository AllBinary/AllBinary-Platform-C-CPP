
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/IndexOutOfBoundsException.h"
        
            #include "java/lang/System.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ArrayUtil.h"
#include "BasicArrayListS.h"
//This is a very fast and simple resizable list.
class BasicArrayList
            : public Object
         {

    private: static const std::string SIZE = ", Size: ";

    private: const ArrayUtil arrayUtil = ArrayUtil::getInstance();

    public: std::vector<Object*> objectArray;

    private: int32_t currentIndex = 0;

public: BasicArrayList(std::vector<Object*> objectArray){
this->objectArray= objectArray;
    
}


    public: void addAt(int32_t index, Object* element){

                        if(index > this->currentIndex || index < 0)
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(CommonLabels::getInstance().INDEX_LABEL);
    
stringBuffer.appendint(index);
    
stringBuffer.append(BasicArrayList::SIZE);
    
stringBuffer.appendint(this->currentIndex);
    



                            throw IndexOutOfBoundsException(stringBuffer.toString());
                    

                                    }
                                
this->ensureCapacity(this->currentIndex +1);
    
System.arraycopy(this->objectArray, index, this->objectArray, index +1, this->currentIndex -index);
    
this->objectArray[index]= element;
    
this->currentIndex++;
    
}


    public: bool add(Object* anyType){
this->ensureCapacity(this->currentIndex +1);
    
this->objectArray[this->currentIndex++]= anyType;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: Object* removeAt(int32_t index){

                        if(index >= this->currentIndex)
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(CommonLabels::getInstance().INDEX_LABEL);
    
stringBuffer.appendint(index);
    
stringBuffer.append(BasicArrayList::SIZE);
    
stringBuffer.appendint(this->currentIndex);
    



                            throw IndexOutOfBoundsException(stringBuffer.toString());
                    

                                    }
                                

    Object* oldValue = this->objectArray[index];;
    

    int32_t numMoved = this->currentIndex -index -1;;
    

                        if(numMoved > 0)
                        
                                    {
                                    System.arraycopy(this->objectArray, index +1, this->objectArray, index, numMoved);
    

                                    }
                                
this->objectArray[--this->currentIndex]= 
                                        nullptr
                                    ;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldValue;
    
}


    public: bool remove(Object* anyType){

                        if(anyType == 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t index = 0;index < this->currentIndex; index++)
        {

                        if(this->objectArray[index] == 
                                    nullptr
                                )
                        
                                    {
                                    
    int32_t numMoved = this->currentIndex -index -1;;
    

                        if(numMoved > 0)
                        
                                    {
                                    System.arraycopy(this->objectArray, index +1, this->objectArray, index, numMoved);
    

                                    }
                                
this->objectArray[--this->currentIndex]= 
                                        nullptr
                                    ;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}


                                    }
                                
                        else {
                            



                        for (
    int32_t index = 0;index < this->currentIndex; index++)
        {

                        if(anyType == this->objectArray[index] || anyType === this->objectArray[index])
                        
                                    {
                                    
    int32_t numMoved = this->currentIndex -index -1;;
    

                        if(numMoved > 0)
                        
                                    {
                                    System.arraycopy(this->objectArray, index +1, this->objectArray, index, numMoved);
    

                                    }
                                
this->objectArray[--this->currentIndex]= 
                                        nullptr
                                    ;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}


                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool removeAll2(BasicArrayList list){

    bool result = true;;
    

    int32_t size = list.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(this->remove(list.get(index)))
                        
                                    {
                                    
                                    }
                                
                        else {
                            result= false;
    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


    public: bool addAll2(BasicArrayList list){
this->ensureCapacity(this->currentIndex +list.currentIndex);
    

    int32_t listSize = list.currentIndex;;
    




                        for (
    int32_t index = 0;index < listSize; index++)
        {
this->objectArray[this->currentIndex++]= list.objectArray[index];
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: bool addAllList(BasicArrayList list){

    std::vector<Object*> newObjectArray = list.toArray();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->addAll(newObjectArray);;
    
}


    public: bool addAll(std::vector<Object*> newObjectArray){

    int32_t numSize = newObjectArray.size();;
    
this->ensureCapacity(this->currentIndex +numSize);
    
System.arraycopy(newObjectArray, 0, this->objectArray, this->currentIndex, numSize);
    
this->currentIndex += numSize;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return numSize != 0;
    
}


    public: void ensureCapacity(int32_t minSize){

    int32_t oldCapacity = this->objectArray.size();;
    

                        if(minSize > oldCapacity)
                        
                                    {
                                    
    int32_t newCapacity = ((oldCapacity *3)>>1) +1;;
    

                        if(newCapacity < minSize)
                        
                                    {
                                    newCapacity= minSize;
    

                                    }
                                
this->objectArray= this->arrayUtil.copyOf(this->objectArray, newCapacity);
    

                                    }
                                
}


    public: void trimToSize(){

    int32_t oldCapacity = this->objectArray.size();;
    

                        if(this->currentIndex < oldCapacity)
                        
                                    {
                                    this->objectArray= this->arrayUtil.copyOf(this->objectArray, this->currentIndex);
    

                                    }
                                
}


    public: int32_t indexOf(Object* anyType){

                        if(anyType == 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t i = 0;i < this->currentIndex; i++)
        {

                        if(this->objectArray[i] == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return i;
    

                                    }
                                
}


                                    }
                                
                        else {
                            



                        for (
    int32_t i = 0;i < this->currentIndex; i++)
        {

                        if(anyType === this->objectArray[i])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return i;
    

                                    }
                                
}


                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public: int32_t lastIndexOf(Object* anyType){

                        if(anyType == 
                                    nullptr
                                )
                        
                                    {
                                    



                        for (
    int32_t i = this->currentIndex -1;i >= 0; i--)
        {

                        if(this->objectArray[i] == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return i;
    

                                    }
                                
}


                                    }
                                
                        else {
                            



                        for (
    int32_t i = this->currentIndex -1;i >= 0; i--)
        {

                        if(anyType === this->objectArray[i])
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return i;
    

                                    }
                                
}


                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public: Object* get(int32_t index){

                        if(index >= this->currentIndex)
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(CommonLabels::getInstance().INDEX_LABEL);
    
stringBuffer.appendint(index);
    
stringBuffer.append(BasicArrayList::SIZE);
    
stringBuffer.appendint(this->currentIndex);
    



                            throw IndexOutOfBoundsException(stringBuffer.toString());
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->objectArray[index];
    
}


    public: Object* set(int32_t index, Object* element){

                        if(index >= this->currentIndex)
                        
                                    {
                                    
    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(CommonLabels::getInstance().INDEX_LABEL);
    
stringBuffer.appendint(index);
    
stringBuffer.append(BasicArrayList::SIZE);
    
stringBuffer.appendint(this->currentIndex);
    



                            throw IndexOutOfBoundsException(stringBuffer.toString());
                    

                                    }
                                

    Object* oldValue = this->objectArray[index];;
    
this->objectArray[index]= element;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldValue;
    
}


    public: void clear(){




                        for (
    int32_t i = 0;i < this->currentIndex; i++)
        {
this->objectArray[i]= 
                                        nullptr
                                    ;
    
}

this->currentIndex= 0;
    
}


    public: int32_t size(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentIndex;
    
}


    public: bool isEmpty(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->currentIndex == 0;
    
}


    public: bool contains(Object* anyType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->indexOf(anyType) >= 0;
    
}


    public: std::vector<Object*> toArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->arrayUtil.copyOf(this->objectArray, this->currentIndex);;
    
}


    public: std::vector<Object*> toArrayType(std::vector<Object*> objectArray){

                        if(objectArray.size() < this->currentIndex)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->arrayUtil.copyOfType(this->objectArray, this->currentIndex, objectArray.getClass());;
    

                                    }
                                
System.arraycopy(this->objectArray, 0, objectArray, 0, this->currentIndex);
    

                        if(objectArray.size() > this->currentIndex)
                        
                                    {
                                    objectArray[this->currentIndex]= 
                                        nullptr
                                    ;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return objectArray;
    
}


    public: Object* clone(){

    int32_t size = this->size();;
    

    BasicArrayList list = BasicArrayListS(size);;
    

    Object* anyType;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
anyType= this->objectArray[index];
    
list.add(anyType);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


    public: std::string toString(){

    std::string COMMA_SEP = CommonSeps::getInstance().COMMA_SEP;;
    

    StringMaker stringBuffer = StringMaker();;
    




                        for (
    int32_t index = 0;index < this->currentIndex; index++)
        {
stringBuffer.append(this->objectArray[index].toString());
    
stringBuffer.append(COMMA_SEP);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


};

            


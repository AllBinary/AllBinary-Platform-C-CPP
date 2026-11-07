
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_UTIL_BASICARRAYLIST_CPP
        #define ORG_ALLBINARY_UTIL_BASICARRAYLIST_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/util/BasicArrayList.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/util/ArrayUtil.h"
#include "org/allbinary/util/BasicArrayListS.h"
//This is a very fast and simple resizable list.

BasicArrayList::BasicArrayList(std::vector<Object*> objectArray) : arrayUtil(ArrayUtil::getInstance()){
this->objectArray= objectArray;
    
}


    auto BasicArrayList::addAt(int32_t index, Object* element) -> void{

                        if(index > this->currentIndex || index < 0)
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(CommonLabels::getInstance()->INDEX_LABEL);
    
stringBuffer->appendint(index);
    
stringBuffer->append(BasicArrayList::SIZE);
    
stringBuffer->appendint(this->currentIndex);
    



                            throw IndexOutOfBoundsException(JavaString::valueOf(stringBuffer));
                    

                                    }
                                
this->ensureCapacity(this->currentIndex +1);
    
System.arraycopy(this->objectArray, index, this->objectArray, index +1, this->currentIndex -index);
    
this->objectArray[index]= element;
    
this->currentIndex++;
    
}


    auto BasicArrayList::add(Object* anyType) -> bool{
this->ensureCapacity(this->currentIndex +1);
    
this->objectArray[this->currentIndex++]= anyType;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto BasicArrayList::removeAt(int32_t index) -> Object*{

                        if(index >= this->currentIndex)
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(CommonLabels::getInstance()->INDEX_LABEL);
    
stringBuffer->appendint(index);
    
stringBuffer->append(BasicArrayList::SIZE);
    
stringBuffer->appendint(this->currentIndex);
    



                            throw IndexOutOfBoundsException(JavaString::valueOf(stringBuffer));
                    

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
                        
                        
                        return JavaBoxes::toObject(oldValue);
    
}


    auto BasicArrayList::remove(Object* anyType) -> bool{

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

                        if(anyType == this->objectArray[index] || JavaObjects::equals(anyType, this->objectArray[index]))
                        
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


    auto BasicArrayList::removeAll2(BasicArrayList* list) -> bool{

    bool result = true;;
    

    int32_t size = list->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

                        if(this->remove(list->get(index)))
                        
                                    {
                                    
                                    }
                                
                        else {
                            result= false;
    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return result;
    
}


    auto BasicArrayList::addAll2(BasicArrayList* list) -> bool{
this->ensureCapacity(this->currentIndex +list->currentIndex);
    

    int32_t listSize = list->currentIndex;;
    




                        for (
    int32_t index = 0;index < listSize; index++)
        {
this->objectArray[this->currentIndex++]= list->objectArray[index];
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto BasicArrayList::addAllList(BasicArrayList* list) -> bool{

    std::vector<Object*> newObjectArray = list->toArray();;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->addAll(newObjectArray);;
    
}


    auto BasicArrayList::addAll(std::vector<Object*> newObjectArray) -> bool{

    int32_t numSize = newObjectArray.size();;
    
this->ensureCapacity(this->currentIndex +numSize);
    
System.arraycopy(newObjectArray, 0, this->objectArray, this->currentIndex, numSize);
    
this->currentIndex += numSize;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return numSize != 0;
    
}


    auto BasicArrayList::ensureCapacity(int32_t minSize) -> void{

    int32_t oldCapacity = this->objectArray.size();;
    

                        if(minSize > oldCapacity)
                        
                                    {
                                    
    int32_t newCapacity = ((oldCapacity *3)>>1) +1;;
    

                        if(newCapacity < minSize)
                        
                                    {
                                    newCapacity= minSize;
    

                                    }
                                
this->objectArray= this->arrayUtil->copyOf(this->objectArray, newCapacity);
    

                                    }
                                
}


    auto BasicArrayList::trimToSize() -> void{

    int32_t oldCapacity = this->objectArray.size();;
    

                        if(this->currentIndex < oldCapacity)
                        
                                    {
                                    this->objectArray= this->arrayUtil->copyOf(this->objectArray, this->currentIndex);
    

                                    }
                                
}


    auto BasicArrayList::indexOf(Object* anyType) -> int32_t{

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

                        if(JavaObjects::equals(anyType, this->objectArray[i]))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return i;
    

                                    }
                                
}


                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return  -1;
    
}


    auto BasicArrayList::lastIndexOf(Object* anyType) -> int32_t{

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

                        if(JavaObjects::equals(anyType, this->objectArray[i]))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return i;
    

                                    }
                                
}


                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return  -1;
    
}


    auto BasicArrayList::get(int32_t index) -> Object*{

                        if(index >= this->currentIndex)
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(CommonLabels::getInstance()->INDEX_LABEL);
    
stringBuffer->appendint(index);
    
stringBuffer->append(BasicArrayList::SIZE);
    
stringBuffer->appendint(this->currentIndex);
    



                            throw IndexOutOfBoundsException(JavaString::valueOf(stringBuffer));
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->objectArray[index];
    
}


    auto BasicArrayList::set(int32_t index, Object* element) -> Object*{

                        if(index >= this->currentIndex)
                        
                                    {
                                    
    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(CommonLabels::getInstance()->INDEX_LABEL);
    
stringBuffer->appendint(index);
    
stringBuffer->append(BasicArrayList::SIZE);
    
stringBuffer->appendint(this->currentIndex);
    



                            throw IndexOutOfBoundsException(JavaString::valueOf(stringBuffer));
                    

                                    }
                                

    Object* oldValue = this->objectArray[index];;
    
this->objectArray[index]= element;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(oldValue);
    
}


    auto BasicArrayList::clear() -> void{




                        for (
    int32_t i = 0;i < this->currentIndex; i++)
        {
this->objectArray[i]= 
                                        nullptr
                                    ;
    
}

this->currentIndex= 0;
    
}


    auto BasicArrayList::size() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->currentIndex;
    
}


    auto BasicArrayList::isEmpty() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->currentIndex == 0;
    
}


    auto BasicArrayList::contains(Object* anyType) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->indexOf(anyType) >= 0;
    
}


    auto BasicArrayList::toArray() -> std::vector<Object*>{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->arrayUtil->copyOf(this->objectArray, this->currentIndex);;
    
}


    auto BasicArrayList::toArrayType(std::vector<Object*> objectArray) -> std::vector<Object*>{

                        if(objectArray.size() < this->currentIndex)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->arrayUtil->copyOfType(this->objectArray, this->currentIndex, Class::forType(typeid(objectArray)));;
    

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


    auto BasicArrayList::clone() -> Object*{

    int32_t size = this->size();;
    

    BasicArrayList* list = new BasicArrayListS(size);;
    

    Object* anyType;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
anyType= this->objectArray[index];
    
list->add(anyType);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::toObject(list);
    
}


    auto BasicArrayList::toString() -> std::string{

    std::string COMMA_SEP = CommonSeps::getInstance()->COMMA_SEP;;
    

    StringMaker* stringBuffer = new StringMaker();;
    




                        for (
    int32_t index = 0;index < this->currentIndex; index++)
        {
stringBuffer->append(JavaString::valueOf(this->objectArray[index]));
    
stringBuffer->append(COMMA_SEP);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuffer);;
    
}




        #endif //ORG_ALLBINARY_UTIL_BASICARRAYLIST_CPP

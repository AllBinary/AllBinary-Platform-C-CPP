
        /* Generated Code Do Not Modify */
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/IndexOutOfBoundsException.h"
        
            #include "../../../java/lang/System.h"
        
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
        

    private: static const SIZE: string = ", Size: ";

    private: const arrayUtil: ArrayUtil = ArrayUtil.getInstance()!;

    public objectArray: std::vector<any>;

    private: currentIndex: int32_t = 0;

public constructor (std::vector<any> objectArray){

            super();
        this.objectArray= objectArray;
    
}


    public addAt(int32_t index, any = {} element){

                        if(index > this.currentIndex || index < 0)
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(CommonLabels.getInstance()!.INDEX_LABEL);
    
stringBuffer!.appendint(index);
    
stringBuffer!.append(BasicArrayList.SIZE);
    
stringBuffer!.appendint(this.currentIndex);
    



                            throw new IndexOutOfBoundsException(stringBuffer!.toString());
                    

                                    }
                                
this.ensureCapacity(this.currentIndex +1);
    
System.arraycopy(this.objectArray, index, this.objectArray, index +1, this.currentIndex -index);
    
this.objectArray[index]= element;
    
this.currentIndex++;
    
}


    public bool add(any = {} anyType){
this.ensureCapacity(this.currentIndex +1);
    
this.objectArray[this.currentIndex++]= anyType;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public any removeAt(int32_t index){

                        if(index >= this.currentIndex)
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(CommonLabels.getInstance()!.INDEX_LABEL);
    
stringBuffer!.appendint(index);
    
stringBuffer!.append(BasicArrayList.SIZE);
    
stringBuffer!.appendint(this.currentIndex);
    



                            throw new IndexOutOfBoundsException(stringBuffer!.toString());
                    

                                    }
                                

    oldValue: any = this.objectArray[index]!;;
    

    numMoved: int32_t = this.currentIndex -index -1;;
    

                        if(numMoved > 0)
                        
                                    {
                                    System.arraycopy(this.objectArray, index +1, this.objectArray, index, numMoved);
    

                                    }
                                
this.objectArray[--this.currentIndex]= 
                                        nullptr
                                    ;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldValue;
    
}


    public bool remove(any = {} anyType){

                        if(anyType == 
                                    null
                                )
                        
                                    {
                                    



                        for (
    index: int32_t = 0;index < this.currentIndex; index++)
        {

                        if(this.objectArray[index] == 
                                    null
                                )
                        
                                    {
                                    
    numMoved: int32_t = this.currentIndex -index -1;;
    

                        if(numMoved > 0)
                        
                                    {
                                    System.arraycopy(this.objectArray, index +1, this.objectArray, index, numMoved);
    

                                    }
                                
this.objectArray[--this.currentIndex]= 
                                        nullptr
                                    ;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
}


                                    }
                                
                        else {
                            



                        for (
    index: int32_t = 0;index < this.currentIndex; index++)
        {

                        if(anyType == this.objectArray[index] || anyType! === this.objectArray[index]!)
                        
                                    {
                                    
    numMoved: int32_t = this.currentIndex -index -1;;
    

                        if(numMoved > 0)
                        
                                    {
                                    System.arraycopy(this.objectArray, index +1, this.objectArray, index, numMoved);
    

                                    }
                                
this.objectArray[--this.currentIndex]= 
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


    public bool removeAll2(BasicArrayList list){

    result: bool = true;;
    

    size: int32_t = list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

                        if(this.remove(list.get(index)))
                        
                                    {
                                    
                                    }
                                
                        else {
                            result= false;
    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return result;
    
}


    public bool addAll2(BasicArrayList list){
this.ensureCapacity(this.currentIndex +list.currentIndex);
    

    listSize: int32_t = list.currentIndex;;
    




                        for (
    index: int32_t = 0;index < listSize; index++)
        {
this.objectArray[this.currentIndex++]= list.objectArray[index]!;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public bool addAllList(BasicArrayList list){

    newObjectArray: std::vector<any> = list.toArray()!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.addAll(newObjectArray);;
    
}


    public bool addAll(std::vector<any> newObjectArray){

    numSize: int32_t = newObjectArray!.length
                ;;
    
this.ensureCapacity(this.currentIndex +numSize);
    
System.arraycopy(newObjectArray, 0, this.objectArray, this.currentIndex, numSize);
    
this.currentIndex += numSize;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return numSize != 0;
    
}


    public ensureCapacity(int32_t minSize){

    oldCapacity: int32_t = this.objectArray!.length
                ;;
    

                        if(minSize > oldCapacity)
                        
                                    {
                                    
    newCapacity: int32_t = ((oldCapacity *3)>>1) +1;;
    

                        if(newCapacity < minSize)
                        
                                    {
                                    newCapacity= minSize;
    

                                    }
                                
this.objectArray= this.arrayUtil!.copyOf(this.objectArray, newCapacity);
    

                                    }
                                
}


    public trimToSize(){

    oldCapacity: int32_t = this.objectArray!.length
                ;;
    

                        if(this.currentIndex < oldCapacity)
                        
                                    {
                                    this.objectArray= this.arrayUtil!.copyOf(this.objectArray, this.currentIndex);
    

                                    }
                                
}


    public int32_t indexOf(any = {} anyType){

                        if(anyType == 
                                    null
                                )
                        
                                    {
                                    



                        for (
    i: int32_t = 0;i < this.currentIndex; i++)
        {

                        if(this.objectArray[i] == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return i;
    

                                    }
                                
}


                                    }
                                
                        else {
                            



                        for (
    i: int32_t = 0;i < this.currentIndex; i++)
        {

                        if(anyType! === this.objectArray[i]!)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return i;
    

                                    }
                                
}


                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public int32_t lastIndexOf(any = {} anyType){

                        if(anyType == 
                                    null
                                )
                        
                                    {
                                    



                        for (
    i: int32_t = this.currentIndex -1;i >= 0; i--)
        {

                        if(this.objectArray[i] == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return i;
    

                                    }
                                
}


                                    }
                                
                        else {
                            



                        for (
    i: int32_t = this.currentIndex -1;i >= 0; i--)
        {

                        if(anyType! === this.objectArray[i]!)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return i;
    

                                    }
                                
}


                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public any get(int32_t index){

                        if(index >= this.currentIndex)
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(CommonLabels.getInstance()!.INDEX_LABEL);
    
stringBuffer!.appendint(index);
    
stringBuffer!.append(BasicArrayList.SIZE);
    
stringBuffer!.appendint(this.currentIndex);
    



                            throw new IndexOutOfBoundsException(stringBuffer!.toString());
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.objectArray[index]!;
    
}


    public any set(int32_t index, any = {} element){

                        if(index >= this.currentIndex)
                        
                                    {
                                    
    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(CommonLabels.getInstance()!.INDEX_LABEL);
    
stringBuffer!.appendint(index);
    
stringBuffer!.append(BasicArrayList.SIZE);
    
stringBuffer!.appendint(this.currentIndex);
    



                            throw new IndexOutOfBoundsException(stringBuffer!.toString());
                    

                                    }
                                

    oldValue: any = this.objectArray[index]!;;
    
this.objectArray[index]= element;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return oldValue;
    
}


    public clear(){




                        for (
    i: int32_t = 0;i < this.currentIndex; i++)
        {
this.objectArray[i]= 
                                        nullptr
                                    ;
    
}

this.currentIndex= 0;
    
}


    public int32_t size(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.currentIndex;
    
}


    public bool isEmpty(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.currentIndex == 0;
    
}


    public bool contains(any = {} anyType){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.indexOf(anyType) >= 0;
    
}


    public std::vector<any> toArray(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.arrayUtil!.copyOf(this.objectArray, this.currentIndex);;
    
}


    public std::vector<any> toArrayType(std::vector<any> objectArray){

                        if(objectArray!.length < this.currentIndex)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.arrayUtil!.copyOfType(this.objectArray, this.currentIndex, objectArray!.constructor);;
    

                                    }
                                
System.arraycopy(this.objectArray, 0, objectArray, 0, this.currentIndex);
    

                        if(objectArray!.length > this.currentIndex)
                        
                                    {
                                    objectArray[this.currentIndex]= 
                                        nullptr
                                    ;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return objectArray;
    
}


    public any clone(){

    size: int32_t = this.size()!;;
    

    list: BasicArrayList = new BasicArrayListS(size);;
    

    anyType: any;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
anyType= this.objectArray[index]!;
    
list.add(anyType);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


    public string toString(){

    COMMA_SEP: string = CommonSeps.getInstance()!.COMMA_SEP;;
    

    stringBuffer: StringMaker = new StringMaker();;
    




                        for (
    index: int32_t = 0;index < this.currentIndex; index++)
        {
stringBuffer!.append(this.objectArray[index]!.toString());
    
stringBuffer!.append(COMMA_SEP);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


};

            


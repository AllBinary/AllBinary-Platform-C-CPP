
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/RuntimeException.h"
        
            #include "../../../../java/lang/System.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/util/Random.h>

      
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/math/MathUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //Do not use in client code for money related things.
class MyRandomFactory
            : public Object
         {
        

    private: static const instance: MyRandomFactory = new MyRandomFactory();

    public static MyRandomFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MyRandomFactory.instance;
    
}


    public static main(std::vector<string> args){

    randomFactory: MyRandomFactory = MyRandomFactory.getInstance()!;;
    

    stringBuilder: StringMaker = new StringMaker();;
    

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

    size2: int32_t = 100;;
    




                        for (
    index: int32_t = 0;index < size2; index++)
        {
stringBuilder!.appendint(randomFactory!.getAbsoluteNextInt(3))!.append(commonSeps!.COMMA);
    
}

console.log(stringBuilder!.toString());
    
stringBuilder!.delete(0, stringBuilder!.length());
    

    intArray: std::vector<int32_t> = new Array(52);;
    

    intArray2: std::vector<int32_t> = new Array(52);;
    

    size: int32_t = intArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
intArray[index]= index;
    
intArray2[index]= index;
    
}

randomFactory!.shuffle2(intArray, intArray2);
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
stringBuilder!.appendint(intArray[index]!)!.append(commonSeps!.COMMA);
    
}

console.log(stringBuilder!.toString());
    
stringBuilder!.delete(0, stringBuilder!.length());
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
stringBuilder!.appendint(intArray2[index]!)!.append(commonSeps!.COMMA);
    
}

console.log(stringBuilder!.toString());
    

    found: bool= false;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
found= false;
    




                        for (
    index2: int32_t = 0;index2 < size; index2++)
        {

                        if(intArray[index2] == index)
                        
                                    {
                                    found= true;
    

                                    }
                                
}


                        if(!found)
                        
                                    throw new RuntimeException();
                                
}

}


    private: const mathUtil: MathUtil = MathUtil.getInstance()!;

    private: rand: Random;

private constructor (){

            super();
        this.rand= new Random(Date.now());
    
}


    public setSeed(int64_t seed){
this.rand= new Random(seed);
    
}


    public int32_t getNextInt(int32_t range){

    div: int32_t = (Integer.MAX_VALUE /range) +1;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return static_cast<int32_t>((this.rand.nextInt() /div));
    
}


    public int32_t getAbsoluteNextInt(int32_t range){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.mathUtil!.abs(this.getNextInt(range));;
    
}


    public int32_t getAbsoluteNextIntAllowZero(int32_t range){

                        if(range == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.mathUtil!.abs(this.getNextInt(range));;
    

                        }
                            
}


    public shuffle(std::vector<int32_t> intArray){
this.shuffleTotal(intArray, intArray!.length *7);
    
}


    public shuffleTotal(std::vector<int32_t> intArray, int32_t shuffleTotal){

    size: int32_t = intArray!.length
                ;;
    

    randomIndex: int32_t= 0;;
    

    randomIndex2: int32_t= 0;;
    

    value: int32_t= 0;;
    




                        for (
    index: int32_t = 0;index < shuffleTotal; index++)
        {
randomIndex= this.getAbsoluteNextIntAllowZero(size);
    
randomIndex2= this.getAbsoluteNextIntAllowZero(size);
    
value= intArray[randomIndex]!;
    
intArray[randomIndex]= intArray[randomIndex2]!;
    
intArray[randomIndex2]= value;
    
}

}


    public shuffle2(std::vector<int32_t> intArray, std::vector<int32_t> intArray2){
this.shuffle2Total(intArray, intArray2, intArray!.length *7);
    
}


    public shuffle2Total(std::vector<int32_t> intArray, std::vector<int32_t> intArray2, int32_t shuffleTotal){

    size: int32_t = intArray!.length
                ;;
    

    randomIndex: int32_t= 0;;
    

    randomIndex2: int32_t= 0;;
    

    value: int32_t= 0;;
    

    value2: int32_t= 0;;
    




                        for (
    index: int32_t = 0;index < shuffleTotal; index++)
        {
randomIndex= this.getAbsoluteNextIntAllowZero(size);
    
randomIndex2= this.getAbsoluteNextIntAllowZero(size);
    
value= intArray[randomIndex]!;
    
value2= intArray2[randomIndex]!;
    
intArray[randomIndex]= intArray[randomIndex2]!;
    
intArray[randomIndex2]= value;
    
intArray2[randomIndex]= intArray2[randomIndex2]!;
    
intArray2[randomIndex2]= value2;
    
}

}


};

            



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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/System.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/game/rand/MyRandomFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImmutableBasicArrayList.h"
#include "BasicArrayList.h"
#include "BasicArrayListD.h"

class BasicArrayListUtil
            : public Object
         {
        

    private: static const instance: BasicArrayListUtil = new BasicArrayListUtil();

    public static BasicArrayListUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicArrayListUtil.instance;
    
}


    public static main(std::vector<string> args){

    commonPhoneStrings: CommonPhoneStrings = CommonPhoneStrings.getInstance()!;;
    

    list: BasicArrayList = new BasicArrayListD();;
    
list.add(commonPhoneStrings!.ONE);
    
list.add(commonPhoneStrings!.TWO);
    
list.add(commonPhoneStrings!.THREE);
    
list.add(commonPhoneStrings!.FOUR);
    
list.add(commonPhoneStrings!.FIVE);
    
list.add(commonPhoneStrings!.SIX);
    
list.add(commonPhoneStrings!.SEVEN);
    
list.add(commonPhoneStrings!.EIGHT);
    
list.add(commonPhoneStrings!.NINE);
    
BasicArrayListUtil.getInstance()!.reverse(list);
    
console.log(list.toString());
    
}


    public const NULL_ARRAY_OF_ARRAY: std::vector<std::vector<BasicArrayList>> = new Array(0).fill(null).map(() => new Array(0).fill(0))
                                                            ;

    private: const myRandomFactory: MyRandomFactory = MyRandomFactory.getInstance()!;

    private: const immutableInstance: BasicArrayList = new ImmutableBasicArrayList("Immutable", 0);

    public any getRandom(BasicArrayList list){

    i_random: int32_t = this.getRandomIndex(list)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list.objectArray[i_random]!;
    
}


    public int32_t getRandomIndex(BasicArrayList list){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.myRandomFactory!.getAbsoluteNextInt(list.size());;
    
}


    public reverse(BasicArrayList list){

    lastMinusOneIndex: int32_t = list.size() -2;;
    

    temp: any;;
    

    size: int32_t = lastMinusOneIndex /2;;
    

    secondSwapIndex: int32_t= 0;;
    




                        for (
    index: int32_t = 0;index <= size; index++)
        {
secondSwapIndex= lastMinusOneIndex -index;
    
temp= list.removeAt(index);
    
list.addAt(index, list.removeAt(secondSwapIndex));
    
list.addAt(secondSwapIndex +1, temp);
    
}

}


    public string log(BasicArrayList list){

    S_LABEL: string = " s: ";;
    

    size: int32_t = list.size()!;;
    

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append(CommonLabels.getInstance()!.TOTAL_LABEL);
    
stringBuffer!.appendint(size);
    




                        for (
    index: int32_t = size -1;index >= 0; index--)
        {

    usedList: BasicArrayList = list.objectArray[index]! as BasicArrayList;;
    
stringBuffer!.append(S_LABEL);
    
stringBuffer!.appendint(usedList!.size());
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    public BasicArrayList getImmutableInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.immutableInstance;
    
}


};

            


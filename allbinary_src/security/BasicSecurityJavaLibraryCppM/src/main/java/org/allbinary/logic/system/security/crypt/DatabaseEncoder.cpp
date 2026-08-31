
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/tokens/Tokenizer.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DatabaseEncoder
            : public Object
         {
        

    public static string encode(std::vector<int8_t> value){

        try {
            
    array: std::vector<int8_t> = value;;
    

    stringBuffer: StringMaker = new StringMaker();;
    




                        for (
    index: int32_t = 0;index < array.length; index++)
        {
stringBuffer!.append(Number(array[index]!).toString());
    

                        if(index < array.length -1)
                        
                                    {
                                    stringBuffer!.append(CommonSeps.getInstance()!.SPACE);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
PreLogUtil.putOE(commonStrings!.EXCEPTION, "DatabaseEncoder", "decode", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.EMPTY_STRING;
    
}

}


    public static std::vector<int8_t> decode(string value){

        try {
            
    tokenizer: Tokenizer = new Tokenizer(CommonSeps.getInstance()!.SPACE);;
    

    vector: BasicArrayList = tokenizer.getTokensFromString(value, new BasicArrayListD())!;;
    

    byteVector: BasicArrayList = new BasicArrayListD();;
    

    size: int32_t = vector.size()!;;
    

    byteOfData: string;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
byteOfData= vector.objectArray[index]! as string;
    
byteVector!.add(Number(byteOfData));
    
}


    decode: std::vector<int8_t> = new Array(byteVector!.size());;
    

    decodeIndex: int32_t = 0;;
    

    aByte: number;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
aByte= byteVector!.objectArray[index]! as number;
    
decode[decodeIndex]= aByte!;
    
decodeIndex++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return decode;
    

                //: 
} catch(e) 
            {

    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
PreLogUtil.putSE(commonStrings!.EXCEPTION, "DatabaseEncoder", "decode", e);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_BYTE_ARRAY;
    
}

}


private constructor (){

            super();
        }


};

            


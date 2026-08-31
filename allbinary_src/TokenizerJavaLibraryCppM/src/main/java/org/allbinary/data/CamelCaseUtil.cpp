
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
        
            #include "../../../java/lang/Character.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/logic/string/tokens/Tokenizer.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CamelCaseUtil
            : public Object
         {
        

    private: static const instance: CamelCaseUtil = new CamelCaseUtil();

    public static CamelCaseUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return CamelCaseUtil.instance;
    
}


    private: const commonSeps: CommonSeps = CommonSeps.getInstance()!;

                //@Throws(Exception.constructor)
            
    public string getAsCamelCase(string string, StringMaker stringBuilder){

                        if(string == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil.getInstance()!.EMPTY_STRING;
    

                                    }
                                

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    
stringBuilder!.delete(0, stringBuilder!.length());
    

    list: BasicArrayList = new BasicArrayListD();;
    

    tokenizer: Tokenizer = new Tokenizer(this.commonSeps!.UNDERSCORE);;
    
tokenizer.getTokensFromString(string, list);
    

    size: int32_t = list.size()!;;
    

    word: string;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {
word= list.get(i) as string;
    
word= stringValidationUtil!.isEmpty(word)
                        ?       
                                word
                                :

                            new StringMaker().appendchar(Character.toUpperCase(word[0]))!.append(word.substring(1)!.toLowerCase())!.toString();

    ;
    
stringBuilder!.append(word);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuilder!.toString();;
    
}


};

            


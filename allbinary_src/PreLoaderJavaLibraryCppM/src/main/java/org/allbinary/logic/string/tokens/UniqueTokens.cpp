
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/NumberFormatException.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/util/HashSet.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/string/CommonPhoneStrings.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Tokenizer.h"

class UniqueTokens
            : public Object
         {
        

    private: const specialCharacters: Vector = new Vector();

public constructor (){

            super();
        this.specialCharacters!.add("!");
    
this.specialCharacters!.add("@");
    
this.specialCharacters!.add(CommonPhoneStrings.getInstance()!.POUND);
    
this.specialCharacters!.add("$");
    
this.specialCharacters!.add("%");
    
this.specialCharacters!.add("^");
    
this.specialCharacters!.add(CommonSeps.getInstance()!.AMPERSAND);
    
this.specialCharacters!.add(CommonPhoneStrings.getInstance()!.STAR);
    
this.specialCharacters!.add("(");
    
this.specialCharacters!.add(")");
    
this.specialCharacters!.add("-");
    
this.specialCharacters!.add("_");
    
this.specialCharacters!.add("+");
    
this.specialCharacters!.add("=");
    
this.specialCharacters!.add("\\");
    
this.specialCharacters!.add("|");
    
this.specialCharacters!.add(AbPathData.getInstance()!.EXTENSION_SEP);
    
this.specialCharacters!.add(",");
    
this.specialCharacters!.add("<");
    
this.specialCharacters!.add(">");
    
this.specialCharacters!.add("?");
    
this.specialCharacters!.add("/");
    
this.specialCharacters!.add("~");
    
this.specialCharacters!.add("`");
    
}


                //@Throws(Exception.constructor)
            
    public HashSet getWhithoutDashesAndSkipNumberOnlyTokens(Vector stringVector){

        try {
            
    hashSet: HashSet = new HashSet();;
    

    index: int32_t = 0;;
    

    commonSeps: CommonSeps = CommonSeps.getInstance()!;;
    

        while(index < stringVector!.length)
        {

    keywords: string = stringVector!.elementAt(index) as string;;
    

    tokenizer: Tokenizer = new Tokenizer(commonSeps!.COMMA);;
    

    keywordVector: BasicArrayList = tokenizer.getTokensFromString(keywords, new BasicArrayListD())!;;
    




                        for (
    forIndex: int32_t = 0;forIndex < keywordVector!.size(); forIndex++)
        {

    cleanString: string = keywordVector!.get(forIndex) as string;;
    
cleanString= cleanString!.trim();
    

                        if(cleanString!.indexOf('-') !=  -1)
                        cleanString= new Replace("-", commonSeps!.SPACE).all(cleanString)
hashSet!.add(cleanString);
    

                        if(cleanString!.indexOf(' ') !=  -1)
                        
                                    {
                                    
    spaceTokenizer: Tokenizer = new Tokenizer(commonSeps!.SPACE);;
    

    subKeywordVector: BasicArrayList = spaceTokenizer!.getTokensFromString(cleanString, new BasicArrayListD())!;;
    




                        for (
    spaceIndex: int32_t = 0;spaceIndex < subKeywordVector!.size(); spaceIndex++)
        {

    subCleanString: string = subKeywordVector!.get(spaceIndex) as string;;
    

                        if(!isSpecialCharacter(subCleanString) && !numberOnly(subCleanString))
                        
                                    {
                                    hashSet!.add(subCleanString);
    

                                    }
                                
}


                                    }
                                
}

index++;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashSet;
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


    bool numberOnly(string subCleaningString){

        try {
            Integer.parseInt(subCleaningString);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                //: 
} catch(e) 
            {



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}

}


    bool isSpecialCharacter(string subCleaningString){




                        for (
    index: int32_t = 0;index < this.specialCharacters!.length; index++)
        {

                        if(subCleaningString!.compareTo(this.specialCharacters!.elementAt(index) as string) == 0)
                        


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            


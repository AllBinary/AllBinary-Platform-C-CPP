
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
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Tokenizer
            : public Object
         {
        

    private: sep: string;

    private: endSep: string = StringUtil.getInstance()!.EMPTY_STRING;

public constructor (string sep){

            super();
        
                        if(sep == 
                                    null
                                 || TsUtil.getInstance()!.compareTo(sep, StringUtil.getInstance()!.EMPTY_STRING) == 0)
                        
                                    {
                                    


                            throw new Exception("Sep provided is not valid");
                    

                                    }
                                
this.sep= sep;
    
}


    public setSep(string sep){
this.sep= sep;
    
}


    public setEndSep(string endSep){
this.endSep= endSep;
    
}


    public BasicArrayList getInsideSep(string string){

    tokenList: BasicArrayList = new BasicArrayListD();;
    

    index: int32_t = 0;;
    

    size: int32_t = string.length!;;
    

        while(index < size)
        {
index= string.indexOf(this.sep, index);
    

                        if(index !=  -1)
                        
                                    {
                                    
    end: int32_t = string.indexOf(this.endSep, index +this.sep.length)!;;
    

                        if(end !=  -1)
                        
                                    {
                                    tokenList!.add(string.substring(index +this.sep.length, end -(this.endSep!.length -1)));
    
index= end +this.endSep!.length;
    

                                    }
                                
                        else {
                            
                        }
                            

                                    }
                                
                        else {
                            break;

                    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return tokenList;
    
}


    public BasicArrayList getTokensFromString(string string, BasicArrayList tokenVector){

    index: int32_t = 0;;
    

    end: int32_t = 0;;
    

        while(index < string.length)
        {
end= string.indexOf(this.sep, index);
    

                        if(end !=  -1)
                        
                                    {
                                    tokenVector!.add(string.substring(index, end));
    
index= end +this.sep.length;
    

                                    }
                                
                        else {
                            tokenVector!.add(string.substring(index, string.length));
    
break;

                    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return tokenVector;
    
}


    public Hashtable<any, any> getTokens(BasicArrayList stringVector){

    tokenHashtable: Hashtable<any, any> = new Hashtable<any, any>();;
    

    string: string = StringUtil.getInstance()!.EMPTY_STRING;;
    

    end: int32_t = 0;;
    

    size: int32_t = stringVector!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
string= stringVector!.objectArray[index]! as string;
    
end= string.indexOf(this.sep);
    

                        if(end >= 0)
                        
                                    {
                                    tokenHashtable!.put(string.substring(0, end), string.substring(end +1, string.length));
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return tokenHashtable;
    
}


};

            



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

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Tokenizer
            : public Object
         {

    private: std::string sep;

    private: std::string endSep = StringUtil::getInstance().EMPTY_STRING;

public: Tokenizer(std::string sep){

                        if(false || TsUtil::getInstance().compareTo(sep, StringUtil::getInstance().EMPTY_STRING) == 0)
                        
                                    {
                                    


                            throw Exception("Sep provided is not valid");
                    

                                    }
                                
this->sep= sep;
    
}


    public: void setSep(std::string sep){
this->sep= sep;
    
}


    public: void setEndSep(std::string endSep){
this->endSep= endSep;
    
}


    public: BasicArrayList getInsideSep(std::string string){

    BasicArrayList tokenList = BasicArrayListD();;
    

    int32_t index = 0;;
    

    int32_t size = string.size();;
    

        while(index < size)
        {
index= string.indexOf(this->sep, index);
    

                        if(index !=  -1)
                        
                                    {
                                    
    int32_t end = string.indexOf(this->endSep, index +sep.size());;
    

                        if(end !=  -1)
                        
                                    {
                                    tokenList.add(string.substring(index +sep.size(), end -(endSep.size() -1)));
    
index= end +endSep.size();
    

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


    public: BasicArrayList getTokensFromString(std::string string, BasicArrayList tokenVector){

    int32_t index = 0;;
    

    int32_t end = 0;;
    

        while(index < string.size())
        {
end= string.indexOf(this->sep, index);
    

                        if(end !=  -1)
                        
                                    {
                                    tokenVector.add(string.substring(index, end));
    
index= end +sep.size();
    

                                    }
                                
                        else {
                            tokenVector.add(string.substring(index, string.size()));
    
break;

                    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return tokenVector;
    
}


    public: Hashtable<any, any> getTokens(BasicArrayList stringVector){

    Hashtable<any, any> tokenHashtable = StdUtil::getInstance().createHashtable();;
    

    std::string string = StringUtil::getInstance().EMPTY_STRING;;
    

    int32_t end = 0;;
    

    int32_t size = stringVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
string= stringVector.objectArray[index]! as string;
    
end= string.indexOf(this->sep);
    

                        if(end >= 0)
                        
                                    {
                                    tokenHashtable.put(string.substring(0, end), string.substring(end +1, string.size()));
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return tokenHashtable;
    
}


};

            


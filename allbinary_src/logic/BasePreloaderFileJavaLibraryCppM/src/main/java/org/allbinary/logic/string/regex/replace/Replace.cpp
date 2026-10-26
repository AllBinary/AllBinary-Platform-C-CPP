
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/J2SEUtil.h>

      
#include <org/allbinary/globals/AppUrlGlobals.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Replace
            : public Object
         {

    public: static void main(std::vector<std::string> args){

        try {
            
    StringUtil stringUtil = StringUtil::getInstance();;
    

    AppUrlGlobals appUrlGlobals = AppUrlGlobals();;
    
appUrlGlobals.setWebappPath("G:/mnt/bc/mydev/work/allbinary_src/ToolsJavaLibrary/tools");
    
URLGLOBALS::init(appUrlGlobals);
    

    std::string testString = "\"super gun\" big tank \"goodgunriflegun";;
    

    Replace replace = Replace("gun", "abcdefghijklmnopqrstuxwxyzabcdefghijklmnopqrstuxwxyz");;
    
console.log("Old String: " +testString);
    
testString= replace.all(testString);
    
console.log("New String: " +testString);
    

    Replace replaceCat = Replace("abcdefghijklmnopqrstuxwxyzabcdefghijklmnopqrstuxwxyz", stringUtil.EMPTY_STRING);;
    
testString= replaceCat.all(testString);
    
console.log("New String: " +testString);
    

                //: 
} catch(e) 
            {
}

}


    private: const LogUtil logUtil = LogUtil::getInstance();

    private: const J2SEUtil j2seUtil = J2SEUtil::getInstance();

    private: const std::string REPLACERS_ = "Replacers: ";

    private: const std::string ALL = "all";

    private: const std::string FOUND_KEY = "found key total: ";

    private: HashMap<Object*, Object*> hashMap;

public: Replace(std::string key, std::string value){
this->hashMap= StdUtil::getInstance().createHashMap();
    
this->hashMap.put(
                                                {
                                                    key
                                                }, 
                                                {
                                                    value
                                                });
    
}


public: Replace(std::vector<std::string> keys, std::vector<std::string> values){
this->hashMap= StdUtil::getInstance().createHashMap();
    
this->hashMap.put(keys, values);
    
}


public: Replace(HashMap<Object*, Object*> hashMap){
this->hashMap= hashMap;
    
}


    public: std::string all(std::string replace){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->upTo(replace, Integer::MIN_VALUE);;
    
}


    public: std::string upTo(std::string replace, int32_t total){

    StringMaker newStringBuffer = StringMaker();;
    

    int32_t totalNumberOfReplaces = 0;;
    

    std::vector<std::string> keys;;
    

    std::vector<std::string> values;;
    

    std::vector<Object*> keyArray = this->j2seUtil.getHashMapAsArray(this->hashMap);;
    

    int32_t size = keyArray.size();;
    




                        for (
    int32_t index2 = 0;index2 < size; index2++)
        {
keys= keyArray[index2] as string[];
    
values= this->hashMap.get(keys) as string[];
    

    int64_t foundTotal = 0;;
    

    int32_t index = 0;;
    

    std::string nextKey;;
    

    int32_t end= 0;;
    

    std::string nextSecondKey;;
    

    int32_t begin2= 0;;
    

        while(index < replace.size())
        {

    int32_t begin = replace.indexOf(keys[0], index);;
    

                        if(begin !=  -1)
                        
                                    {
                                    foundTotal++;
    

                        if(foundTotal % 100 == 0)
                        
                                    {
                                    console.log(this->FOUND_KEY +foundTotal);
    

                                    }
                                
nextKey= keys[0];
    
end= begin +nextKey.size();
    
newStringBuffer.delete(0, newStringBuffer.length());
    
newStringBuffer.append(replace.substring(0, begin));
    
newStringBuffer.append(values[0]);
    
index= newStringBuffer.length();
    
newStringBuffer.append(replace.substring(end, replace.size()));
    
replace= newStringBuffer.toString();
    

                        if(keys.size() > 1)
                        
                                    {
                                    nextSecondKey= keys[1];
    
begin2= replace.indexOf(nextSecondKey, index);
    

                        if(begin2 !=  -1)
                        
                                    {
                                    
    int32_t end2 = begin2 +nextSecondKey.size();;
    
newStringBuffer.delete(0, newStringBuffer.length());
    
newStringBuffer.append(replace.substring(0, begin2));
    
newStringBuffer.append(values[1]);
    
index= newStringBuffer.length();
    
newStringBuffer.append(replace.substring(end2, replace.size()));
    
replace= newStringBuffer.toString();
    

                                    }
                                

                                    }
                                
totalNumberOfReplaces++;
    

                        if(total != Integer::MIN_VALUE && totalNumberOfReplaces >= total)
                        
                                    {
                                    break;

                    

                                    }
                                

                                    }
                                
                        else {
                            break;

                    

                        }
                            
}

}


                        if(totalNumberOfReplaces > 0)
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().REPLACE))
                        
                                    {
                                    this->logUtil.putF("Total Number Of Replaces: " +totalNumberOfReplaces, this, this->ALL);
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return replace;
    
}


    public: std::string line(std::string replace){

    StringMaker newStringBuffer = StringMaker();;
    

    int32_t totalNumberOfReplaces = 0;;
    

    std::string key;;
    

    std::string value;;
    

    std::vector<Object*> keyArray = this->j2seUtil.getHashMapAsArray(this->hashMap);;
    

    int32_t size = keyArray.size();;
    




                        for (
    int32_t index2 = 0;index2 < size; index2++)
        {
key= keyArray[index2];
    
value= this->hashMap.get(key);
    

    int32_t index = 0;;
    

        while(index < replace.size())
        {
newStringBuffer.delete(0, newStringBuffer.length());
    

    int32_t begin = replace.indexOf(key, index);;
    

                        if(begin !=  -1)
                        
                                    {
                                    console.log(this->FOUND_KEY);
    

    int32_t end = replace.indexOf('\n', begin +key.size()) +1;;
    

                        if(end >= 0)
                        
                                    {
                                    newStringBuffer.append(replace.substring(0, begin));
    
index= newStringBuffer.length();
    
newStringBuffer.append(replace.substring(end, replace.size()));
    
replace= newStringBuffer.toString();
    
totalNumberOfReplaces++;
    

                                    }
                                

                                    }
                                
                        else {
                            break;

                    

                        }
                            
}

}


                        if(LogConfigTypes::LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().REPLACE))
                        
                                    {
                                    this->logUtil.putF("Total Number Of Replaces: " +totalNumberOfReplaces, this, this->ALL);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return replace;
    
}


};

            


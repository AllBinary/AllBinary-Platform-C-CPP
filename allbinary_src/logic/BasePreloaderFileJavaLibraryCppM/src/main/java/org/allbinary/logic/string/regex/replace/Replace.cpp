
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
        



        #ifndef ORG_ALLBINARY_LOGIC_STRING_REGEX_REPLACE_REPLACE_CPP
        #define ORG_ALLBINARY_LOGIC_STRING_REGEX_REPLACE_REPLACE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/string/regex/replace/Replace.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        

Replace::Replace(std::string key, std::string value) : logUtil(LogUtil::getInstance()), j2seUtil(J2SEUtil::getInstance()){
this->hashMap= StdUtil::getInstance()->createHashMap();
    
this->hashMap->put(
                                                {
                                                    key
                                                }, 
                                                {
                                                    value
                                                });
    
}


Replace::Replace(std::vector<std::string> keys, std::vector<std::string> values) : logUtil(LogUtil::getInstance()), j2seUtil(J2SEUtil::getInstance()){
this->hashMap= StdUtil::getInstance()->createHashMap();
    
this->hashMap->put(keys, values);
    
}


Replace::Replace(HashMap<Object*, Object*>* hashMap) : logUtil(LogUtil::getInstance()), j2seUtil(J2SEUtil::getInstance()){
this->hashMap= hashMap;
    
}


    auto Replace::all(std::string replace) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->upTo(replace, Integer.MIN_VALUE);;
    
}


    auto Replace::upTo(std::string replace, int32_t total) -> std::string{

    StringMaker* newStringBuffer = new StringMaker();;
    

    int32_t totalNumberOfReplaces = 0;;
    

    std::vector<std::string> keys;;
    

    std::vector<std::string> values;;
    

    std::vector<Object*> keyArray = this->j2seUtil->getHashMapAsArray(this->hashMap);;
    

    int32_t size = keyArray.size();;
    




                        for (
    int32_t index2 = 0;index2 < size; index2++)
        {
keys= JavaBoxes::unbox<std::vector<std::string>>(keyArray[index2]);
    
values= JavaBoxes::unbox<std::vector<std::string>>(this->hashMap->get(keys));
    

    int64_t foundTotal = 0;;
    

    int32_t index = 0;;
    

    std::string nextKey;;
    

    int32_t end= 0;;
    

    std::string nextSecondKey;;
    

    int32_t begin2= 0;;
    

        while(index < replace->size())
        {

    int32_t begin = JavaString::indexOf(replace, keys[0], index);;
    

                        if(begin !=  -1)
                        
                                    {
                                    foundTotal++;
    

                        if(foundTotal % 100 == 0)
                        
                                    {
                                    System.out.println(this->FOUND_KEY +foundTotal);
    

                                    }
                                
nextKey= keys[0];
    
end= begin +nextKey.size();
    
newStringBuffer->delete_(0, newStringBuffer->length());
    
newStringBuffer->append(JavaString::substring(replace, 0, begin));
    
newStringBuffer->append(values[0]);
    
index= newStringBuffer->length();
    
newStringBuffer->append(JavaString::substring(replace, end, replace->size()));
    
replace= newStringBuffer->toString();
    

                        if(keys.size() > 1)
                        
                                    {
                                    nextSecondKey= keys[1];
    
begin2= JavaString::indexOf(replace, nextSecondKey, index);
    

                        if(begin2 !=  -1)
                        
                                    {
                                    
    int32_t end2 = begin2 +nextSecondKey.size();;
    
newStringBuffer->delete_(0, newStringBuffer->length());
    
newStringBuffer->append(JavaString::substring(replace, 0, begin2));
    
newStringBuffer->append(values[1]);
    
index= newStringBuffer->length();
    
newStringBuffer->append(JavaString::substring(replace, end2, replace->size()));
    
replace= newStringBuffer->toString();
    

                                    }
                                

                                    }
                                
totalNumberOfReplaces++;
    

                        if(total != Integer.MIN_VALUE && totalNumberOfReplaces >= total)
                        
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
                                    
                        if(LogConfigTypes::LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->REPLACE))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Total Number Of Replaces: ") +JavaString::valueOf(totalNumberOfReplaces), this, this->ALL);
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return replace;
    
}


    auto Replace::line(std::string replace) -> std::string{

    StringMaker* newStringBuffer = new StringMaker();;
    

    int32_t totalNumberOfReplaces = 0;;
    

    std::string key;;
    

    std::string value;;
    

    std::vector<Object*> keyArray = this->j2seUtil->getHashMapAsArray(this->hashMap);;
    

    int32_t size = keyArray.size();;
    




                        for (
    int32_t index2 = 0;index2 < size; index2++)
        {
key= JavaBoxes::unbox<std::string>(keyArray[index2]);
    
value= JavaBoxes::unbox<std::string>(this->hashMap->get(key));
    

    int32_t index = 0;;
    

        while(index < replace->size())
        {
newStringBuffer->delete_(0, newStringBuffer->length());
    

    int32_t begin = JavaString::indexOf(replace, key, index);;
    

                        if(begin !=  -1)
                        
                                    {
                                    System.out.println(this->FOUND_KEY);
    

    int32_t end = JavaString::indexOf(replace, '\n', begin +key.size()) +1;;
    

                        if(end >= 0)
                        
                                    {
                                    newStringBuffer->append(JavaString::substring(replace, 0, begin));
    
index= newStringBuffer->length();
    
newStringBuffer->append(JavaString::substring(replace, end, replace->size()));
    
replace= newStringBuffer->toString();
    
totalNumberOfReplaces++;
    

                                    }
                                

                                    }
                                
                        else {
                            break;

                    

                        }
                            
}

}


                        if(LogConfigTypes::LOGGING->contains(org.allbinary->logic->communication->log->config->type->LogConfigTypeFactory->getInstance()->REPLACE))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Total Number Of Replaces: ") +JavaString::valueOf(totalNumberOfReplaces), this, this->ALL);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return replace;
    
}


    auto Replace::main(std::vector<std::string> args) -> void{

        try {
            
    StringUtil* stringUtil = StringUtil::getInstance();;
    

    AppUrlGlobals* appUrlGlobals = new AppUrlGlobals();;
    
appUrlGlobals->setWebappPath("G:/mnt/bc/mydev/work/allbinary_src/ToolsJavaLibrary/tools");
    
URLGLOBALS::init(appUrlGlobals);
    

    std::string testString = "\"super gun\" big tank \"goodgunriflegun";;
    

    Replace* replace = new Replace("gun", "abcdefghijklmnopqrstuxwxyzabcdefghijklmnopqrstuxwxyz");;
    
System.out.println(JavaString::valueOf("Old String: ") +JavaString::valueOf(testString));
    
testString= replace->all(testString);
    
System.out.println(JavaString::valueOf("New String: ") +JavaString::valueOf(testString));
    

    Replace* replaceCat = new Replace("abcdefghijklmnopqrstuxwxyzabcdefghijklmnopqrstuxwxyz", stringUtil->EMPTY_STRING);;
    
testString= replaceCat->all(testString);
    
System.out.println(JavaString::valueOf("New String: ") +JavaString::valueOf(testString));
    

                //: 
} catch(Exception& e) 
            {
}

}




        #endif //ORG_ALLBINARY_LOGIC_STRING_REGEX_REPLACE_REPLACE_CPP

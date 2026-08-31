
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
        
            #include "../../../../../../java/lang/System.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/J2SEUtil.h>

      
#include <org/allbinary/globals/AppUrlGlobals.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Replace
            : public Object
         {
        

    public static main(std::vector<string> args){

        try {
            
    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    appUrlGlobals: AppUrlGlobals = new AppUrlGlobals();;
    
appUrlGlobals!.setWebappPath("G:/mnt/bc/mydev/work/allbinary_src/ToolsJavaLibrary/tools");
    
URLGLOBALS.init(appUrlGlobals);
    

    testString: string = "\"super gun\" big tank \"goodgunriflegun";;
    

    replace: Replace = new Replace("gun", "abcdefghijklmnopqrstuxwxyzabcdefghijklmnopqrstuxwxyz");;
    
console.log("Old String: " +testString);
    
testString= replace.all(testString);
    
console.log("New String: " +testString);
    

    replaceCat: Replace = new Replace("abcdefghijklmnopqrstuxwxyzabcdefghijklmnopqrstuxwxyz", stringUtil!.EMPTY_STRING);;
    
testString= replaceCat!.all(testString);
    
console.log("New String: " +testString);
    

                //: 
} catch(e) 
            {
}

}


    private: const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const j2seUtil: J2SEUtil = J2SEUtil.getInstance()!;

    private: const REPLACERS_: string = "Replacers: ";

    private: const ALL: string = "all";

    private: const FOUND_KEY: string = "found key total: ";

    private: const hashMap: HashMap<any, any>;

public constructor (string key, string value){

            super();
        this.hashMap= new HashMap<any, any>();
    
this.hashMap!.put(
                                                [
                                                    key
                                                ], 
                                                [
                                                    value
                                                ]);
    
}


public constructor (std::vector<string> keys, std::vector<string> values){

            super();
        this.hashMap= new HashMap<any, any>();
    
this.hashMap!.put(keys, values);
    
}


public constructor (HashMap<any, any> hashMap){

            super();
        this.hashMap= hashMap;
    
}


    public string all(string replace){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.upTo(replace, Integer.MIN_VALUE);;
    
}


    public string upTo(string replace, int32_t total){

    newStringBuffer: StringMaker = new StringMaker();;
    

    totalNumberOfReplaces: int32_t = 0;;
    

    keys: std::vector<string>;;
    

    values: std::vector<string>;;
    

    keyArray: std::vector<any> = this.j2seUtil!.getHashMapAsArray(this.hashMap)!;;
    

    size: int32_t = keyArray!.length
                ;;
    




                        for (
    index2: int32_t = 0;index2 < size; index2++)
        {
keys= keyArray[index2]! as string[];
    
values= this.hashMap!.get(keys) as string[];
    

    foundTotal: int64_t = 0;;
    

    index: int32_t = 0;;
    

    nextKey: string;;
    

    end: int32_t= 0;;
    

    nextSecondKey: string;;
    

    begin2: int32_t= 0;;
    

        while(index < replace.length)
        {

    begin: int32_t = replace.indexOf(keys[0]!, index)!;;
    

                        if(begin !=  -1)
                        
                                    {
                                    foundTotal++;
    

                        if(foundTotal % 100 == 0)
                        
                                    {
                                    console.log(this.FOUND_KEY +foundTotal);
    

                                    }
                                
nextKey= keys[0]!;
    
end= begin +nextKey!.length;
    
newStringBuffer!.delete(0, newStringBuffer!.length());
    
newStringBuffer!.append(replace.substring(0, begin));
    
newStringBuffer!.append(values[0]!);
    
index= newStringBuffer!.length();
    
newStringBuffer!.append(replace.substring(end, replace.length));
    
replace= newStringBuffer!.toString();
    

                        if(keys.length > 1)
                        
                                    {
                                    nextSecondKey= keys[1]!;
    
begin2= replace.indexOf(nextSecondKey, index);
    

                        if(begin2 !=  -1)
                        
                                    {
                                    
    end2: int32_t = begin2 +nextSecondKey!.length;;
    
newStringBuffer!.delete(0, newStringBuffer!.length());
    
newStringBuffer!.append(replace.substring(0, begin2));
    
newStringBuffer!.append(values[1]!);
    
index= newStringBuffer!.length();
    
newStringBuffer!.append(replace.substring(end2, replace.length));
    
replace= newStringBuffer!.toString();
    

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
                                    
                        if(LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.REPLACE))
                        
                                    {
                                    this.logUtil!.putF("Total Number Of Replaces: " +totalNumberOfReplaces, this, this.ALL);
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return replace;
    
}


    public string line(string replace){

    newStringBuffer: StringMaker = new StringMaker();;
    

    totalNumberOfReplaces: int32_t = 0;;
    

    key: string;;
    

    value: string;;
    

    keyArray: std::vector<any> = this.j2seUtil!.getHashMapAsArray(this.hashMap)!;;
    

    size: int32_t = keyArray!.length
                ;;
    




                        for (
    index2: int32_t = 0;index2 < size; index2++)
        {
key= keyArray[index2]! as string;
    
value= this.hashMap!.get(key) as string;
    

    index: int32_t = 0;;
    

        while(index < replace.length)
        {
newStringBuffer!.delete(0, newStringBuffer!.length());
    

    begin: int32_t = replace.indexOf(key, index)!;;
    

                        if(begin !=  -1)
                        
                                    {
                                    console.log(this.FOUND_KEY);
    

    end: int32_t = replace.indexOf('\n', begin +key.length) +1;;
    

                        if(end >= 0)
                        
                                    {
                                    newStringBuffer!.append(replace.substring(0, begin));
    
index= newStringBuffer!.length();
    
newStringBuffer!.append(replace.substring(end, replace.length));
    
replace= newStringBuffer!.toString();
    
totalNumberOfReplaces++;
    

                                    }
                                

                                    }
                                
                        else {
                            break;

                    

                        }
                            
}

}


                        if(LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.REPLACE))
                        
                                    {
                                    this.logUtil!.putF("Total Number Of Replaces: " +totalNumberOfReplaces, this, this.ALL);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return replace;
    
}


};

            


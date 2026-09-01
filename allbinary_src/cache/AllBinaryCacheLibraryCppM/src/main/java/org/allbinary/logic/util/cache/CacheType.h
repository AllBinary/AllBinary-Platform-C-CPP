
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2007 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPE_H
        #define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPE_H

            #include "../../../../../java/lang/Object.h"
        
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class CacheType
            : public Object
         {

    private: std::string vendor;

    private: std::string type;

public: CacheType(std::string vendor, std::string type);

    public: std::string getVendor();

    public: std::string getType();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPE_H

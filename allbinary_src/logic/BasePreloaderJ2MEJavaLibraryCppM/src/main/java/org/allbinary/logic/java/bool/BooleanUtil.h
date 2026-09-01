
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANUTIL_H
        #define ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANUTIL_H

            #include <vector>
        
            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BooleanFactory.h"

class BooleanUtil
            : public Object
         {

    private: static BooleanUtil instance() { return BooleanUtil(); }

    public: static BooleanUtil getInstance();

    private: const TsUtil tsUtil = TsUtil::getInstance();

private: BooleanUtil();

                //@Throws(Exception.constructor)
            
    public: bool getFromString(std::string booleanString);

                //@Throws(Exception.constructor)
            
    public: bool isStringBoolean(std::string booleanString);

    public: std::string toStringFromBooleanArray(std::vector<bool> booleanArray);

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANUTIL_H

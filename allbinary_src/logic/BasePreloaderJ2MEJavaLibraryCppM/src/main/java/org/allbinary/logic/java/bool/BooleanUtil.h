
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class TsUtil;
class StringMaker;
class StringValidationUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class BooleanFactory;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class BooleanUtil
            : public virtual Object
         {

    private: static BooleanUtil* instance_owner();
    private: static BooleanUtil* instance;

    public: static BooleanUtil* getInstance();

    private: TsUtil* tsUtil;

private: BooleanUtil();

                //@Throws(Exception.constructor)
            
    public: bool getFromString(std::string booleanString);

                //@Throws(Exception.constructor)
            
    public: bool isStringBoolean(std::string booleanString);

    public: std::string toStringFromBooleanArray(std::vector<bool> booleanArray);

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringValidationUtil.h>)
#include <org/allbinary/logic/string/StringValidationUtil.h>
#endif
#if __has_include("org/allbinary/logic/java/bool/BooleanFactory.h")
#include "org/allbinary/logic/java/bool/BooleanFactory.h"
#endif

        #endif
    

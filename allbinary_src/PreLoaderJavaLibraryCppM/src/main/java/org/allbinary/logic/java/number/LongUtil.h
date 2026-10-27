
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
        



        #ifndef ORG_ALLBINARY_LOGIC_JAVA_NUMBER_LONGUTIL_H
        #define ORG_ALLBINARY_LOGIC_JAVA_NUMBER_LONGUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class StringMaker;
class CommonPhoneStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class LongData;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class LongUtil
            : public virtual Object
         {

    public: static std::string fillIn(std::string end);

private: LongUtil();

};

            


        #endif //ORG_ALLBINARY_LOGIC_JAVA_NUMBER_LONGUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_JAVA_NUMBER_LONGUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_JAVA_NUMBER_LONGUTIL_H_COMPLETE
        #if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif
#if __has_include("org/allbinary/logic/java/number/LongData.h")
#include "org/allbinary/logic/java/number/LongData.h"
#endif

        #endif
    

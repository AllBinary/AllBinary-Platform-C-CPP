
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
        



        #ifndef ORG_ALLBINARY_LOGIC_MATH_MATHDATA_H
        #define ORG_ALLBINARY_LOGIC_MATH_MATHDATA_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class CommonPhoneStrings;
class CommonSeps;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class MathData
            : public virtual Object
         {

    private: static MathData* instance_owner();
    private: static MathData* instance;

    public: static MathData* getInstance();

    public: std::string EQUALS;

    public: const std::string PLUS = "+";

    public: const std::string GREATER_THAN = ">";

    public: std::string MINUS;

    public: std::string DIVIDE;

    public: std::string MULTIPLY;

private: MathData();

};

            


        #endif //ORG_ALLBINARY_LOGIC_MATH_MATHDATA_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_MATH_MATHDATA_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_MATH_MATHDATA_H_COMPLETE
        #if __has_include(<org/allbinary/string/CommonPhoneStrings.h>)
#include <org/allbinary/string/CommonPhoneStrings.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif

        #endif
    

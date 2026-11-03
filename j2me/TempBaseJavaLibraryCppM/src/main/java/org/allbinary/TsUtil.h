
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_TSUTIL_H
        #define ORG_ALLBINARY_TSUTIL_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/InterruptedException.h"
        
            #include "java/lang/Float.h"
        
            #include "java/lang/Double.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //TempBase
class TsUtil
            : public virtual Object
         {

    private: static TsUtil* instance_owner();
    private: static TsUtil* instance;

    public: static TsUtil* getInstance();


            
    public: TsUtil();
        
    public: double longBitsToDouble(int64_t bits);

    public: float intBitsToFloat(int32_t bits);

    public: int32_t hashCode(Object* anyType);
    public: int32_t hashCode(const std::string& anyType) { return hashCode(JavaString::box(anyType)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> int32_t hashCode(BoxValue anyType) { return hashCode(JavaBoxes::toObject(anyType)); }
    public: template<typename BoxElement> int32_t hashCode(const std::vector<BoxElement>& anyType) { return hashCode(JavaBoxes::toObject(anyType)); }

                //@Throws(InterruptedException.constructor)
            
    public: void waitFor(Object* any, int64_t timeoutMillis);
    public: void waitFor(const std::string& any, int64_t timeoutMillis) { return waitFor(JavaString::box(any), timeoutMillis); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void waitFor(BoxValue any, int64_t timeoutMillis) { return waitFor(JavaBoxes::toObject(any), timeoutMillis); }
    public: template<typename BoxElement> void waitFor(const std::vector<BoxElement>& any, int64_t timeoutMillis) { return waitFor(JavaBoxes::toObject(any), timeoutMillis); }

    public: int32_t compareTo(std::string a, std::string b);

};

            


        #endif //ORG_ALLBINARY_TSUTIL_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_TSUTIL_H_COMPLETE)
        #define ORG_ALLBINARY_TSUTIL_H_COMPLETE
        
        #endif
    

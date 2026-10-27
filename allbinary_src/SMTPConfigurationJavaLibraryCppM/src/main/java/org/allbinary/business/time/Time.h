
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_TIME_TIME_H
        #define ORG_ALLBINARY_BUSINESS_TIME_TIME_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Long.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class Time
            : public virtual Object
         {

    private: int64_t timeLong;

public: Time(std::string time);

public: Time(int64_t time);

    public: int64_t getLong();

    public: int64_t getlong();

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_TIME_TIME_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_BUSINESS_TIME_TIME_H_COMPLETE)
        #define ORG_ALLBINARY_BUSINESS_TIME_TIME_H_COMPLETE
        
        #endif
    

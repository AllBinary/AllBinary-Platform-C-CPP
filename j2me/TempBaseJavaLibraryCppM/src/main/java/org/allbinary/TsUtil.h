
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/InterruptedException.h"
        
            #include "java/lang/Float.h"
        
            #include "java/lang/Double.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //TempBase
class TsUtil
            : public Object
         {

    private: static TsUtil* instance() { static std::unique_ptr<TsUtil> value(new TsUtil()); return value.get(); }

    public: static TsUtil* getInstance();

    public: double longBitsToDouble(int64_t bits);

    public: float intBitsToFloat(int32_t bits);

    public: int32_t hashCode(Object* anyType);

                //@Throws(InterruptedException.constructor)
            
    public: void waitFor(Object* any, int64_t timeoutMillis);

    public: int32_t compareTo(std::string a, std::string b);

};

            


        #endif //ORG_ALLBINARY_TSUTIL_H


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

            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/InterruptedException.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TsUtil
            : public Object
         {

    private: static TsUtil instance() { return TsUtil(); }

    public: static TsUtil getInstance();

    public: int32_t hashCode(Object* anyType);

                //@Throws(InterruptedException.constructor)
            
    public: void waitFor(Object* any, int64_t timeoutMillis);

};

            


        #endif //ORG_ALLBINARY_TSUTIL_H

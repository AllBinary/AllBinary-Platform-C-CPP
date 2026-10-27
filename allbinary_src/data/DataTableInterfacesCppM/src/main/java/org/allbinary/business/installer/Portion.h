
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_INSTALLER_PORTION_H
        #define ORG_ALLBINARY_BUSINESS_INSTALLER_PORTION_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Portion
            : public Object
         {

    private: int32_t current;

    private: int32_t total;

public: Portion(HashMap<Object*, Object*>* hashMap);

    public: int32_t getCurrent();

    public: int32_t getTotal();

};

            


        #endif //ORG_ALLBINARY_BUSINESS_INSTALLER_PORTION_H

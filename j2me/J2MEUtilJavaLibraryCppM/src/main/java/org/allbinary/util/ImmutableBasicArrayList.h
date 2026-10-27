
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
        



        #ifndef ORG_ALLBINARY_UTIL_IMMUTABLEBASICARRAYLIST_H
        #define ORG_ALLBINARY_UTIL_IMMUTABLEBASICARRAYLIST_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/util/BasicArrayListS.h"

class ImmutableBasicArrayList: public BasicArrayListS {

    private: std::string name;

public: ImmutableBasicArrayList(std::string name, int32_t size);

    public: bool add(Object* e);

    public: void addAt(int32_t index, Object* element);

    public: std::string toString();

};

            


        #endif //ORG_ALLBINARY_UTIL_IMMUTABLEBASICARRAYLIST_H

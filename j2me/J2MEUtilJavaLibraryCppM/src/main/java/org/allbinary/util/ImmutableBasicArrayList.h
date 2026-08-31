
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

#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicArrayListS.h"

class ImmutableBasicArrayList: public BasicArrayListS {
        

    private: const name: string;

public constructor (string name, int32_t size);

    public bool add(any = {} e);

    public addAt(int32_t index, any = {} element);

    public string toString();

};

            


        #endif //ORG_ALLBINARY_UTIL_IMMUTABLEBASICARRAYLIST_H

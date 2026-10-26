
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
        



        #ifndef ORG_ALLBINARY_INIT_INIT_H
        #define ORG_ALLBINARY_INIT_INIT_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "InitInterface.h"

class Init
            : public Object
        : public InitInterface {

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

                //@Throws(Exception.constructor)
            
    public: void init();

};

            


        #endif //ORG_ALLBINARY_INIT_INIT_H

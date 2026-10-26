
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2026 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VECTORUTIL_H
        #define ORG_ALLBINARY_LOGIC_VECTORUTIL_H

            #include "java/lang/Object.h"
        
#include <java/util/Vector.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class VectorUtil
            : public Object
         {

    private: static VectorUtil instance() { return VectorUtil(); }

    public: static VectorUtil getInstance();

    public: int32_t getSize(Object* anyType);

    public: Object* elementAt(Object* anyType, int32_t index);

};

            


        #endif //ORG_ALLBINARY_LOGIC_VECTORUTIL_H

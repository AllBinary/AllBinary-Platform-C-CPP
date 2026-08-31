
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_NULLCLOSEABLE_H
        #define ORG_ALLBINARY_LOGIC_IO_NULLCLOSEABLE_H

            #include "../../../../java/lang/Object.h"
        
#include <java/io/Closeable.h>

      
#include <java/io/IOException.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class NullCloseable
            : public Object
        : public Closeable {
        

    public static const NULL_CLOSEABLE: NullCloseable = new NullCloseable();

    public close();

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_NULLCLOSEABLE_H

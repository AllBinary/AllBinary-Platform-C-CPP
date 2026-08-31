
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
        



        #ifndef ADMIN_TAGHELPERS_BASICTABLE_H
        #define ADMIN_TAGHELPERS_BASICTABLE_H

            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/Exception.h"
        
            #include "../../java/lang/RuntimeException.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicTableInterface.h"

class BasicTable
            : public Object
        : public BasicTableInterface {
        

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

                //@Throws(Exception.constructor)
            
    public string drop();

                //@Throws(Exception.constructor)
            
    public string create();

                //@Throws(Exception.constructor)
            
    public string restore();

                //@Throws(Exception.constructor)
            
    public string backup();

};

            


        #endif //ADMIN_TAGHELPERS_BASICTABLE_H

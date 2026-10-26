
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2007 AllBinary 
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CacheInterface.h"
#include "CacheType.h"
#include "CachePolicy.h"

class CacheInterfaceFactory
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static CacheInterface getInstance(CacheType cacheType, CachePolicy cachePolicy){



                            throw Exception("No such " +cacheType.toString());
                    
}


private: CacheInterfaceFactory(){
}


};

            



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
        



        #ifndef ORG_ALLBINARY_UTIL_BASICARRAYLISTS_CPP
        #define ORG_ALLBINARY_UTIL_BASICARRAYLISTS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/util/BasicArrayListS.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/IllegalArgumentException.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/util/BasicArrayList.h"


BasicArrayListS::BasicArrayListS(int32_t size) : BasicArrayList(NullUtil::getInstance()->NULL_OBJECT_ARRAY){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

                        if(size < 0)
                        
                                    {
                                    


                            throw IllegalArgumentException(JavaString::valueOf((new StringMaker())->append("Init Size Exception: ")->appendint(size)));
                    

                                    }
                                
this->objectArray= std::vector<Object*>(size);
    
}




        #endif //ORG_ALLBINARY_UTIL_BASICARRAYLISTS_CPP

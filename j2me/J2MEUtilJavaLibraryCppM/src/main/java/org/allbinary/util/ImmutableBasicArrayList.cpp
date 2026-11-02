
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
        



        #ifndef ORG_ALLBINARY_UTIL_IMMUTABLEBASICARRAYLIST_CPP
        #define ORG_ALLBINARY_UTIL_IMMUTABLEBASICARRAYLIST_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/util/ImmutableBasicArrayList.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/util/BasicArrayListS.h"


ImmutableBasicArrayList::ImmutableBasicArrayList(std::string name, int32_t size) : BasicArrayListS(size){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->name= name;
    
}


    auto ImmutableBasicArrayList::add(Object* e) -> bool{
ForcedLogUtil::log(this->name, this);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    auto ImmutableBasicArrayList::addAt(int32_t index, Object* element) -> void{
ForcedLogUtil::log(this->name, this);
    
}


    auto ImmutableBasicArrayList::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}




        #endif //ORG_ALLBINARY_UTIL_IMMUTABLEBASICARRAYLIST_CPP

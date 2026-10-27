
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEUTIL_CPP
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/communication/http/AcceptableResponseUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/communication/http/AcceptableResponseFactory.h"


AcceptableResponseUtil::AcceptableResponseUtil() : candidateVector(new BasicArrayListD()), tagNameVector(new BasicArrayListD()) {
        }
        auto AcceptableResponseUtil::instance_owner() -> AcceptableResponseUtil* { static std::unique_ptr<AcceptableResponseUtil> value(new AcceptableResponseUtil()); return value.get(); }
AcceptableResponseUtil* AcceptableResponseUtil::instance = AcceptableResponseUtil::instance_owner();

    auto AcceptableResponseUtil::getInstance() -> AcceptableResponseUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return AcceptableResponseUtil::instance;
    
}

int32_t AcceptableResponseUtil::initResult = AcceptableResponseUtil::init();
        auto AcceptableResponseUtil::init() -> int32_t {
                    
TsUtil::getInstance()->hashCode(AcceptableResponseFactory::getInstance()->HTML);
    


                    return 0;
        }
                
    auto AcceptableResponseUtil::get(int32_t index) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->candidateVector->get(index);
    
}


    auto AcceptableResponseUtil::getTagName(int32_t index) -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->tagNameVector->get(index);
    
}


    auto AcceptableResponseUtil::size() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->candidateVector->size();;
    
}




        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEUTIL_CPP

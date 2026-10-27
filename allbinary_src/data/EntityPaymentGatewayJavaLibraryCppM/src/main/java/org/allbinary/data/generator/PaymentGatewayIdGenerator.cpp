
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
        



        #ifndef ORG_ALLBINARY_DATA_GENERATOR_PAYMENTGATEWAYIDGENERATOR_CPP
        #define ORG_ALLBINARY_DATA_GENERATOR_PAYMENTGATEWAYIDGENERATOR_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/data/generator/PaymentGatewayIdGenerator.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/generator/UniqueIdGenerator.h"


PaymentGatewayIdGenerator::PaymentGatewayIdGenerator(){

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(URLGLOBALS::getMainPath());
    
stringBuffer->append(PATH_GLOBALS::getInstance()->INIT_PATH);
    
stringBuffer->append(this->IDFILE);
    
stringBuffer->append(UniqueIdGenerator::EXT);
    
UniqueIdGenerator::setFile(stringBuffer->toString(), this->IDFILE);
    
}




        #endif //ORG_ALLBINARY_DATA_GENERATOR_PAYMENTGATEWAYIDGENERATOR_CPP

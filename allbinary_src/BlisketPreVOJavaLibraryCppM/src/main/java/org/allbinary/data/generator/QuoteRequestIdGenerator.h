
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
        



        #ifndef ORG_ALLBINARY_DATA_GENERATOR_QUOTEREQUESTIDGENERATOR_H
        #define ORG_ALLBINARY_DATA_GENERATOR_QUOTEREQUESTIDGENERATOR_H

            #include "java/lang/Exception.h"
        
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "UniqueIdGenerator.h"

class QuoteRequestIdGenerator: public UniqueIdGenerator {

    private: const std::string IDFILE = "quoterequestId";

public: QuoteRequestIdGenerator();

};

            


        #endif //ORG_ALLBINARY_DATA_GENERATOR_QUOTEREQUESTIDGENERATOR_H

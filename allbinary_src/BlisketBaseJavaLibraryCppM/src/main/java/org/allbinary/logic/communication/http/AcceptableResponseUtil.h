
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEUTIL_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEUTIL_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/TsUtil.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AcceptableResponseFactory.h"

class AcceptableResponseUtil
            : public Object
         {

    private: static AcceptableResponseUtil instance() { return AcceptableResponseUtil(); }

    public: static AcceptableResponseUtil getInstance();

                    static int32_t initResult;
                static int32_t init();
            
    public: const BasicArrayList candidateVector = BasicArrayListD();

    public: const BasicArrayList tagNameVector = BasicArrayListD();

    public: std::string get(int32_t index);

    public: std::string getTagName(int32_t index);

    public: int32_t size();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEUTIL_H

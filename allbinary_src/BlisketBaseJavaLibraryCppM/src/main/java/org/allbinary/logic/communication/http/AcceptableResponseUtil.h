
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

class AcceptableResponseUtil
            : public Object
         {

    private: static AcceptableResponseUtil* instance() { static std::unique_ptr<AcceptableResponseUtil> value(new AcceptableResponseUtil()); return value.get(); }

    public: static AcceptableResponseUtil* getInstance();

                    static int32_t initResult;
                static int32_t init();
            
    public: BasicArrayList* candidateVector = new BasicArrayListD();

    public: BasicArrayList* tagNameVector = new BasicArrayListD();

    public: std::string get(int32_t index);

    public: std::string getTagName(int32_t index);

    public: int32_t size();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_HTTP_ACCEPTABLERESPONSEUTIL_H

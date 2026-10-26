
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
        



        #ifndef ORG_ALLBINARY_DATA_GENERATOR_UNIQUEIDGENERATOR_H
        #define ORG_ALLBINARY_DATA_GENERATOR_UNIQUEIDGENERATOR_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/io/IOException.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tables/generator/IdGeneratorEntity.h>

      
#include <org/allbinary/data/tables/generator/IdGeneratorEntityFactory.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "IdGeneratorInterface.h"

class UniqueIdGenerator
            : public Object
        : public IdGeneratorInterface {

    public: static const std::string EXT = ".unq";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: IdGeneratorEntity idGeneratorEntity;

    private: std::string name;

public: UniqueIdGenerator();

    public: void initialize(int32_t value);

                //@Throws(Exception.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void setFile(std::string filePathName, std::string name);

                //@Throws(IOException.constructor)
            //@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: std::string getNext();

};

            


        #endif //ORG_ALLBINARY_DATA_GENERATOR_UNIQUEIDGENERATOR_H

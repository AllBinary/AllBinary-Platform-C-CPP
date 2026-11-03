
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
#include <java/io/IOException.h>
class BasicArrayList;
class BasicArrayListD;
class IdGeneratorEntity;
class IdGeneratorEntityFactory;

class CommonStrings;
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/data/generator/IdGeneratorInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class UniqueIdGenerator
            : public virtual Object
        , public virtual IdGeneratorInterface {

    public: static inline const std::string EXT = ".unq";

    /*protected*/ public: LogUtil* logUtil;

    private: IdGeneratorEntity* idGeneratorEntity;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_DATA_GENERATOR_UNIQUEIDGENERATOR_H_COMPLETE)
        #define ORG_ALLBINARY_DATA_GENERATOR_UNIQUEIDGENERATOR_H_COMPLETE
        #if __has_include(<java/io/IOException.h>)
#include <java/io/IOException.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/data/tables/generator/IdGeneratorEntity.h>)
#include <org/allbinary/data/tables/generator/IdGeneratorEntity.h>
#endif
#if __has_include(<org/allbinary/data/tables/generator/IdGeneratorEntityFactory.h>)
#include <org/allbinary/data/tables/generator/IdGeneratorEntityFactory.h>
#endif

#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("org/allbinary/data/generator/IdGeneratorInterface.h")
#include "org/allbinary/data/generator/IdGeneratorInterface.h"
#endif

        #endif
    

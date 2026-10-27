
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
        



        #ifndef TAGS_GENERIC_GENERICVIEWTAG_H
        #define TAGS_GENERIC_GENERICVIEWTAG_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class LogUtil;
class InputOutputTypeData;
#include <tags/TransformTag.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class GenericViewTag: public TransformTag {

    /*protected*/ public: LogUtil* logUtil;

    private: std::string output;

    private: std::string file;

public: GenericViewTag();

    public: void setOutput(std::string value);

    public: void setFile(std::string value);

};

            


        #endif //TAGS_GENERIC_GENERICVIEWTAG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(TAGS_GENERIC_GENERICVIEWTAG_H_COMPLETE)
        #define TAGS_GENERIC_GENERICVIEWTAG_H_COMPLETE
        #if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/io/InputOutputTypeData.h>)
#include <org/allbinary/logic/io/InputOutputTypeData.h>
#endif
#if __has_include(<tags/TransformTag.h>)
#include <tags/TransformTag.h>
#endif

        #endif
    

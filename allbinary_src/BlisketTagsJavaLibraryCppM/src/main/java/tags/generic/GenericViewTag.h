
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

#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/InputOutputTypeData.h>

      
#include <tags/TransformTag.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class GenericViewTag: public TransformTag {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: std::string output;

    private: std::string file;

public: GenericViewTag();

    public: void setOutput(std::string value);

    public: void setFile(std::string value);

};

            


        #endif //TAGS_GENERIC_GENERICVIEWTAG_H

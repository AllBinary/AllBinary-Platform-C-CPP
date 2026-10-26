
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_DATA_TRANSFORMINFODATADATA_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_DATA_TRANSFORMINFODATADATA_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/io/file/CommonDataFileStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfoDataData
            : public Object
         {

    private: static TransformInfoDataData instance() { return TransformInfoDataData(); }

    public: static TransformInfoDataData getInstance();

private: TransformInfoDataData();

    public: const std::string UNCRYPTED_EXTENSION = CommonDataFileStrings::getInstance().UNCRYPTED_EXTENSION;

    public: const std::string ENCRYPTED_EXTENSION = CommonDataFileStrings::getInstance().ENCRYPTED_EXTENSION;

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_DATA_TRANSFORMINFODATADATA_H

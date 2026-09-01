
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_IMAGEOUTPUTDATA_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_IMAGEOUTPUTDATA_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/System.h"
        
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ImageOutputData
            : public Object
         {

    public: static const std::string SAVE_PATH = StringMaker().append(System::getProperty("user.dir")).appendchar(FilePathData::getInstance().SEPARATORCHAR).append("saves").appendchar(FilePathData::getInstance().SEPARATORCHAR).toString();

private: ImageOutputData();

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_IMAGEOUTPUTDATA_H

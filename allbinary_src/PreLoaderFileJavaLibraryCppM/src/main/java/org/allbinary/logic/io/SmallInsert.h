
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
        



        #ifndef ORG_ALLBINARY_LOGIC_IO_SMALLINSERT_H
        #define ORG_ALLBINARY_LOGIC_IO_SMALLINSERT_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
            #include "../../../../java/lang/System.h"
        
#include <java/io/DataOutputStream.h>

      
#include <java/io/FileOutputStream.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/file/AbFileSystem.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class SmallInsert
            : public Object
         {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: std::string fileName;

    private: std::string string;

public: SmallInsert(std::string fileName);

    public: bool atBeginning(std::string text);

    public: bool after(std::string text, std::string after);

    public: bool atEnd(std::string text);

};

            


        #endif //ORG_ALLBINARY_LOGIC_IO_SMALLINSERT_H

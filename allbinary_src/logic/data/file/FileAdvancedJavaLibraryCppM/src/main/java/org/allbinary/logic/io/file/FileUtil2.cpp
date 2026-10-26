
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2022 AllBinary 
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/io/AbFileInputStream.h>

      
#include <org/allbinary/logic/io/StreamUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "SimpleFileUtil.h"
#include "AbFile.h"

class FileUtil2
            : public Object
         {

    private: static FileUtil2 instance() { return FileUtil2(); }

    public: static FileUtil2 getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FileUtil2::instance();
    
}


    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const StreamUtil streamUtil = StreamUtil::getInstance();

private: FileUtil2(){
}


    public: BasicArrayList loadFileAsList(AbFile file, int32_t max, std::vector<int8_t> byteArray1){

    AbFileInputStream inputStream = 
                null
            ;;
    

        try {
            inputStream= AbFileInputStream(file);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, this->commonStrings.ADD, e);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return SimpleFileUtil::getInstance().loadFileAsList(inputStream, max, byteArray1);;
    
}


};

            


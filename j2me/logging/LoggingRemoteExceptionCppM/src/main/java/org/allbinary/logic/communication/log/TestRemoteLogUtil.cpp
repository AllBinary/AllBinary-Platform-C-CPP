
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
        



            #include <vector>
        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/globals/Globals.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogUtil.h"

class TestRemoteLogUtil
            : public Object
         {

    public: static const std::string PATH = "G:\\mnt\\bc\\mydev\\work\\allbinary_src\\licensing\\data\\";

                //@Throws(Exception.constructor)
            
    public: static void main(std::vector<std::string> args){
TestRemoteLogUtil();
    
}


public: TestRemoteLogUtil(){
Globals::getInstance().init(this->constructor.namegetClassLoader(), TestRemoteLogUtil::PATH);
    

    LogUtil logUtil = LogUtil::getInstance();;
    

    CommonStrings commonStrings = CommonStrings::getInstance();;
    
logUtil.put(commonStrings.EXCEPTION, "Test", "TestClass", Exception("Pretend Exception"));
    
}


};

            


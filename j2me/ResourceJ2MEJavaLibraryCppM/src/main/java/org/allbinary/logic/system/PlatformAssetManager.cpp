
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PlatformAssetManager
            : public Object
         {

    private: static PlatformAssetManager instance() { return PlatformAssetManager(); }

    public: static PlatformAssetManager getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PlatformAssetManager::instance();
    
}


                //@Throws(Exception.constructor)
            
    public: InputStream getResourceAsStream(std::string resource){

    ResourceUtil resourceUtil = ResourceUtil::getInstance();;
    

    InputStream inputStream = resourceUtil.getResourceAsStream(resource);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return inputStream;
    
}


};

            


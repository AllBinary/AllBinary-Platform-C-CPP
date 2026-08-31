
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_PLATFORMASSETMANAGER_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_PLATFORMASSETMANAGER_H

            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/io/InputStream.h>

      
#include <org/allbinary/data/resource/ResourceUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PlatformAssetManager
            : public Object
         {
        

    private: static const instance: PlatformAssetManager = new PlatformAssetManager();

    public static PlatformAssetManager getInstance();

                //@Throws(Exception.constructor)
            
    public InputStream getResourceAsStream(string resource);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_PLATFORMASSETMANAGER_H

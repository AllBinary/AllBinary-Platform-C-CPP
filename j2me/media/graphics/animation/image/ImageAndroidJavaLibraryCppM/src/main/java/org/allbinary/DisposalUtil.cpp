
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/eclipse/swt/graphics/Resource.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DisposalUtil
            : public Object
         {

    private: static DisposalUtil* instance() { static std::unique_ptr<DisposalUtil> value(new DisposalUtil()); return value.get(); }

    public: static DisposalUtil* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DisposalUtil::instance();
    
}


    public: void disposeImage(Image* image){
}


    public: void disposeResource(Resource* resource){

                        if(!resource->isDisposed())
                        
                                    {
                                    resource->dispose();
    

                                    }
                                
}


};

            



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
        



        #ifndef ORG_ALLBINARY_DISPOSALUTIL_CPP
        #define ORG_ALLBINARY_DISPOSALUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/DisposalUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/System.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/eclipse/swt/graphics/Resource.h>

      
#include <org/microemu/device/swt/SwtMutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

DisposalUtil::DisposalUtil() : commonStrings(CommonStrings::getInstance()) {
        }
        auto DisposalUtil::instance_owner() -> DisposalUtil* { static std::unique_ptr<DisposalUtil> value(new DisposalUtil()); return value.get(); }
DisposalUtil* DisposalUtil::instance = DisposalUtil::instance_owner();

    auto DisposalUtil::getInstance() -> DisposalUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return DisposalUtil::instance;
    
}


    auto DisposalUtil::disposeImage(Image* image) -> void{

                        if(image == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return ;
    

                                    }
                                

                        if(image->isMutable())
                        
                                    {
                                    
    SwtMutableImage* mutableImage = dynamic_cast<SwtMutableImage*>(image);;
    
this->disposeResource(dynamic_cast<Resource*>(mutableImage->getImage()));
    

                                    }
                                
                        else {
                            
                        }
                            
}


    auto DisposalUtil::disposeResource(Resource* resource) -> void{

                        if(!resource->isDisposed())
                        
                                    {
                                    System.out.println(this->commonStrings->CLOSE);
    
resource->dispose();
    

                                    }
                                
}




        #endif //ORG_ALLBINARY_DISPOSALUTIL_CPP

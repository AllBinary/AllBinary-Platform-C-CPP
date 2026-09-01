
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
        



            #include "../../java/lang/Object.h"
        
            #include "../../java/lang/System.h"
        
#include <javax/microedition/lcdui/Image.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/eclipse/swt/graphics/Resource.h>

      
#include <org/microemu/device/swt/SwtMutableImage.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class DisposalUtil
            : public Object
         {

    private: static DisposalUtil instance() { return DisposalUtil(); }

    public: static DisposalUtil getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return DisposalUtil::instance();
    
}


    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    public: void disposeImage(Image image){

                        if(image == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                

                        if(image.isMutable())
                        
                                    {
                                    
    SwtMutableImage mutableImage = image as SwtMutableImage;;
    
this->disposeResource(mutableImage.getImage() as Resource);
    

                                    }
                                
                        else {
                            
                        }
                            
}


    public: void disposeResource(Resource resource){

                        if(!resource.isDisposed())
                        
                                    {
                                    console.log(this->commonStrings.CLOSE);
    
resource.dispose();
    

                                    }
                                
}


};

            


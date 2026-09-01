
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
        



#include <java/awt/image/BufferedImage.h>

      
#include <javax/swing.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageIcon.h"

class ImageIconUnique: public ImageIcon {

    private: int32_t id= 0;

public: ImageIconUnique(BufferedImage bufferedImage, int32_t index){
            super(bufferedImage);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->setId(index);
    
}


    public: int32_t getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


    public: void setId(int32_t id){
this->id= id;
    
}


};

            


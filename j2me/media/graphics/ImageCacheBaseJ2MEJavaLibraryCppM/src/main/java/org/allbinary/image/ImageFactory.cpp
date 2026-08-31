
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



            #include "../../../java/lang/Object.h"
        
            #include "../../../java/lang/Exception.h"
        
#include <java/io/InputStream.h>

      
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ImageCacheBaseJavaLibrary - J2ME
class ImageFactory
            : public Object
         {
        

    private: static const instance: ImageFactory = new ImageFactory();

    public static ImageFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ImageFactory.instance;
    
}


                //@Throws(Exception.constructor)
            
    public Image createImageUrl(string url){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Image.createImage(url);;
    
}


                //@Throws(Exception.constructor)
            
    public Image createImage(string caller, int32_t width, int32_t height){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Image.createImage(width, height);;
    
}


                //@Throws(Exception.constructor)
            
    public Image createImageFromInputStream(any = {} key, InputStream inputStream){

    image: Image = Image.createImage(inputStream)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return image;
    
}


};

            


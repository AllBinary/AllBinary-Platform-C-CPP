
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
        



        #ifndef ORG_ALLBINARY_IMAGE_IMAGEFACTORY_H
        #define ORG_ALLBINARY_IMAGE_IMAGEFACTORY_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>

      
#include <javax/microedition/lcdui/Image.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        //ImageCacheBaseJavaLibrary - J2ME
class ImageFactory
            : public Object
         {

    private: static ImageFactory instance() { return ImageFactory(); }

    public: static ImageFactory getInstance();

                //@Throws(Exception.constructor)
            
    public: Image createImageUrl(std::string url);

                //@Throws(Exception.constructor)
            
    public: Image createImage(std::string caller, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: Image createImageFromInputStream(Object* key, InputStream inputStream);

                //@Throws(Exception.constructor)
            
    public: Image createImageFromInputStream(InputStream inputStream);

};

            


        #endif //ORG_ALLBINARY_IMAGE_IMAGEFACTORY_H

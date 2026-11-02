
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/InputStream.h>
class Image;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        //ImageCacheBaseAndroidJavaLibrary
class ImageFactory
            : public virtual Object
         {

    private: static ImageFactory* instance_owner();
    private: static ImageFactory* instance;

    public: static ImageFactory* getInstance();


            
    public: ImageFactory();
        
                //@Throws(Exception.constructor)
            
    public: Image* createImageUrl(std::string url);

                //@Throws(Exception.constructor)
            
    public: Image* createImage(std::string caller, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: Image* createImageFromInputStream(Object* key, InputStream* inputStream);
    public: Image* createImageFromInputStream(const std::string& key, InputStream* inputStream) { return createImageFromInputStream(JavaString::box(key), inputStream); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> Image* createImageFromInputStream(BoxValue key, InputStream* inputStream) { return createImageFromInputStream(JavaBoxes::toObject(key), inputStream); }

                //@Throws(Exception.constructor)
            
    public: Image* createImageFromInputStream(InputStream* inputStream);

};

            


        #endif //ORG_ALLBINARY_IMAGE_IMAGEFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_IMAGEFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_IMAGEFACTORY_H_COMPLETE
        #if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif

        #endif
    

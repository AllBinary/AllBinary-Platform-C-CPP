
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
        



        #ifndef ORG_ALLBINARY_IMAGE_IMAGECACHE_H
        #define ORG_ALLBINARY_IMAGE_IMAGECACHE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/RuntimeException.h"
        
            #include "java/lang/Integer.h"
        
            #include "java/lang/Thread.h"
        
#include <java/io/InputStream.h>
class Image;
class NullImage;
class TsUtil;
class LogUtil;
class CommonStrings;
class StringMaker;
class ResourceUtil;
class GDResources;
class ABSystemWrapper;
class StringUtil;
class Memory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/ImageCacheBase.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageCache: public ImageCacheBase {

    private: static ImageCache* NULL_IMAGE_CACHE_owner();
    public: static ImageCache* NULL_IMAGE_CACHE;

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: ABSystemWrapper* systemWrapper;

    private: TsUtil* tsUtil;

public: ImageCache();

                //@Throws(Exception.constructor)
            
    public: Image* get(std::string caller, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: Image* get(Object* key);
    public: Image* get(const std::string& key) { return get(JavaString::box(key)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> Image* get(BoxValue key) { return get(JavaBoxes::toObject(key)); }
    public: template<typename BoxElement> Image* get(const std::vector<BoxElement>& key) { return get(JavaBoxes::toObject(key)); }

    public: int32_t getIndex(Object* key);
    public: int32_t getIndex(const std::string& key) { return getIndex(JavaString::box(key)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> int32_t getIndex(BoxValue key) { return getIndex(JavaBoxes::toObject(key)); }
    public: template<typename BoxElement> int32_t getIndex(const std::vector<BoxElement>& key) { return getIndex(JavaBoxes::toObject(key)); }

                //@Throws(Exception.constructor)
            
    /*protected*/ public: Image* createImage(Object* key, InputStream* inputStream);
    /*protected*/ public: Image* createImage(const std::string& key, InputStream* inputStream) { return createImage(JavaString::box(key), inputStream); }
    /*protected*/ public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> Image* createImage(BoxValue key, InputStream* inputStream) { return createImage(JavaBoxes::toObject(key), inputStream); }
    /*protected*/ public: template<typename BoxElement> Image* createImage(const std::vector<BoxElement>& key, InputStream* inputStream) { return createImage(JavaBoxes::toObject(key), inputStream); }

    public: bool isLazy();

};

            


        #endif //ORG_ALLBINARY_IMAGE_IMAGECACHE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_IMAGE_IMAGECACHE_H_COMPLETE)
        #define ORG_ALLBINARY_IMAGE_IMAGECACHE_H_COMPLETE
        #if __has_include(<java/io/InputStream.h>)
#include <java/io/InputStream.h>
#endif
#if __has_include(<javax/microedition/lcdui/Image.h>)
#include <javax/microedition/lcdui/Image.h>
#endif
#if __has_include(<javax/microedition/lcdui/NullImage.h>)
#include <javax/microedition/lcdui/NullImage.h>
#endif
#if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/data/resource/ResourceUtil.h>)
#include <org/allbinary/data/resource/ResourceUtil.h>
#endif
#if __has_include(<org/allbinary/game/gd/resource/GDResources.h>)
#include <org/allbinary/game/gd/resource/GDResources.h>
#endif
#if __has_include(<org/allbinary/logic/ABSystemWrapper.h>)
#include <org/allbinary/logic/ABSystemWrapper.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/system/Memory.h>)
#include <org/allbinary/system/Memory.h>
#endif
#if __has_include("org/allbinary/image/ImageCacheBase.h")
#include "org/allbinary/image/ImageCacheBase.h"
#endif

        #endif
    


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
        
            #include "java/lang/Thread.h"
        
#include <java/io/InputStream.h>
class Image;
class NullImage;
class J2MEUtil;
class TsUtil;
class ResourceUtil;
class GDResources;

class StringMaker;
class StringUtil;
class CommonStrings;
class Memory;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/image/ImageCacheBase.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class ImageCache: public ImageCacheBase {

    private: static ImageCache* NULL_IMAGE_CACHE_owner();
    public: static ImageCache* NULL_IMAGE_CACHE;

    /*protected*/ public: CommonStrings* commonStrings;

    private: TsUtil* tsUtil;

public: ImageCache();

    public: void addListener(Object* renderer);
    public: void addListener(const std::string& renderer) { return addListener(JavaString::box(renderer)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void addListener(BoxValue renderer) { return addListener(JavaBoxes::toObject(renderer)); }
    public: template<typename BoxElement> void addListener(const std::vector<BoxElement>& renderer) { return addListener(JavaBoxes::toObject(renderer)); }

    public: int32_t getIndex(Object* key);
    public: int32_t getIndex(const std::string& key) { return getIndex(JavaString::box(key)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> int32_t getIndex(BoxValue key) { return getIndex(JavaBoxes::toObject(key)); }
    public: template<typename BoxElement> int32_t getIndex(const std::vector<BoxElement>& key) { return getIndex(JavaBoxes::toObject(key)); }

                //@Throws(Exception.constructor)
            
    public: Image* get(std::string caller, int32_t width, int32_t height);

                //@Throws(Exception.constructor)
            
    public: Image* getWithKey(Object* key);
    public: Image* getWithKey(const std::string& key) { return getWithKey(JavaString::box(key)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> Image* getWithKey(BoxValue key) { return getWithKey(JavaBoxes::toObject(key)); }
    public: template<typename BoxElement> Image* getWithKey(const std::vector<BoxElement>& key) { return getWithKey(JavaBoxes::toObject(key)); }

                //@Throws(Exception.constructor)
            
    public: void loadImageForAnimation();

    public: void progressEnded();

    public: void runTask();

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
#if __has_include(<org/allbinary/J2MEUtil.h>)
#include <org/allbinary/J2MEUtil.h>
#endif
#if __has_include(<org/allbinary/TsUtil.h>)
#include <org/allbinary/TsUtil.h>
#endif
#if __has_include(<org/allbinary/data/resource/ResourceUtil.h>)
#include <org/allbinary/data/resource/ResourceUtil.h>
#endif
#if __has_include(<org/allbinary/game/gd/resource/GDResources.h>)
#include <org/allbinary/game/gd/resource/GDResources.h>
#endif

#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/system/Memory.h>)
#include <org/allbinary/system/Memory.h>
#endif
#if __has_include("org/allbinary/image/ImageCacheBase.h")
#include "org/allbinary/image/ImageCacheBase.h"
#endif

        #endif
    
